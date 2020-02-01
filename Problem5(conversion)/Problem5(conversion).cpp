/*
Moises Lopez
2297564
molopez@chapman.edu
CPSC 298-01
Assignment 2

This program employs 3 functions in order to calculate the user's height in
meters and centimeters.

*/
#include <iostream>
#include <string>
#include <locale>

using namespace std;

//function declaration
void calculateLength(double feet, double inches, double& meters, double& centimeters);
void userInput(double& feet, double& inches);

//passes feet and inches converted to meters and centimeters
void calculateLength(double feet, double inches, double& meters, double& centimeters){
   inches = (feet * 12) + inches;   //converting feet to inches
   meters = inches * 0.0254;        //converting inches to meters
   centimeters = meters * 100;      //converting meters to centimeters
}

//takes user input and passes by reference
void userInput(double& feet, double& inches){
    cout << "Enter feet: ";
    cin >> feet;

    cout << "Enter inches: ";
    cin >> inches;
}

int main(int argc, char **argv){
  //local variables
  double feet, inches, meters, centimeters;
  string response;

  while (true){ //continuously loops until the user exits
  userInput(feet, inches);//function to retrieve the user's feet and inches

  //printing out user values for feet and inches
  cout << "Feet: " << feet;
  cout << "ft" << endl;
  cout << "Inches: " << inches;
  cout << "in" << endl;

  calculateLength(feet, inches, meters, centimeters); //function to convert user values to meters and centimeters

  //prints out meters and centimeters
  cout << "Height in meters: " << meters;
  cout << "m" << endl;
  cout << "Height in centimeters: " << centimeters;
  cout << "cm" << endl;

  cout << "========" << endl;

  cout << "Would you like to do another calculation?" << endl;
  cout << "-- type EXIT to quit --" << endl;
  cout << "-- type anything else to continue --" << endl;
  cout << "Enter response: ";
  cin >> response;

  if(response == "EXIT"){ //program will loop until the user types EXIT
    break;
    }
  }
  return 0;
}
