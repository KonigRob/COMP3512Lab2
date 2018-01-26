#pragma once

class Stack
{
	static constexpr int EMPTY = -1;
	static constexpr int TEN = 10;
	int stckarr[TEN];
	int top_of_index;

public:
	Stack() : top_of_index(EMPTY) {}
	inline int getIndex() { return top_of_index + 1; }
	void push(int);
	void pop(int);
	int top(int) const;
	bool empty() const;
	bool full() const;
	void print() const;
	
};