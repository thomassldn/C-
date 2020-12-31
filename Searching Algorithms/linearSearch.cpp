
/* 
 * File:   main.cpp
 * Author: thomas saldana
 *
 * Created on December 31, 2020, 11:59 AM
 * Des: Linear Search
 */

#include <cstdlib>
#include <iostream>
#include <array>

using namespace std;

int linearSearch(int *, int, int );

//Execution Begins 
int main(int argc, char** argv) {

    
    int arr[] = {5,88,3,44,9,1,32,33,7};
    int SIZE = sizeof(arr) / sizeof(arr[0]);
    
    int x = 7;
    
    int index = linearSearch(arr, x, SIZE);
    
    (index == -1)? cout << "Value does not exist in set!"
                 : cout << "Value exists at index: " << index;
    
    
    
    return 0;
}

int linearSearch(int * arr, int x, int SIZE ){
    
    
    //search for x in array
    for(int i = 0; i < SIZE; i++ ){
        if (arr[i] == x) return i; 
    }
    
    //if element is not found, return -1
    return -1;
}

//OUTPUT: 
//Value exists at index: 8


