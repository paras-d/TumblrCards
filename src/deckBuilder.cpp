/*
 * deckBuilder.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: user
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include "dirent.h"
#include "deckBuilder.h"
#include "utils.h"

using namespace std;

DeckBuilder::DeckBuilder()
    :selected(0) {
	// TODO Auto-generated constructor stub
}

DeckBuilder::~DeckBuilder() {
	// TODO Auto-generated destructor stub
}

void DeckBuilder::start() {
	/*
	 * TODO Add any initializing stuff here
	 * before printing menu. Possibly parse in
	 * decks based on decklist files to save
	 * decks?
	 */

	DIR* dir;
	struct dirent *ent;
	if ((dir = opendir ("../src/decklists/")) != NULL) {
	    while ((ent = readdir (dir)) != NULL) {
            load_deckent->d_name
        }
	}

	do print_menu("screen_builder");
	while(!get_input());
}

bool DeckBuilder::load_deck(std::string file) {
    ifstream deck_file("../src/decklists/"+file);
    if(deck_file.is_open()) {
        Deck* deck = new Deck(file.substr(0, file.find(".lst")));
        string line;
        while(getline(deck_file, line)) {
            int num;
            stringstream ss; 
            ss << line.substr(line.find('X')+1);
            ss >> num;
            for(int i = 0; i < num; i++) {
                Card* card = new Card();
                card->build_card(line.substr(0, line.find('X')-1));
                deck->add_card(card);
            }
        }
        list.push_back(deck);
        selected = list.size() - 1;
    } else return false;
    return true;
}

bool DeckBuilder::save_deck(Deck deck) {
    ofstream save("../src/decklists/"+deck.get_name()+".lst");
    if(save.is_open()){
        save << deck.to_file();
    } else return false;
    save.close();
    cout << "Deck Saved!" << endl;
    return true;
}

void DeckBuilder::new_deck() {
	print_center("Enter new deck name: ");
	string name;
	cin >> name;
	// Need to parse user input here to exclude special characters
	list.push_back(new Deck(name));
	selected = list.size() - 1;
	cout << "I would do card selection stuff here." << endl;
	cout << "Building you a temp deck for testing." << endl;
	while(list[selected]->size() < 20) {
	    Card* temp = new Card();
	    if(list[selected]->size() % 2 == 0)
	        temp->build_card("test1");
	    if(list[selected]->size() % 3 == 0)
	        temp->build_card("test2");
	    if(list[selected]->size() % 4 == 0)
	        temp->build_card("test3");
		list[selected]->add_card(temp);
	}
	
	if(!save_deck(*list[selected]))
	    cout << list[selected]->get_name() << " could not be saved." << endl;
	
	do print_menu("screen_builder");
	while(!get_input());
}

void DeckBuilder::select_deck() {
	clear_console();
	if(!list.empty()) {
		unsigned int i = 1;
		for(Deck* deck : list) {
			if(i - 1 == selected) cout << '*';
			else cout << " ";
			cout << i++ << ") " << deck->get_name() << endl;
		}
		cout << "Select your primary deck: ";
		cin >> selected;
		if(selected < 1 || selected > list.size()) {
			selected = 1;
		}
		selected--;
	} else cout << "You don't have any decks!" << endl;

	do print_menu("screen_builder");
	while(!get_input());
}

void DeckBuilder::edit_selected() {
	cout << "I would do card selection stuff here." << endl;
	do print_menu_clr("screen_builder");
	while(!get_input());
}

bool DeckBuilder::print_menu(string type) {
    string screen_disp = get_display_screen(type);
    cout << screen_disp << endl;
    return true;
}

bool DeckBuilder::print_menu_clr(string type) {
    clear_console();
    print_menu(type);
    return true;
}

bool DeckBuilder::get_input() {
	// TODO take in the players selection and call that method.
	int selection = 5;
	stringstream ss;
	string in;
	cin >> in;
	ss << in;
	ss >> selection;
	switch(selection) {
		case 1:
			new_deck();
			break;
		case 2:
			select_deck();
			break;
		case 3:
			edit_selected();
			break;
		case 4:
			break;
		default:
			cout << in << " is not a valid option." << endl;
			return false;
	}
	return true;
}

const Deck* DeckBuilder::get_selected() {
	if(!list.empty())
		return list[selected];
	else
		return nullptr;
}
