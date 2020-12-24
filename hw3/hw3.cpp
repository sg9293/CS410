//Programmer: Shivam Gupta       Due Date: 11/13/2020
//File: hw3.cpp
//
//Purpose: This driver file will take .dat files in the folder
// and tells if Krusty have completed the requirement of leaving
// Atlantis or not

#include "hw3_calculator.h"

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

int main() {
  char oper;
  Fraction f1, f2, concl;
  queue<Fraction> q;
  do {
    cout<<endl<<"Fraction Calculator"<<endl;
    cout<<"Enter the operation you want to perform (+, -, *, /) & 'q' for quit"<<endl;
    cin>>oper;
    switch (oper) {
      case '+':
        f1.readin();
        f2.readin();
        concl = f1 + f2;
        q.enqueue(concl);
        f1.print();
        cout<<" + ";
        f2.print();
        cout<<" = ";
        concl.print();
        cout<<endl;
        cin.clear();
        fflush(stdin);
        break;
    case '-':
        f1.readin();
        f2.readin();
        concl = f1 - f2;
        q.enqueue(concl);
        f1.print();
        cout<<" - ";
        f2.print();
        cout<<" = ";
        concl.print();
        cout<<endl;
        cin.clear();
        fflush(stdin);
        break;
    case '*':
        f1.readin();
        f2.readin();
        concl = f1 * f2;
        q.enqueue(concl);
        f1.print();
        cout<<" * ";
        f2.print();
        cout<<" = ";
        concl.print();
        cout<<endl;
        cin.clear();
        fflush(stdin);
        break;
    case '/':
        f1.readin();
        f2.readin();
        concl = f1 / f2;
        q.enqueue(concl);
        f1.print();
        cout<<" / ";
        f2.print();
        cout<<" = ";
        concl.print();
        cout<<endl;
        cin.clear();
        fflush(stdin);
        break;
    default:
      cout<<"The operand is not support"<<endl<<"Please choose a new operand"<<endl;
      break;
    }
  } while (oper != 'q');

  if(oper == 'q') {
    cout<<"Thanks for using fraction Calculator"<<endl;
    cout<<"Following are all the results"<<endl;
    q.printAll();
    cout<<endl;
    if (q.empty()) {
      cout<<"Is queue empty: True"<<endl;
    }
    else {
      cout<<"Is queue empty: False"<<endl;
    }
  }
  return 0;
}
