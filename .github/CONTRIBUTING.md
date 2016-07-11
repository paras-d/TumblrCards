# Contributing to the project

So you want to know how you can help?? You've come to the right place!
Below you will find many ways you can help.
First and foremost check the TODO's to see what needs to be done.
Once you're ready to start programming see the Programming Standards section.

I have broken the goals and needs by the "Difficulty" of the task. Beginner tasks
will be more specific, such as working on a certain function or method. Intermediate tasks
will be a little broader, such as creating a specific class or utility. Advanced
tasks will be major milestones that need to be completed. And should only be attempted
by someone that understand the language.

### TODO's

#### BEGINNER
- [ ] Start working on Wiki for the game
- [ ] Fix any and all gramatical/spelling errors
- [ ] Come up with better name than TumblrCards
- [ ] Add string flags to the Card.trigger() (i.e "ETB" for enters the battlefield) so the ability knows when to trigger.
- [ ] Create command line arguements in main.cpp
- [ ] Add combat methods to Card class (i.e. attack(Card* card)) that deals damage to the card arguement
- [ ] Finish set_pos() method in imageMapp.cpp
- [ ] Finish intersects() method in imageMapp.cpp
- [ ] Work on TODO methods in point.cpp
- [ ] Work on TODO methods in rectangle.cpp
- [ ] Work on TODO methods in game.cpp and imageMap.cpp

#### INTERMEDIATE
- [ ] Create shape classes (i.e Rectangle) for use in Console API for ease of creating images
- [ ] Quickly generate unique cards for constructing decks (use best balance of security and speed)
- [ ] Finish settings class and add actual settings to the game (i.e console size, multi-playuer server, etc.)
- [ ] Create deck editor classes and structure
- [ ] Create single player AI to play against
- [ ] Finish Game class unload function
- [ ] Finish quit() method in MainMenu class
- [ ] Improve speed of parse_flag() method in imageMap.cpp
- [ ] Finish Point class
- [ ] Finish Rectangle class

#### ADVANCED
- [ ] Create UI for the game in the draw() method of game.cpp
- [ ] Allow game to connect to a server to begin work on Multiplayer
- [ ] Settings menu should load and save settings
- [ ] Test balance of cards


These TODO's are very broad and this list will grow as new idea's are brought to the table and more people begin to contribute.

Message me with questions or visit me on Tumblr at import-os.tumblr.com

### Pull Request

For something to be considered for merging in to master it must be 
submitted as a Pull Request to development first. All Pull Requests 
will be given at least 24 hours before being merged in to the 
development branch. Pull requests may take longer to be merged if more 
needs to change. On every monday the development branch will have a pull 
request made to be merged in to the master repository. This pull request 
will sit for one week to be reviewed until it is merged in on Sunday. 
The weekly pull request may be delayed if more changes need to be made.

### Programming Standards

#### Code Blocks
````c++
function Class::foo(arg bar) {
	// do stuff
	// 4 space tabbed indent
}
````

#### Function and Variable Naming
````c++
function Class::my_function_name(arg variableName) {
	// do stuff
}
````

#### Class Naming
````c++
class ClassName {
private:
	// private variables and functions here
	
public:
	// public variables and functions here
};
````

#### File Naming
````c++
cppFile.cpp
headerFile.h
````
