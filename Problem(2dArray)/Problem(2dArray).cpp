/*
Moises Lopez
229564
molopez@chapman.edu
CPSC 298-01
Assignment 2

This program reads integers into a pre-declared multidimensional array.

*/
#include <iostream>

using namespace std;
int main(int argc, char **argv){
  //multidimensional array size (20 inputs)
  int a[4][5];

  for(int i = 0; i < 4; i++){ // increases after first row is filled
    for(int j = 0; j < 5; j++){ // will fill row by row
      cout << "Enter numbers to fill the 2d array: " << endl; //will ask 5 times per row
      cin >> a[i][j];
    }
  }
}
