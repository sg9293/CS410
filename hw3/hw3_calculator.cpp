//Programmer: Shivam Gupta       Due Date: 11/13/2020
//File: hw3_calculator.cpp
//
//        for general public

#include "hw3_calculator.h"

//Default Constructor if no argument is passed.

Fraction::Fraction() {
  m_Numerator = 0;
  m_Denominator = 1;
}

//Constructor when parameters are passed

Fraction::Fraction(const int num, const int den) {
  m_Numerator = num;
  m_Denominator = den;
}

// The readin() function read in the values of num  and den for
// the default constructor.

void Fraction::readin() {
  cout<<"Enter Numerator"<<endl;
  cin>>m_Numerator;
  cout<<"Enter Denominator"<<endl;
  cin>>m_Denominator;
  return;
}

// The print() prints out what is values of fraction to the screen

void Fraction::print() {
  string s = "(" + to_string(m_Numerator) + "/" + to_string(m_Denominator) + ")";
  cout<<s;
  return;
}

// The reciprocal() reciprocal the function and save it to the variable

Fraction Fraction::reciprocal() const {
  Fraction returnable;
  returnable.m_Numerator = m_Denominator;
  returnable.m_Denominator = m_Numerator;
  return returnable;
}

// The unreduce() multiply numerator and denominator with a same value

void Fraction::unreduce (const int m) {
  m_Numerator *= m;
  m_Denominator *= m;
  return;
}

// The getNum() returns the numerator of the fraction

int Fraction::getNum()
{
  return m_Numerator;
}

// The getDen() returns the denominator of the fraction

int Fraction::getDen()
{
  return m_Denominator;
}

// The setNumer() sets a new numerator to the fraction

void Fraction::setNumer(const int numer)
{
  m_Numerator = numer;
  return;
}

// The setDenom() sets a new denominator to the fraction

bool Fraction::setDenom(const int denom)
{
  bool set = false;
  if(denom != 0)
  {
    set = true;
    m_Denominator = denom;
  }
  return set;
}

// gcd gives the greatest common devisor of two numbers

int gcd(long long int a, long long int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

//lcm gives the lowest common multiple of two numbers

int lcm(int a, int b) {
  if (a == b) {
    return a;
  } else {
    return (a / gcd(a, b)) * b;
  }
}

Fraction Fraction::operator+ (Fraction rhs) {
  Fraction test;
  int lnum = lcm(m_Denominator, rhs.m_Denominator);
  test.m_Numerator = m_Numerator + rhs.m_Numerator;
  test.m_Denominator = lnum;
  return (test);
}

Fraction operator- (Fraction lhs, Fraction rhs) {
  Fraction test;
  int lnum = lcm(lhs.m_Denominator, rhs.m_Denominator);
  test.m_Numerator = lhs.m_Numerator - rhs.m_Numerator;
  test.m_Denominator = lnum;
  return (test);
}

Fraction Fraction::operator* (Fraction rhs) {
  Fraction test;
  test.m_Numerator = m_Numerator * rhs.m_Numerator;
  test.m_Denominator = m_Denominator * rhs.m_Denominator;
  return (test);
}

Fraction operator/ (Fraction lhs, Fraction rhs) {
  Fraction test;
  test.m_Numerator = lhs.m_Numerator * rhs.m_Denominator;
  test.m_Denominator = lhs.m_Denominator * rhs.m_Numerator;
  return (test);
}