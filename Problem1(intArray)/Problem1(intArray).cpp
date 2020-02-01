/*
Moises Lopez
2297564
molopez@chapman.edu
CPSC 298-01
Assignment 2

This program reads integers into an array and prints them back out.

*/

#include <iostream>
#include <string>
#include <array>

using namespace std;
int main(int argc, char **argv) {
  //member variables
   string userStr[10];
   int i,j;

  //prompt user for string input
  for (j = 0; j < 10; j++){
   cout << "Enter a number: ";
   cin >> userStr[j];
  }

  cout << endl;

  // Print string back one at a time
  for (i = 0; i < sizeof(userStr)/sizeof(userStr[0]); ++i){ //dividing by the size of each element
  cout << "userStr[" << i << "] = " << userStr[i] << endl;
  }
 return 0;
}
