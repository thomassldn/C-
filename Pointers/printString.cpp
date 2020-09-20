/*
 Author: Thomas S
 Date 20 Sept 2020
 Desc: Printing String char with pointer
*/

#include <iostream>

using namespace std;

void printString( const char * );

int main(){

  char string[] = "A beutiful day.\n";

  cout << "The String is: \n";

  printString(string);

  return 0;
}

void printString( const char * sPtr ){

  for( ; *sPtr != '\0'; sPtr++){

    cout << *sPtr;
    
  }

}
