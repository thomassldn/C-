/* 
 * File:   main.cpp
 * Author: Thomas S
 *
 * Created on August 30, 2020, 10:57 AM
 * Desc: This program accepts a celsius value and returns the temperature converted to Celsius, see output below
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Global variables 

//Function prototypes 
void celsius( int * );

//Execution begins 

int main(int argc, char** argv) {
    
    
    //display table and perform conversions
    cout << "==========================";
    cout << "\n| Celsius    |  Fahrenheit |";
    for ( int i = 0; i < 20; i++ ){
    
        celsius( &i);
    
    }
    cout << "\n===========================";
    return 0;

}//End main

//Function definitions 
void celsius(  int *FPtr ){
    
    float tempInC;//temperature in Celsius 
    tempInC = (5.0/9.0) * (*FPtr - 32);
    
    //display conversions
    cout << "\n|" << fixed <<  setprecision(5) << tempInC << "   |  " << *FPtr << "          |";
    
}

/*
 Output: 
 
 ==========================
| Celsius    |  Fahrenheit |
|-17.77778   |  0          |
|-17.22222   |  1          |
|-16.66667   |  2          |
|-16.11111   |  3          |
|-15.55556   |  4          |
|-15.00000   |  5          |
|-14.44444   |  6          |
|-13.88889   |  7          |
|-13.33333   |  8          |
|-12.77778   |  9          |
|-12.22222   |  10          |
|-11.66667   |  11          |
|-11.11111   |  12          |
|-10.55556   |  13          |
|-10.00000   |  14          |
|-9.44444   |  15          |
|-8.88889   |  16          |
|-8.33333   |  17          |
|-7.77778   |  18          |
|-7.22222   |  19          |
===========================

 */
