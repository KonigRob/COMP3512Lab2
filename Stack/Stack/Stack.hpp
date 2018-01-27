#pragma once
#include <iostream>

using namespace std;

class Stack
{
private:
	static constexpr int EMPTY = -1;
	static constexpr int TEN = 10;
	int stckarr[TEN];
	int top_of_index;

public:
	Stack() : top_of_index(EMPTY) {}
	inline int getIndex() { return top_of_index + 1; }
	//inline int getStckarr() { return stckarr[TEN]; }
	//inline int getTop() { return top_of_index; }
	void push(int);
	void pop();
	int top() const;
	bool empty() const;
	bool full() const;
	//void print() const;
	void addRandom();
	void addFull();

	friend ostream& operator<<(ostream& out, const Stack& stack);
};