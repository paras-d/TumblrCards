/*
 * game.cpp
 *
 *  Created on: Mar 26, 2016
 *      Author: Tumblr
 */
#include <string>
#include <iostream>
#include <sstream>
#include "game.h"
#include "console/utils.h"

using namespace std;

Game::Game(string type) {
	players = type;
	if(players != "single" || players != "mutli")
		// Throw custruction error here
	cont = true;
	myTurn = false;
}

Game::~Game() {
	/*
	 * TODO Auto-generated destructor stub
	 */
}

void Game::load_content(const Deck selected) {
	/*
	 * TODO Load needed game content here
	 * suck as deck lists
	 */

	 // loads in the selected deck for the player
	player.select_deck(selected);
	for(int i = 0; i < 5; i++) player.draw();
	player.set_mana(opponent.get_life());
	player.get_deck()->shuffle();

	if(players == "single") {
		/*
		 * TODO loads AI's deck here
		 * For now it will just be
		 * a copy of the players deck.
		 */
		opponent.select_deck(selected);
		for(int i = 0; i < 5; i++) opponent.draw();
		opponent.set_mana(player.get_life());
		opponent.get_deck()->shuffle();
	}
	else if(players == "mutli") {
		// loads opponenets deck here
	}
	else { /*Something went wrong???*/ }
	
	update();
}

void Game::unload_content() {
	/*
	 * TODO Unload game data here
	 * this should be called at the end of the game
	 * to prep us for deconstruction
	 */
}

void Game::update() {
	/*
	 * TODO This is the running function of the game.
	 * This will be where the player takes their turn.
	 */

    // Multiplayer should not play yet
	if(players == "multi") return;
	myTurn = true;
	draw();
	string in;
	cin >> in;
	size_t choice = 0;
	istringstream(in) >> choice;
    if(player.get_mana() > 0 && choice != 0) {
        player.cast(choice - 1);
    	update();
    } else {
        /* "Combat phase" */
        /* "Draw phase" */
        if(player.get_hand()->size() < 3)
            while(player.get_hand()->size() < 3)
                player.draw();
        else player.draw();

        
	    cout << "enter exit to exit: ";
	    cin >> in;
	    if(in == "exit")
		    cont = false;

	    if(cont) {
	    	opponent.set_mana(player.get_life());
		    if(players == "single")
			    sp_update();
		    else if(players == "multi")
			    mp_update();
	    } else
		    unload_content();
    }
}

void Game::sp_update() {
	/*
	 * TODO Single player logic here
	 * This will be where the AI takes their turn
	 */
	myTurn = false;
    draw();

	if(opponent.get_mana() > 0 && opponent.get_hand()->size() > 0) {
        opponent.cast(/* Opponent casts card here */ 0);
    	sp_update();
    } else {
        /* "Combat phase" */
        /* "Draw phase" */
        if(opponent.get_hand()->size() < 3)
            while(opponent.get_hand()->size() < 3)
                opponent.draw();
        else opponent.draw();
    }
    
	player.set_mana(opponent.get_life());
	update();
}

void Game::mp_update() {
	/*
	 * TODO Multiplayer game works here
	 * This will be where the opponent takes their turn
	 */
	myTurn = false;
	draw();

	cout << "mp: opponents turn starts" << endl;
	player.set_mana(opponent.get_life());
	
	update();
}

void Game::draw() {
    /*
	 * TODO Draw the board state and players hand here.
	 * The game will absolutly not print like this. I
	 * am just doing incredibly basic output to make
	 * sure everything is working correctly. If someone
	 * wants to start working on making the cli UI that
	 * would be great! Theoretically no output should
	 * ever be done in the update methods.
	 */
	clear_console();
	cout << "Battlefield: \n " << opponent.get_board()->to_string() << endl;
	cout << " " << player.get_board()->to_string() << endl;
    cout << "Mana: " << player.get_mana() << endl; 
    cout << "Hand: " << endl;
    cout << player.get_hand()->to_string() << endl;
    if(myTurn) cout << "Input: ";
}
