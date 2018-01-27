#pragma once
#include <iostream>

using namespace std;

class Stack
{
private:
	static constexpr int EMPTY = -1;
	static constexpr size_t TEN = 10;
	int stckarr[TEN];
	int top_of_index;
	size_t array_size;
	int * newArrayCopy;

public:
	Stack() : top_of_index(EMPTY) {}
	Stack(const Stack& copy) : stckarr(), top_of_index(copy.top_of_index)
	{
		for (int i = 0; i <= top_of_index; ++i) {
			stckarr[i] = copy.stckarr[i];
		}
	}

	inline int getIndex() { return top_of_index + 1; }
	void push(int);
	void pop();
	int top() const;
	bool empty() const;
	bool full() const;
	//void print() const;
	void addRandom();
	void addFull();

	friend ostream& operator<<(ostream& out, const Stack& stack);
	friend void swap(Stack& first, Stack& second) 
	{
		using std::swap;
		swap(first.top_of_index, second.top_of_index);
		swap(first.stckarr, second.stckarr);
	}
	Stack& operator=(Stack other);

	~Stack() { delete[] stckarr; }
};