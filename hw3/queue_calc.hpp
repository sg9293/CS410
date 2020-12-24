//Programmer: Shivam Gupta       Due Date: 11/13/2020
//File: queue_calc.cpp
//
//        for general public

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <sstream>
#include <algorithm>
#include <numeric>

using namespace std;

template <class T>
void queue<T>::enqueue(const T &elm) {
	qqueue.push_back(elm);
	return;
}

template <class T>
void queue<T>::dequeue() {
	auto i = qqueue.begin();
	(*i).print();
	cout<<"\t";
	qqueue.erase(i);
	qqueue.shrink_to_fit();
	return;
}

template <class T>
T queue<T>::peek() {
	return qqueue.at(0);
}

template <class T>
void queue<T>::printAll() {
	while(!empty()) {
		dequeue();
	}
}
