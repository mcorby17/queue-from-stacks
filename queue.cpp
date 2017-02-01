#include "queue.h"
#include <iostream>

template <class T>
queue<T>::queue() {

}

template <class T>
queue<T>::~queue() {

}

template <class T>
void queue<T>::enqueue(T data) {
	s1.push(data);
}

template <class T>
T queue<T>::dequeue() {
	//Move data from stack1 to stack 2, reversing it's order
	while (!s1.isEmpty()) {
		s2.push(s1.pop());
	}

	//Save the popped item, which is in correct order for a queue. This is the first value entered.
	T data = s2.pop();

	//Put all the data back in the first stack so more data can be entered in the correct order
	while (!s2.isEmpty()) {
		s1.push(s2.pop());
	}

	return data;
}

template <class T>
bool queue<T>::isEmpty() {
	return s1.isEmpty();
}

template <class T>
void queue<T>::empty() {
	s1.empty();
}