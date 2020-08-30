/* 
 * File:   main.cpp
 * Author: thomassaldana
 *
 * Created on August 29, 2020, 6:15 PM
 * Desc: This program asks a user to enter the month and the year. The program then displays the number of days in that month. 
 */

#include <cstdlib>
#include <iostream>


using namespace std;

//Function prototypes

//Execution Begins 
int main(int argc, char** argv) {

    //Declaration of variables 
    int month; 
    int year; 
    string months [] = {"January", "February", "March", "April", "May", "June", "July","August","September", "October", "November","December"};
    
    
    
    //Ask user to enter month
    cout << "Enter the month [1-12]: ";
    cin >> month;
    
    //Validate that entry is an integer between 1 and 12 
    while ( ( month < 1) || ( month > 12) ){
     
        cout << "\nEntry must be between 1 and 12. \n";
        cout << "Enter the month [1-12]: ";
        cin >> month;
        
    }
    
    //Ask user to enter year
    cout << "Enter the year (e.g. 2020):";
    cin >> year; 
    
    //Check if year is divisable by 100 and 400 
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
       
        cout << year << " is a leap year.\n\n";
        if ( month == 2){
          
            //Display results 
            cout << months[month - 1]  << " " <<  year <<  " has 29 days.\n\n ";
          
        } else if ( month == 1 || month ==3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
            
            //Display results 
            cout << months[month - 1]  << " " <<  year <<  " has 31 days.\n\n ";
            
        } else {
            
            //Display results 
            cout << months[month - 1]  << " " <<  year <<  " has 30 days.\n\n ";
        }
       
   } else {
       
      cout << year <<" is not a leap year.\n\n";
      
      if ( month == 2){
          
            //Display results 
            cout << months[month - 1]  << " " <<  year <<  " has 28 days.\n\n ";
          
      } else if ( month == 1 || month ==3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
            
            //Display results 
            cout << months[month - 1]  << " " <<  year <<  " has 31 days.\n\n ";
            
      } else {
            
            //Display results 
            cout << months[month - 1]  << " " <<  year <<  " has 30 days.\n\n ";
        }
      
      
   }
           
    
    return 0;
}

//Function Definitions

/*
Output: 
Enter the month [1-12]: 2
Enter the year (e.g. 2020):2016
2016 is a leap year.

February 2016 has 29 days.

 */
 
 
 
 
