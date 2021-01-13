//CPS222, Homework 1

#include <iostream>
#include <string>
#include <climits>
using namespace std; 

//This function will take the user's inputted number and determine which day of the week that number correlates to and will print the results. Enter a stupid response and get snarked.

void conversionPrint(int num)
{
  if(num == 0)
    {cout<<"Day of the week: Sunday";}
  else if(num == 1)
    {cout<<"Day of the week: Monday";}
  else if(num == 2)
    {cout<<"Day of the week: Tuesday";}
  else if(num == 3)
    {cout<<"Day of the week: Wednesday";}
  else if(num == 4)
    {cout<<"Day of the week: Thursday";}
  else if (num == 5)
    {cout<<"Day of the week: Friday";}
  else if (num == 6)
    {cout<<"Day of the week: Saturday";}
};

int main()
{
  int num;
 
  cout<<endl<<"Please enter the number: ";
  cin>>num;
  

  //This if-else statement will determine whether the inputted number is within the valid range and decide what to return back to the user. 
  if((num<SHRT_MIN) || (num>SHRT_MAX))
    {
      if(num<SHRT_MIN) {
	cout<<num<<" is your IQ...not a valid input. How about we try to input a value between 0 and 6 this time...\n"<<endl; }
      else {
	cout<<num<<" is how big you wish your IQ was but we can't all win huh? :/ \nTry again... but with a valid input between 0 and 6 this time.\n"<<endl; }
      return 2;
    }
  else if((num < 0) || (num >6))
    {
      cout<<"Sorry! That was an invalid number!"<<endl<<endl;
      return 1;
    }
  else
    {
      conversionPrint(num);
      cout<<endl<<endl;
      return 0;
    }
};
