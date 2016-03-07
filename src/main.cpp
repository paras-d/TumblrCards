#include "main.h"

int main(int argc, char* argv[]) {
	cout << "~~Welcome to Tumblr Cards~~" << endl;
	Card card("test1");
	cout << card.to_string() << endl;
	return 0;
}
