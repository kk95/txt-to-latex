/*
*
* File: texfunction.h
* Author: Kshitij Karke (kshitijkarke@gmail.com)
* Created: January 12, 2017, 3:00am
*
*/

#ifndef TEXFUNCTIONS_H
#define TEXFUNCTIONS_H

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

class objLine {
public:
  objLine() {}; //Default Constructor
  objLine(string line, int number_of_dashes); //Constructor for the class
  ~objLine(); //Destructor

  //accessor functions
  string getNote();
  int getDashes();

private:
  int intDashes; //Number of dashes to sort the points from subpoints
  string strLine; //Content of the line is stored in this

};

#endif
