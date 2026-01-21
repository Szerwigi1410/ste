#include <iostream>
#include "stuff.hpp"
#include "colors.h"
using namespace std;

void dispHelp() {
	cout << BOLD << "n/new" << RESET << " - new file" << endl;
	cout << BOLD << "o/open" << RESET << " - open file" << endl;
	cout << BOLD << "v/view" << RESET << " - view file" << endl;
	cout << BOLD << "r/run" << RESET << " - run file" << endl;
	cout << BOLD << "me/make executable" << RESET << " - make the file executable" << endl;
	cout << BOLD << "ls/dir" << RESET << " - list files and the folders in the current folder" << endl;
	cout << BOLD << "cls/clear" << RESET << " - clears the screen" << endl;
	cout << BOLD << "h/help" << RESET << " - see this message" << endl;
	cout << BOLD << "q/quit/exit/kill your self" << RESET << " - exit the editor" << endl;
}
