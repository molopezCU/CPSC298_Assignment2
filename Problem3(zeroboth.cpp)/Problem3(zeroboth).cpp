/*
Moises Lopez
229564
molopez@chapman.edu
CPSC 298-01
Assignment 2

This program sets the value of 2 integers to zero through pass-by-reference.

*/
#include <iostream>
using namespace std;

void zeroBoth(int *one, int *two); //declaration of function

int main(int argc, char **argv){
  //local variables
  int var1 = 39;
  int var2 = 62;

  //printing current value of local variables
  cout << "var1 now equals: " << var1 << endl;
  cout << "var2 now equals: " << var2 << endl;

  zeroBoth(&var1, &var2); //function to change local variable values to 0

  cout << "==================" << endl;

  //prints updated local variables with altered memoryaddrea
  cout << "var1 now equals: " << var1 << endl;
  cout << "var2 now equals: " << var2 << endl;
}

//passes by reference the updated values
void zeroBoth(int *firstVar, int *secondVar){
  *firstVar = 0;  //var1
  *secondVar = 0; //var2
}
