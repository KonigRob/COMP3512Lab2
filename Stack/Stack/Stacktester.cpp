#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "Stack.hpp"

using namespace std;

int main()
{
	Stack myStack;
	

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

		cin >> selection;
		switch (selection)
		{
		case 'p':
		case 'P':
			int entry;
			cin >> entry;
			myStack.push(entry);
			break;
		case 'a':
		case 'A':
			myStack.addRandom();
			cout << "Random values added to the stack" << endl;
			break;
		case 'l':
		case 'L':
			myStack.addFull();
			cout << "Values added" << endl;
		case 'o':
		case 'O':
			myStack.pop();
			cout << "popped of the top of the stack" << endl;
			break;
		case 't':
		case 'T':
			if (myStack.top() != -1) {
				cout << "the top of the stack is: " << myStack.top() << endl;
			}
			else {
				cout << "error" << endl;
			}
			break;
		case 'm':
		case 'M':
			if (myStack.empty()) {
				cout << "The stack is empty" << endl;
			}
			else {
				cout << "The stack is not empty" << endl;
			}
			break;
		case 'f':
		case 'F':
			if (myStack.full()) {
				cout << "The stack is empty" << endl;
			}
			else {
				cout << "The stack is not empty" << endl;
			}
			break;
		case 'r':
		case 'R':
			if (!myStack.empty()) {
				cout << myStack;
			}
			else {
				cout << "Nothing to print, Error" << endl;
			}
			break;
		case 'q':
		case 'Q':
			return 0;
		default: cout << "\n Invalid selection";

		}



		


		//system("pause");
	}
	return 0;
}