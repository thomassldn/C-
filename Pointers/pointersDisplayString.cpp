/* 
 * File:   main.cpp
 * Author: ts86557
 *
 * Created on August 28, 2020, 8:35 AM
 * Desc: This program converts lowercase letters to uppercase letters. 
 * It does this by usian non-constant poiter to non-constant data. please reference Deitel Chap 5, 317
 */

#include <cstdlib>
#include <iostream>
#include <cctype>


using namespace std;

void printCharacters( const char * );

int main(){
    
    char string[] = "A string of characters "; 
    
    cout << "The string is: " ;
    printCharacters( string ); 
    
    return 0;
    
} 

void printCharacters( const char *sPtr ){
    
    
 for ( ; *sPtr != '\0'; sPtr++)
     cout << *sPtr; 
    
}

//OUTPUT:   The string is: A string of characters  
