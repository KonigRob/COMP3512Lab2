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
	uniform_real_distribution <double> distrubition(0, 10);

	int randomArr[11];
	int TWENTY = 20;
	const int NEIN = 9;
	char selection;
	

	cin >> selection;
	switch (selection)
	{
	case 'pu':
	case 'PU':
		int entry;
		cin >> entry;
		myStack.push(entry);
		break;
	case 'pr':
	case 'PR': 
		myStack.print();
		break;
	case 'po':
	case 'PO':
		myStack.pop();
		break;
	case 'top':
	case 'TOP':
		myStack.top();
		break;
	case 'em':
	case 'EM':

		myStack.empty();
		break;
	case 'fu':
	case 'FU':
		myStack.full();
		break;
	case 'qu':
	case 'QU':
		return 0;
	default: cout << "\n Invalid selection";
	}

	cout << "adding items directly to the stack" << endl;
	for (int i = 0; i < size(randomArr); i++) {
		double myRandom = distrubition(generator);
		randomArr[i] = myRandom;
		cout << setw(8) << "Adding: " << randomArr[i] << " to index: " << myStack.getIndex() << endl;
		myStack.push(randomArr[i]);
	}

	/*//adding 11 to show that it triggers a edge case
	for (int i = TWENTY; i > NEIN; i--) {
		cout << "adding: " << i << " to index: " << myStack.getIndex() << endl;
		myStack.push(i);
	}*/

	cout << "removing the top off the stack" << endl;
	myStack.pop();
	



	cout << "printing out Stack" << endl << endl;

	myStack.print();

	system("pause");

	return 0;
}