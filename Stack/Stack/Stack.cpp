// Stack.cpp : Defines the entry point for the console application.
//

#include "Stack.hpp"
#include "iostream"
#include "iomanip"
using namespace std;


void Stack::push(int n)
{
	if (top_of_index == TEN + EMPTY) {
		cerr << "Array full, ERROR" << endl;
	}
	else {
		stckarr[++top_of_index] = n;
	}
	
}

void Stack::pop(int n)
{
	top_of_index--;
}

int Stack::top(int n) const
{
	return stckarr[top_of_index];
}

bool Stack::empty() const
{
	return top_of_index == -1;
}

bool Stack::full() const
{
	return top_of_index == 10;
}

void Stack::print() const
{
	for (int i = top_of_index; i >= 0; i--) {
		cout << setw(5) << "value: " << stckarr[i] << "  index: " << i << endl;
	}
}
