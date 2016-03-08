#ifndef _deck
#define _deck

using namespace std;

enum class Suit { Diamonds, Hearts, Clubs, Spades };

class Card {
private:
	// the value of the card 2-13
	int value;
	Suit suit;
public:
	Card();
	string toString();
};

class Deck {
private:
	queue<Card> deck;
public:
	Deck();
	Card getTop();
	Card getCard();
	void shuffle();
};

#endif

