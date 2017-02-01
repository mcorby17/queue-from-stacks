#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_
#include "stack.cpp"

template <class T>
class queue {
private:
	stack<T> s1, s2;
public:
	queue();
	~queue();
	void enqueue(T);
	T dequeue();
	bool isEmpty();
	void empty();
};

#endif // QUEUE_H_
