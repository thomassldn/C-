
/* 
 * File:   main.cpp
 * Author: Thomas S
 *
 * Created on August 31, 2020, 10:37 PM
 * Desc: This program demonstrate a simple vector
 * Functions: begin(), cbegin(), rbegin(),crbegin()
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//Global variables 

//Function prototypes 

//Execution begins 

int main(int argc, char** argv) {

    //Declaration of variables 
    vector<int> myVect; 
    
    for (int i = 3; i <=10; i++){
        myVect.push_back(i);
    }
    
    cout << "Vector contains: ";
    for (auto i = myVect.begin(); i != myVect.end(); i++){
        cout << *i << " "; 
    }
    
    
   

    return 0;

}//End main

//Function definitions 

//OUTPUT: Vector contains: 3 4 5 6 7 8 9 10
