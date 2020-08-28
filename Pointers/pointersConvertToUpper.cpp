/* 
 * File:   main.cpp
 * Author: ts86557
 *
 * Created on August 28, 2020, 8:35 AM
 * Desc: This program converts lowercase letters to uppercase letters. 
 * It does this by usian non-constant poiter to non-constant data. please reference Deitel Chap 5, 316
 */

#include <cstdlib>
#include <iostream>
#include <cctype>


using namespace std;

void convertToUpperCase( char * );

int main(int argc, char** argv) {

    char string[] = "characters and $32.22";
    
    cout << "The string before conversion is: " << string; 
    convertToUpperCase(string); 
    
    cout << "\nThe string after conversion is: "
         << string << endl;
    
    
    return 0;
}

void convertToUpperCase( char *sPtr){
    
 while ( *sPtr != '\0'){
  
     if( islower( *sPtr ) )
         *sPtr = toupper( *sPtr); //convert character to upper case 
     
     ++sPtr; //move sPtr to the next character 
     
 }
      
}
