#include "iostream"

#include "Stack.hpp"

using namespace std;

int main()
{
	Stack myStack;
	
	cout << "adding items directly to the stack" << endl;
	cout << "adding 11 to index: " << myStack.getIndex() << endl;
	myStack.push(11);
	cout << "adding 35 to index: " << myStack.getIndex() << endl;
	myStack.push(35);
	cout << "adding 24 to index: " << myStack.getIndex() << endl;
	myStack.push(24);
	cout << "adding 56 to index: " << myStack.getIndex() << endl;
	myStack.push(56);
	cout << "adding 46 to index: " << myStack.getIndex() << endl;
	myStack.push(46);
	cout << "adding 1 to index: " << myStack.getIndex() << endl;
	myStack.push(1);
	cout << "adding 98 to index: " << myStack.getIndex() << endl;
	myStack.push(98);
	cout << "adding 176 to index: " << myStack.getIndex() << endl;
	myStack.push(176);
	cout << "adding 94 to index: " << myStack.getIndex() << endl;
	myStack.push(94);
	cout << "adding 52 to index: " << myStack.getIndex() << endl;
	myStack.push(52);

	cout << "printing out Stack" << endl;

	myStack.print();

	system("pause");

	return 0;
}