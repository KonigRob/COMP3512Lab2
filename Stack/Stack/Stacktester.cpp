#include "iostream"
#include "iomanip"
#include "Stack.hpp"

using namespace std;

int main()
{
	Stack myStack;
	
	int TWENTY = 20;
	const int NEIN = 9;
	char selection;

	while (1) 
	{
		cout << "MENU" << endl;
		cout << "p or P for push" << endl;
		cout << "a or A for auto fill" << endl;
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
			myStack.print();
			break;
		case 'q':
		case 'Q':
			return 0;
		default: cout << "\n Invalid selection";
		}



		/*//adding 11 to show that it triggers a edge case
		for (int i = TWENTY; i > NEIN; i--) {
		cout << "adding: " << i << " to index: " << myStack.getIndex() << endl;
		myStack.push(i);
		}*/


		//system("pause");
	}
	return 0;
}