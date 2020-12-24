//Programmer: Shivam Gupta       Due Date: 11/13/2020
//File: hw3_calculator.h
//Purpose: Prototype info 

#ifndef HW3_CALCULATOR_H
#define HW3_CALCULATOR_H

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

class Fraction {
  public:
    int m_Numerator = 0;
    int m_Denominator = 1;
    Fraction();
    Fraction(const int num, const int den);
    void readin();
    void print();
    Fraction reciprocal() const;
    void unreduce (const int m);
    int getNum(); 
    int getDen();
    void setNumer (const int numer);
    bool setDenom (const int denom);
    Fraction operator+ (Fraction lhs);
    friend Fraction operator- (Fraction lhs, Fraction rhs);
    friend Fraction operator/ (Fraction lhs, Fraction rhs);
    Fraction operator* (Fraction lhs);
  private:
};

int lcm(int a, int b);

int gcd(long long int a, long long int b);


template <class T>
class queue {
 private: 
  vector<T> qqueue;
 public:
  void enqueue(const T &elm);
  void dequeue();
  T peek();
  bool empty() {return qqueue.size() == 0;}
  void printAll();
};

#include "queue_calc.hpp"


// Description: The number_of_Lines() function will give the number
// of lines in the respective file name while is supplied in as
// parameter.
// Pre: Input should be string which should be linked to a file
// Post: Returns an integer of the number of lines.


#endif
