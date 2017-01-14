/*
* File: texfunctions.cpp
* Author: Kshitij Karke (kshitijkarke@gmail.com)
* Created: January 12, 2017, 3:00am
*/

/*
* This file contains the cunstructor/acessor functions
*/




#include "texfunctions.h"


objLine::objLine (string line, int number_of_dashes){

  strLine = line;
  intDashes = number_of_dashes;

}


objLine::~objLine (){
  strLine = "";
  intDashes = 0;
}


string objLine::getNote(){
  return strLine;
}

int objLine::getDashes(){
  return intDashes;
}
