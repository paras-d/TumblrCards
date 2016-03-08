#include "main.h"

int main(int argc, char* argv[]) {
	cout << "~~Welcome to Tumblr Cards~~" << endl;
	Card card1("test1");
	cout << card1.to_string() << endl;

	cout << endl;

	Card card2("test2");
	cout << card2.to_string() << endl;
	return 0;
}
