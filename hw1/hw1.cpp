//Programmer: Shivam Gupta       Due Date: 09/24/2020
//File: hw1.cpp
//Purpose: To make a menu driven program to help Krusty with "Health
//         management issues".

#include <iostream>
using namespace std;

//Initializing global variable to be used later;
int steps;

//The greeting() function will output a message on the screen for user
//Pre: None
//Post: Message output on the screen

void greeting() 
{
  cout<<"Health-o-Matic Options"<<endl;
  cout<<"----------------------"<<endl<<endl;
}

//The menu() will show the menu to the user and a choice as an input
//Pre: None
//Post: It will take it to the next step according to the choice of user

char menu() 
{
  char selc;
  
  cout<<"1. Taking a Walk!"<<endl;
  cout<<"2. Your Medications"<<endl;
  cout<<"3. Nap Time!!"<<endl;
  cout<<"4. Caloric Intake"<<endl;
  cout<<"5. Quit"<<endl<<endl;

  cout<<"Enter your choice"<<endl;
  cin>>selc;
  
  return selc;
}

//The walking() will ask to get positive number from your for the
//number of legs you walk.
//Pre: The input value should be a positive number
//Post: Program will pass the input to other function

int walking()
{
  int lwalk;
  
  cout<<"Enter the number of legs you walk"<<endl;
  cin>>lwalk;

  if (lwalk < 0) 
    {
      cout<<"Enter a valid number"<<endl;
      walking();
    }
  else
    {
      return lwalk;
    }
}

//The steps will  take the value from previous function and print
//the number of steps on the screen using a formula
//Pre: Input can't be negative number
//Post: Output the number of steps on the screen

void number_of_steps(const int leg)
{
  int total;

  if (leg <= 0) 
    {
      total = 0;
    }
  else
    {
      total = 1;
      for (int i = leg; i > 0; i--)
	{
	  total *= i;
	}
    }
  steps = total;
  cout<<"Number of steps are "<<total<<endl;

}

//The anxiety_level will take input from 0 to 10 and will give the
//output to next function
//Pre: Input value should be in the limits from 0 to 10
//Post: It will return the anxiety level to the main

int anxiety_level()
{
  int anx_level;
  cout<<"Enter your anxiety level from 0 to 10"<<endl;
  cin>>anx_level;
  if (anx_level >= 0 && anx_level <= 10)
    {
      return anx_level;
    }
  else 
    {
      cout<<"Enter a valid number"<<endl;
      anxiety_level();
    }
}

//The week_day will ask the user to give a input in a desired
//limit and will return the value to the main
//Pre: Value should be in 1 to 7
//Post: Output will be returned to the main

int week_day()
{
  int day;
  cout<<"Enter week day (1-7)"<<endl;
  cin>>day;
  if (day > 0 && day <= 7)
    {
      return day;
    }
  else 
    {
      cout<<"Enter a valid number"<<endl;
      week_day();
    }
}

//The pill_per_day will calucate the number of pills user
//needs to take which is calculated by an function
//Pre: Day should be from 1 to 7 and anxiety from 0 to 10
//Post: It will return the value of number of pills to the
//main function

int pill_per_day (const  int day, const int anxiety)
{
  int npills;
  npills = anxiety - day;
  if (npills >= 0)
    {
      return npills;
    }
  else
    {
      return 0;
    }
}

//The display_pills will output the number of pills to the
//screen
//Pre: None
//Post: Output the number of pills per day to screen

void display_pills(const int dpill)
{
  cout<<"Number of pills needed is "<<dpill<<endl;
  return;
}

//The hours sleep will ask the user to write the number of
//hours he/she sleeps last night
//Pre: The number can't be negative
//Post: Will return the number of hours to main

float hours_sleeps()
{
  float hours_slept;
  cout<<"Number of hours you slept last  night"<<endl;
  cin>>hours_slept;
  if (hours_slept >= 0)
    {
      return hours_slept;
    }
  else
    {
      return 0;
    }
}

//The nap_min gives back the number of minutes of nap by putting
//hours slept last night, steps walked and pills required.
//Pre: hours slept should  be greater than zero
//Post: Will return the number of minutes to the main function

float nap_min(const float hours_slept, const int step, const int pill)
{
  float minutes;
  if (pill > 0) 
    {
      minutes = hours_slept + (step / pill);
    }
  else 
    {
      minutes = hours_slept + step;
    }
  return minutes;
}

//The display_min will output the  number of minutes to the screen
//Pre: None
//Post: Output the number of minutes to the screen

void display_min(const float min)
{
  cout<<"Number of minutes for a nap "<<min<<endl;
  return;
  
}

//The calorie takes height weight and room temp from user and
//calculate the calorie and return it to the main function.
//Pre: Values of weight, height and temperature should be limits
//It is predetermined to the natural maximum and minimum values.
//Post: It will calculate the number of calories and give to the
//main function

float calorie(const int step)
{
  float cal, ht, wt;
  float weigh,heigh;
  float temper, temp;
  cout<<"Enter your weight in lbs"<<endl;
  cin>>wt;
  if (wt >= 0 && wt <= 800)
    {
      weigh = wt;
    }
  else
    {
      cout<<"Enter  valid number"<<endl;
      calorie(step);
    }
  cout<<"Enter your height"<<endl;
  cin>>ht;
  if (ht >= 0 && ht <= 150)
    {
      heigh = ht;
    }
  else
    {
      cout<<"Enter  valid number"<<endl;
      calorie(step);
    }
  cout<<"Enter room temperature"<<endl;
  cin>>temp;
  if (temp > 0 && temp <= 150)
    {
      temper = temp;
    }
  else
    {
      cout<<"Enter  valid number"<<endl;
      calorie(step);
    }
  cal = (6 * weigh) + (2 * heigh) + (1/temper) + step;
  return cal;
}

//The display_cal output the number of calorie to the screen
//Pre: None
//Post: Output the number of calorie to the main function

void display_cal(const float cal)
{
  cout<<"Values of calorie are "<<cal<<endl;
  return;
  
}

//Main is the driver function for all the functions above

int main() 
{
  char choice;
  int nleg = 10000000;
  int week = 10000000;
  int anx = 10000000;
  int pil;
  float hr;
  float nap;
  float cals;
  
  greeting();
  choice = menu();
  
  while (choice != '5') {
    switch (choice)
      {
      case '1':
	nleg = walking();
	number_of_steps(nleg);
	cout<<endl<<"Enter another choice"<<endl;
	cin>>choice;
	break;
	
      case '2':
	anx = anxiety_level();
	week = week_day();
	pil = pill_per_day (week, anx);
	display_pills(pil);
	cout<<endl<<"Enter another choice"<<endl;
	cin>>choice;
        break;
	
      case '3':
	if (nleg == 10000000 || anx == 10000000 || week == 10000000)
	  {
	    cout<<"Error!! Invalid option selected"<<endl;
	  }
	else 
	  {
	    hr =  hours_sleeps();
	    nap =  nap_min(hr, steps, pil);
	    display_min(nap);
	  }
	cout<<endl<<"Enter another choice"<<endl;
	cin>>choice;
	break;
	
      case '4':
	if (nleg == 10000000)
	  {
	    cout<<"Error!! Invalid option selected"<<endl;
	  }
	else 
	  {
	    cals = calorie(steps);
	    display_cal(cals);
	  }
	cout<<endl<<"Enter another choice"<<endl;
	cin>>choice;
	break;
	
      default:
	cout<<endl<<"Enter valid selection/number"<<endl;
	cin>>choice;
	break;
      }
    }
    
  return 0;
}

