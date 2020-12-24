//Programmer: Shivam Gupta       Due Date: 10/29/2020
//File: exam1_functions.h
//Purpose: Prototype info 

#ifndef HW2_FUNCTIONS_H
#define HW2_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <sstream>
#include <algorithm>

using namespace std;

struct creature{
  string name;
  int dim_X;
  int dim_Y;
};

// Description: The number_of_Lines() function will give the number
// of lines in the respective file name while is supplied in as
// parameter.
// Pre: Input should be string which should be linked to a file
// Post: Returns an integer of the number of lines.

int number_of_lines(string);

// Description: The read_File() function will read through the file
// supplied and save the string into a vector and return it.
// Pre: Input should be string which should be linked to a file
// Post: A vector of type string will be returned which has all
// the data of the file.

vector<string> read_File(string);

// Description: The read_Creature() function will return an vector
// which contains the deatils of all the creatures
// Pre: None
// Post: Returns vector to the main function.

vector<creature> read_Creature();

// Description: The rand_Saying() function will take vector and int
// as input and output an random string from that vector.
// Pre: Vector shouldn't be empty and value of int should be > 0
// Post: Returns random string to the main function.

string rand_Saying(vector<string>, int);

// Description: The isDiff() function will take vector and
// creature as input and output an boolean which shows if the
// creature is in the vector of not.
// Pre: Vector shouldn't be empty and creature should have values
// Post: Returns boolean expression to the main fuction

bool isDiff(creature, vector<creature>);

// Description: The isStackable() function will take vector and
// creature as input and output an boolean which shows if the
// creature can be  in the vector of not.
// Pre: Vector shouldn't be empty and creature should have values
// Post: Returns boolean expression to the main fuction

bool isStackable(creature, vector<creature>);

// Description: The greetings() function will output a message to the
// screen greeting the user.
// Pre: None.
// Post: A goodbye message will output to the screen.

void goodbye();

#endif
