// Stack.cpp : Defines the entry point for the console application.
//

#include "Stack.hpp"
#include "iostream"
using namespace std;


void Stack::push(int n)
{
	stckarr[++top_of_index] = n;
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
	for (int i = 0; i < top_of_index; i++) {
		cout << "stack: " << i << "  value: " << stckarr[i] << endl;
	}
}
