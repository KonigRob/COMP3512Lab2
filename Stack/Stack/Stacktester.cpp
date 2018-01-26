#include "iostream"
#include "iomanip"
#include "random"
#include "ctime"

#include "Stack.hpp"

using namespace std;

int main()
{
	Stack myStack;
	default_random_engine generator(time(0));
	uniform_real_distribution<double> distrubition(0, 10);
	

	int randomArr[11];

	cout << "adding items directly to the stack" << endl;
	for (int i = 0; i < size(randomArr); i++) {
		double myRandom = distrubition(generator);
		randomArr[i] = myRandom;
		cout << setw(8) << "Adding: " << randomArr[i] << " to index: " << myStack.getIndex() << endl;
		myStack.push(randomArr[i]);
	}

	cout << "printing out Stack" << endl << endl;

	myStack.print();

	system("pause");

	return 0;
}