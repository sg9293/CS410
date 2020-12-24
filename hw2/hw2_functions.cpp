//Programmer: Shivam Gupta       Due Date: 10/29/2020
//File: hw2_functions.cpp
//
//        for general public

#include "hw2_functions.h"

// The number_of_Lines() function will give the number of lines in the respective
// file name while is supplied in as parameter.

int number_of_lines(string data) {
  int nlines = 0;
  string line;
  ifstream file(data.c_str());
  while(getline(file, line)) {
    nlines++;
  }
  return nlines;
}

// The read_File() function will read through the file supplied and save the
// string into a vector and return it.

vector<string> read_File(string data) {
  string line;
  vector<string> lines;

  ifstream file(data.c_str());
    
  //store the lines in the string vector
  while(getline(file,line))
    {
      lines.push_back(line);  
    }
    
  return lines;
}

// The rand_Saying() function will take vector and int as input and output an
// random string from that vector.

string rand_Saying(vector<string> lines, int rand_num) {
  string line;

  line = lines[rand_num];

  return line;
}

// The read_Creature() function will return an vector
// which contains the deatils of all the creatures

vector<creature> read_Creature() {
  creature line1, line2, line3, line4, line5, line6, line7;
  creature line8, line9, line10, line11, line12, line13, line14;
  vector<creature> cretlist;
  
  line1.name = "Wanda Walrus";
  line1.dim_X = 2;
  line1.dim_Y = 6;
  cretlist.push_back(line1);

  line2.name = "Stanley Sardine";
  line2.dim_X = 3;
  line2.dim_Y = 1;
  cretlist.push_back(line2);

  line3.name = "Sylvia Seahorse";
  line3.dim_X = 4;
  line3.dim_Y = 2;
  cretlist.push_back(line3);

  line4.name = "Janie Jellyfish";
  line4.dim_X = 1;
  line4.dim_Y = 10;
  cretlist.push_back(line4);

  line5.name = "Doris Dolphin";
  line5.dim_X = 8;
  line5.dim_Y = 4;
  cretlist.push_back(line5);

  line6.name = "Bob Blobfish";
  line6.dim_X = 1;
  line6.dim_Y = 5;
  cretlist.push_back(line6);

  line7.name = "Sammy Shark";
  line7.dim_X = 8;
  line7.dim_Y = 4;
  cretlist.push_back(line7);

  line8.name = "Walter Whale";
  line8.dim_X = 6;
  line8.dim_Y = 2;
  cretlist.push_back(line8);

  line9.name = "Stevie Salmon";
  line9.dim_X = 2;
  line9.dim_Y = 3;
  cretlist.push_back(line9);

  line10.name = "Sheila Shellfish";
  line10.dim_X = 1;
  line10.dim_Y = 3;
  cretlist.push_back(line10);

  line11.name = "Daniel Octopuss";
  line11.dim_X = 3;
  line11.dim_Y = 7;
  cretlist.push_back(line11);

  line12.name = "Mark Herrings";
  line12.dim_X = 9;
  line12.dim_Y = 5;
  cretlist.push_back(line12);

  line13.name = "Bernie Tuna";
  line13.dim_X = 3;
  line13.dim_Y = 5;
  cretlist.push_back(line13);

  line14.name = "Oscar Tilapia";
  line14.dim_X = 5;
  line14.dim_Y = 3;
  cretlist.push_back(line14);

  return cretlist;
}

// The isDiff() function will take vector and
// creature as input and output an boolean which shows if the
// creature is in the vector of not.

bool isDiff(creature test, vector<creature> diff_Cards) {
  for(auto i = diff_Cards.begin(); i != diff_Cards.end(); i++) {
    if(test.name == (*i).name) {
      return false;
    }
  }
  return true;
}

// The isStackable() function will take vector and
// creature as input and output an boolean which shows if the
// creature can be  in the vector of not.

bool isStackable(creature test, vector<creature> stackable_Cards) {
  if(stackable_Cards.size() == 0) {
    return true;
  }
  for(auto i = stackable_Cards.begin(); i != stackable_Cards.end(); i++) {
    if(test.name == (*i).name) {
	return false;
    }
  }
  for(auto i = stackable_Cards.begin(); i != stackable_Cards.end(); i++) {
    if((test.dim_X < (*i).dim_X)|| (test.dim_X < (*i).dim_Y)) {
       if ((test.dim_Y < (*i).dim_X) ||(test.dim_Y < (*i).dim_Y)) { 
	 return true;
       }
    }
  }
  return false;
}

bool compareByX(const creature &a, const creature &b)
{
    return a.dim_X < b.dim_X;
}

// The goodbye() function will output a message to the screen for Krusty

void goodbye() {
  cout<<endl<<"GateKeeper: You are all set to leave. Hope you had a pleasant stay."<<endl;
}
