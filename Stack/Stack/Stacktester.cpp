#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "Stack.hpp"

using namespace std;

int main()
{
	Stack myStack1{};
	
	char selection;

	while (1) 
	{
		cout << "MENU" << endl;
		cout << "p or P for push" << endl;
		cout << "a or A for auto random fill" << endl;
		cout << "l or L for auto fill" << endl;
		cout << "o or o for pop" << endl;
		cout << "t or T for top" << endl;
		cout << "m or M for empty" << endl;
		cout << "f or F for full" << endl;
		cout << "r or R for print" << endl;
		cout << "q or Q for quit" << endl;
		cout << "w or W for printing the other one" << endl;

		cin >> selection;
		if (selection == 'p' || selection == 'P') {
			int entry;
			cin >> entry;
			myStack1.push(entry);
		}
		else if (selection == 'a' || selection == 'A') {
			myStack1.addRandom();
			cout << "Random values added to the stack" << endl;
		} 
		else if (selection == 'l' || selection == 'L') {
			myStack1.addFull();
			cout << "Values added" << endl;
		}
		else if (selection == 'o' || selection == 'O') {
			myStack1.pop();
			cout << "popped of the top of the stack" << endl;
		}
		else if (selection == 't' || selection == 'T') {
			if (myStack1.top() != -1) {
				cout << "the top of the stack is: " << myStack1.top() << endl;
			}
			else {
				cout << "error" << endl;
			}
		}
		else if (selection == 'M' || selection == 'M') {
			if (myStack1.empty()) {
				cout << "The stack is empty" << endl;
			}
			else {
				cout << "The stack is not empty" << endl;
			}
		}
		else if (selection == 'f' || selection == 'F') {
			if (myStack1.full()) {
				cout << "The stack is empty" << endl;
			}
			else {
				cout << "The stack is not empty" << endl;
			}
		}
		else if (selection == 'r' || selection == 'R') {
			if (!myStack1.empty()) {
				cout << myStack1;
			}
			else {
				cout << "Nothing to print, Error" << endl;
			}
		}
		else if (selection == 'q' || selection == 'Q') {
			return 0;
		}
		else if (selection == 'w' || selection == 'W') {
			Stack myStack2(myStack1);
			if (!myStack2.empty()) {
				cout << myStack2;
			}
			else {
				cout << "Nothing to print, Error" << endl;
			}
		}
		else {
			cout << "\n Invalid selection";
		}
	}
	return 0;
}