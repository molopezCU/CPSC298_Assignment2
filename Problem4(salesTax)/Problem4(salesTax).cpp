/*
Moises Lopez
229564
molopez@chapman.edu
CPSC 298-01
Assignment 2

This program uses the function addTax to calculate the price of an item (float)
after sales tax.

*/
#include <iostream>
#include <iomanip>

using namespace std;

void addTax(float *salesTax, float *itemPrice); //declaration of function

int main(int argc, char **argv){
  //local variables
  float price, tax;

  cout << "Enter price of item: $"; //user sets price of item
  cin >> price;

  cout << "Enter tax rate %: "; //user sets tax rate
  cin >> tax;

  addTax(&tax, &price);//variables passed to the function to calculate final item price

  cout << "Total: $" << fixed << setprecision(2) << price << endl; //sets price to 2 decimal places
  return 0;
}

//passes itemPrice / salesTax by reference
void addTax(float *salesTax, float *itemPrice){
  *salesTax = *salesTax / 100.0f; //we need to do arithmatic by similar types

  *itemPrice = ((*itemPrice) * (*salesTax)) + *itemPrice; //formula for getting the final price
}
