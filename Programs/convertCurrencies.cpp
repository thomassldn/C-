/* 
 * File:   main.cpp
 * Author: thomassaldana
 *
 * Created on August 27, 2020, 8:23 PM
 * Desc: This program converts US dollars amounts to Japanese yens and euros . 
 * 1 Dollar = 98.93 yen
 * 1 Dollar = 0.74
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Global variables 
const float YEN_PER_DOLLAR = 105.36; 
const float EUROS_PER_DOLLAR =  0.84; 


//Function prototypes 
void convertCurrency( float *, string);

//Execution Begins 
int main(int argc, char** argv) {

    
   //Declaration of variables 
   float amnt;
   string currency = " ";
   
   //convert dollar to yen
   cout << "Enter dollar amount to convert to Yen (ex 100.00): $";
   cin >> amnt; 
   currency = "Yen"; 
   convertCurrency( &amnt, currency);
   
   //convert dollar to euro
   cout << "Enter dollar amount to convert to Euro(ex 100.00): $";
   cin >> amnt; 
   currency = "Euro"; 
   convertCurrency( &amnt, currency);
   
   
    
    
    return 0;
}

//Function Definitions 
void convertCurrency( float *currPtr, string currency){
    
    if ( currency == "Euro"){
        
        cout << "$" << *currPtr << " is " << fixed << setprecision(2) << *currPtr * EUROS_PER_DOLLAR << " in Euro.\n\n"; 
        
    } else {
        
        cout << "$" << *currPtr << " is " << fixed << setprecision(2) << *currPtr * YEN_PER_DOLLAR << " in Yen.\n\n"; 
    }
    
}

/*
 Output: 
Enter dollar amount to convert to Yen (ex 100.00): $25
$25 is 2634.00 in Yen.

Enter dollar amount to convert to Euro(ex 100.00): $65.5
$65.50 is 55.02 in Euro.

 */
