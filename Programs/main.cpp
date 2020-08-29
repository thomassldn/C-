/* 
 * File:   main.cpp
 * Author: thomassaldana
 *
 * Created on August 27, 2020, 8:08 PM
 * Desc: This program convers from Celcius to Fahrenheit 
 * the formula is F=9/5*C + 32
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;
//Function prototypes
void convertCelsiusToFahrenheit( float * );


//Execution begins
int main(int argc, char** argv) {

    float temperature;
    //ask user to enter Celsius temperature 
    cout << "Enter Celsius temperature: ";
    cin  >> temperature;
    
    convertCelsiusToFahrenheit( &temperature);
    
    cout << "That is " << temperature << " F in Fahrenheit. \n"; 
    
  
    return 0;
    
}

void convertCelsiusToFahrenheit( float *tempPtr ){
    
    
    *tempPtr = ((9.0/5.0) * *tempPtr) + 32;

}

//OUTPUT:
//Enter Celsius temperature: 78.4
//That is 173.12 F in Fahrenheit.