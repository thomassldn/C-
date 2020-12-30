/*
 * File:   main.cpp
 * Author: Thomas S
 *
 * Created on August 31, 2020, 8:19 PM
 * Desc: Binary Search, array has to be sorted first
 *
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Global variables
const int SIZE = 20;

//Function prototypes
int binarySearch(const int array[], int , int );

//Execution begins

int main(int argc, char** argv) {

    //Declaration of variables
    //Array with employees IDS sorted in ascending order
    int idNums[SIZE] = {101,133,423,453,543,612,623,645,764,857,876,987,988,999};

    int results; //used to hold the search results
    int empID;   //to hold an employee ID

    //Get an employee ID to search for.
    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;


    //Search for the ID
    results = binarySearch(idNums, SIZE, empID);

    //if results contains -1 the ID was not found
    if (results == -1 )
        cout << "That number does not exist in the array.\n";
    else {
        //Otherwise results contains the subscript of
        //the specified employee ID in the arrays
        cout << "That ID is found at element " << results;
        cout << " in the array.\n";


    }




    return 0;

}//End main

//Function definitions
int binarySearch(const int array[], int size, int value){

    int first = 0,              //first array element
        last = size - 1,    //last array element
        middle,                 //midpoint of search
        position = -1;          //position of search value
    bool found = false;         //flag


    while(!found && first <= last){

        middle = (first + last) /2; //calculate midpoint
        if ( array[middle] == value ){  //if value is found at mid
            found = true;
            position = middle;
        }else if ( array[middle] > value)
            last = middle - 1;  //if value is in lower  half
        else
            first = middle + 1; //if value is in upper half
    }
    return position;


}//END binary search
