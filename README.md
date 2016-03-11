# TumblrCards
A text based multiplayer strategy card games written by members of the Tumblr Comp Sci community.

We are still in the idea's phase so for now I will be setting up the program to at least generate 
a 60 card deck to be used for this game.

##### IDEAS

We could create suits categories and  have it like an RPG style - with health and energy for attacks 
so taking it turn based, and each card in every category could have certain abilities, health's, manas of their 
own or something? Then att/def points?

What if it's am entirely creature based game? No spells or anything but the creatures have the spell like 
abilities on them? That would make the turn based aspect a lot easier to code because there wouldn't be any 
"instant" type spells. Just triggers on creatures. 

#### TODO's
- [X] Create basic class for a card
- [ ] Figure out a way to quickly generate unique cards with abilities
- [ ] Create a card list for the first set
- [ ] Generate 60 card deck and player hand
- [X] Create basic entrance and menu system for the game
- [X] Create rules for the card game
- [X] Layout the turn order
- [ ] Create single player game with AI
- [ ] Create multiplayer version

These TODO's are very broad and this list will grow as new idea's are brought to the table and more people begin to contribute.

Message me with questions or visit me on Tumblr at import-os.tumblr.com

## Rule's

TumblrCards (we are working on a name) is a role-playing card game. This game is unique in its resource system. Each player begins the game with 10 health. Throughout the game your total mana to spend each turn will be equivalent to your opponents life total. To explain further, on turn one you will have 10 mana to spend on casting creatures. Any damage you do to your opponent will decrease your available mana to spend. If your opponents health is at 8, you have 8 mana to spend. If your opponent has 12 life you have 12 mana to spend.

At the start of each game the player that takes the first turn is randomly decided. The player that goes first is given the option to have both players start with an extra card, or an extra 5 life (and therefore increasing the amount of mana available to each player at the start of the game).

### The Game

At the start of each game, all players begin with a hand of 7 cards off of the top of their respective 60 card decks. Each player also starts the game with 10 life. Depending on which option is chosen by the player that goes first, you may start with 8 cards or 15 life. Each players turn order is as follows:

1) Start of turn
2) Draw Phase
3) Casting Phase
4) Combat Phase
5) End of turn

Each players turn follows this same format. Each phase willl be explained in detail below.

#### Start of Turn

Not much will happen during the beginning of each turn. The game will check for any start of turn triggers on creatures in play, taking priority of opponents triggers first. After all triggers have finished the game will move to the draw phase.

#### Draw Phase

During the draw phase the player currently taking their turn is given the top card of their deck and it is put in their hand. Again the game checks for any triggers that would go off when a player draws a card. After all triggers are complete the player is given the card and we move to the casting phase.

#### Casting Phase

In the casting phase the player taking their turn may play any card in their hand given they have the available mana. The total mana to spend each turn will be equivalent to your opponents life total during the Start of Turn phase. To explain further, on turn one you will have at least 10 mana to spend on casting creatures. Any damage you do to your opponent will decrease your available mana to spend. If your opponents health is at 8, you have 8 mana to spend. If your opponent has 12 life you have 12 mana to spend. During this phase when you cast a creature that costs 2 mana, and you had 10 mana to spend, you will now have 8 mana to spend on other cards in your hand. This phase will continue until you run out of available mana to spend, or you choose to move to the combat phase.

#### Combat Phase

At the bottom of creature there is an attack and defense (in the form Atk/Def). During the combat phase the player taking their turn has the opportunity to attack their opponent. However, before damage may be dealt to the opponent, the opponent must not have any creatures on their side of the field. If they have a creature, you must attack and destroy their creature before you are able to attack that player directly. This goes for all creatures your opponent controls. Each creature may only attack once per turn.

When two creatures are fighting they deal their respective attack damage again their enemies defense/health. The creatures deal their damage at the same time. When a creatures defense/health becomes equal to 0 or less, it is considered destroyed. Once all creatures an opponent controls have been destroyed, damage may then be dealt directly to them. If a player plays another creature on their turn, that creature must then be destroyed before damage may be dealt to that payer again.

#### End of Turn 

Not much will happen during the end of each turn. The game will check for any end of turn triggers on creatures in play, taking priority of the current players triggers first. After all triggers have finished the game will move to the next players start of turn phase.