# TumblrCards

```
     /:\                       (""")
     |:|          /$$           III            TumblrCards:
     |:|         | $$         __III__             A text based multiplayer
     |:|        /$$$$$$     /:-.___,-:\           strategy card game.
     |:|       |_  $$_/     \]  |:|  [/
     |:|         | $$           |:|               Written by members of the
 /]  |:|  [\     | $$ /$$       |:|               Tumblr Computer Science community.
 \:-'"""`-:/     | "$$$$/       |:|
   ""III""        \___/         |:|
     III                        |:|
    (___)                       \:/
```

A text based multiplayer strategy card game written by members of the Tumblr Computer Science community.

We are still in the idea's phase so for now I will be setting up the program to at least generate 
a 60 card deck to be used for this game.

#### IDEAS

As larger ideas are discussed in Slack they will be added here for reference.

As of right now there is no maximum hand size. This is subject to change during testing.

#### TODO's

See the CONTRIBUTING file for the list of TODO's

### Communication

This project will be using an invite only Slack channel. If you would like an invite, or have any questions, you can message incomingstick directly or visit his Tumblr page.

## Building

CMake is used to build the project. If you're using an IDE, it may be able to detect the source tree and build settings automatically. No outside libraries are currently used, so most (if not all) systems should be good to go.

To build, make sure you have the following:
* CMake 3.0 or greater

### Building on *NIX systems

1. Make a new directory called "build" in the project root. 
2. Move into that directory and run `cmake ..`. This will generate a makefile.
3. Run `make`. Optionally, if you have extra CPU cycles to spare, you can use `make -jX`, where X is the number of CPUs you have.
4. If everything built successfully, you can run it by typing `./tumblrcards` in your terminal.

### Building on Windows systems

Coming soon. For now build using Cygwin, MinGW, Linux Subsystem for Windows, or the like.

## Rule's of the Game

TumblrCards (we are working on a name) is a role-playing card game. This game is unique in its resource system. Each player begins the game with 10 health. Throughout the game your total mana to spend each turn will be equivalent to your opponents life total. To explain further, on turn one you will have 10 mana to spend on casting creatures. Any damage you do to your opponent will decrease your available mana to spend. If your opponents health is at 8, you have 8 mana to spend. If your opponent has 12 life you have 12 mana to spend.

At the start of each game the player that takes the first turn is randomly decided. The player that goes first is given the option to have both players start with an extra card, or an extra 5 life (and therefore increasing the amount of mana available to each player at the start of the game).

### The Game

At the start of each game, all players begin with a hand of 4 cards off of the top of their respective 20 card decks. No deck may contain more than 2 copies of any card. No deck may contain more than one copy of any card if that cards cost is 6+. Each player also starts the game with 10 life. Depending on which option is chosen by the player that goes first, you may start with 5 cards or 15 life. Each players turn order is as follows:

1. Start of turn
2. Casting Phase
3. Combat Phase
4. Draw Phase
5. End of turn

Each players turn follows this same format. Each phase willl be explained in detail below. If any card disagrees with the rules below, the rules on the card are to be followed.

#### Start of Turn

Not much will happen during the beginning of each turn. The game will check for any start of turn triggers on creatures in play, taking priority of opponents triggers first. After all triggers have finished the game will move to the draw phase.

#### Casting Phase

In the casting phase the player taking their turn may play any card in their hand given they have the available mana. The total mana to spend each turn will be equivalent to your opponents life total during the Start of Turn phase. To explain further, on turn one you will have at least 10 mana to spend on casting creatures. Any damage you do to your opponent will decrease your available mana to spend. If your opponents health is at 8, you have 8 mana to spend. If your opponent has 12 life you have 12 mana to spend. During this phase when you cast a creature that costs 2 mana, and you had 10 mana to spend, you will now have 8 mana to spend on other cards in your hand. This phase will continue until you run out of available mana to spend, or you choose to move to the combat phase.

#### Combat Phase

At the bottom of creature there is an attack and defense (in the form Atk/Def). During the combat phase the player taking their turn has the opportunity to attack their opponent. However, before damage may be dealt to the opponent, the opponent must not have any creatures on their side of the field. If they have a creature, you must attack and destroy their creature before you are able to attack that player directly. This goes for all creatures your opponent controls. Each creature may only attack once per turn.

All attackers are declaired at once, so if you have to attack a creature, you may not attack that creatures controler unless a card says otherwise.

When two creatures are fighting they deal their respective attack damage again their enemies defense/health. The creatures deal their damage at the same time. When a creatures defense/health becomes equal to 0 or less, it is considered destroyed. Once all creatures an opponent controls have been destroyed, damage may then be dealt directly to them. If a player plays another creature on their turn, that creature must then be destroyed before damage may be dealt to that payer again.


#### Draw Phase

During the draw phase the player currently taking their turn is given the top card of their deck until they have at least 3 cards in hand. If you already have 3 or more cards in hand, you may draw a card. There is no maximum handsize. Again the game checks for any triggers that would go off when a player draws a card, for each card drawn. After all triggers are complete the player is given the card(s) and we move to the casting phase.

If a player would draw a card and has no cards left in their deck to draw, that player shuffles his or her discard pile and puts it face down as their deck. The player does not get to draw the card they would have drawn.


#### End of Turn 

Not much else will happen during the end of each turn. The game will check for any end of turn triggers on creatures in play, taking priority of the current players triggers first. After all triggers have finished the game will move to the next players start of turn phase.

#### Winning the Game

The game is won when your opponents life total reaches 0. The game will become increasingly difficult as your opponents life approaches 0. If a card specifies another way to win (or lose!) follow that cards text.
