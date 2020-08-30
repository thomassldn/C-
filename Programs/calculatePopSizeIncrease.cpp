/* 
 * File:   main.cpp
 * Author: Thomas S
 *
 * Created on August 29, 2020, 8:23 PM
 * Desc: This program predicts the size of a population
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Global variables 

//Function prototypes 
void predictPopSize( float, float,  float); //calculate pop. size increase 
//Execution begins 

int main(int argc, char** argv) {

    //Declaration of variables
    float popSize;//pop size
    float avgInc;//avg pop size increase
    float daysMulti;//days pop will multiply
    
    //Ask starting # of organisms
    cout << "What is the  starting number of organisms? "; 
    cin >> popSize;
    
    //Validate user input
    while ( popSize < 2 ){
        
    cout << "\nStarting number of organisms cannot be less than 2.\n";    
    cout << "What is the  starting number of organisms? "; 
    cin >> popSize;
        
    }
    
    //Ask how much the population will increase
    cout << "\nWhat is the average population increase, as a percentage (e.g 10)? %";
    cin >> avgInc;
    
    //Validate user input
    while ( avgInc < 1 ){
    
    cout << "\nAverage increase cannot be less than 1."; 
    cout << "\nWhat is the average population increase, as a percentage (e.g 10)? %";
    cin >> avgInc;
        
    }
    
    //Ask how many days they will multiply for
    cout << "\nHow many days will they multiply for? ";
    cin >> daysMulti;

    //validate user input
    while ( daysMulti < 1 ){
    
    cout << "\nDays cannot be less than 1."; 
    cout << "\nHow many days will they multiply for? ";
    cin >> daysMulti;
        
    }
    
    predictPopSize( popSize, avgInc, daysMulti); //Predict the size of the population
    
    return 0;

}//End main

//Function definitions 
void predictPopSize( float popSize, float avgInc, float daysMulti){
    
    float newpopSize = popSize; 
    
    for( int i = 0; i < daysMulti; i++ ){
        
        newpopSize = newpopSize + (newpopSize * (avgInc/100));
    }
    
    
    
    cout << "\nA population of size " << popSize << " with an average daily population increase of %" << avgInc << " will increase to " << setprecision(4) << newpopSize << " in " << daysMulti << " days.\n";
    
}



/*
Output: 
What is the  starting number of organisms? 55

What is the average population increase, as a percentage (e.g 10)? %40

How many days will they multiply for?7

A population of size 55 with an average daily population increase of %40 will increase to 579.8 in 7 days.

*/
