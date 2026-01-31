#include <iostream>
#include <fstream>
#include <string>
#include "colors.h"
#include "stuff.hpp"
using namespace std;

int main(int argc, char* argv[]) {
	string tosave;
	string in;
	string qest;

	string toload;
	string fileNem;

	bool IsWorking = true;
	//args
	ifstream inputa(argv[1]);
	if(inputa.fail()) {
		cout << BOLD << RED << "Couldn't open the file: " << RESET << argv[1] << endl;
	}
	else {
		cout << BOLD << argv[1] << ":"<< RESET << endl;
			while (getline(inputa, tosave)) {
				cout << tosave << endl;
			}
	}

	while (IsWorking == true) {
		getline(cin, in);
		if (in == "n" || in == "new") {
			cout << "File name and extension: ";
			cin >> fileNem;
            		cout << "Write file content below:" << endl;

	            	ofstream output(fileNem);

            		while (true) {
                		getline(cin, tosave); // Read a full line from user
                		if (tosave == "END") break; // Stop on sentinel value
                		output << tosave << '\n'; // Write line to file with newline
            		}
                	output.close();
			cout << BOLD << "File saved" << RESET << endl;
        	}
		else if (in == "v" || in == "view") {
			cout << "\033[1m" << "File to view: " << RESET;
			cin >> toload;
			ifstream input(toload);
				if(input.fail()) {
					cout << BOLD << RED << "Couldn't open the file: " << RESET << toload << endl;
				}
				else {
					cout << BOLD << toload << ":"<< RESET << endl;
					while (getline(input, tosave)) {
						cout << tosave << endl;
					}
				}
		}
		else if (in == "r" || in == "run") {
			cout << "To run: ";
			cin >> fileNem;
			system(("./" + fileNem).c_str());
		}
		else if (in == "c" || in == "compile") {
			//system
		}
		else if (in == "me" || in == "make executable") {
			cout << "file: ";
			cin >> fileNem;
			system(("chmod +x " + fileNem).c_str());
		}
		else if (in == "help" || in == "h") {
			dispHelp();
		}
		else if (in == "ls") system("ls -aCF");
		else if (in == "dir") system("ls -l");
		else if (in == "cls" || in == "clear") system("clear");
		else if (in == "q" || in == "quit" || in == "exit" || in == "kill your self") IsWorking = !IsWorking; // exitting
		else cout << "?" << endl;
	}
	return 0;
}
