/*
* File: main.cpp
* Author: Kshitij Karke (kshitijkarke@gmail.com)
* Created: January 12, 2017, 3:00am
*/


#include "texfunctions.h"
int readFile (string strFile, vector<objLine*> vec);

int main(){
  vector<objLine*> data;
  int flag = readFile ("notes.txt", data);
  cout << endl << flag << endl;

}

/*
 * The read file function is a modified version of the ReadGettsburgAddress
 * function posted online in the class #3 notes by prof. heines
 * (https://teaching.cs.uml.edu/~heines/91.204/91.204-2015-16f/204-lecs/lecture03.jsp)
 */

/**
 * This function reads the file passed to it as a parameter.
 * @param strFileName name of file to read
 * @return status flag, EXIT_SUCCESS = good
 */
int readFile(string strFile, vector<objLine*> vec) {

  // convert the string type to a standard C string for use in the infile function
  char* pcharFileName = new char [strFile.size() + 1];
  strcpy(pcharFileName, strFile.c_str());

                                    // open the input file
  ifstream infile(pcharFileName);   // input file stream

  char pLine[256];  // line read from the file, note that a char* (not a
                    // string) is required by the getline method
  string strLine;   // string version of the line read (pLine) so thata
                    // we can work with the data as an STL type


  // process the input file
  while (infile.getline(pLine, 256) != NULL) {

    strLine = pLine; // convert char* to string
                     //cout << ++nLineNo << ": " << strLine << endl;
    
    vec.push_back(new objLine(strLine, 1));
  }


  //loop to go through element,skipped some elements that the assignment did not ask for
  //set column width to 3 using info from the note posted by prof. heines on piazza
  //(September 15, 2015)


  for (vector<objLine*>::iterator it = vec.begin(); it != vec.end(); ++it) {

      cout << setw(3) << (*it)->getDashes() << " : " << (*it)->getNote() << endl;

  }



  // close the input file
  infile.close();
  delete[] pcharFileName;

  return EXIT_SUCCESS;
}
