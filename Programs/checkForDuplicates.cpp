/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ts86557
 *
 * Created on December 22, 2020, 12:23 PM
 */
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

bool checkDuplicate(int *, int);

int main(int argc, char** argv) {
    
    
    int arr[] = { 99,1,3,2,55,87,6,99}; 
    int SIZE = sizeof(arr) / sizeof(arr[8]);

    sort(arr, arr + SIZE);
    
    ; //check if array has any duplicates
    
    ( checkDuplicate(arr, SIZE) )? cout << "Array contains duplicates" : cout << "Arra does not contain any duplicates"; ;

    
    return 0;
}

bool checkDuplicate( int * arr, int SIZE){
    
    int temp = 0; //hold current int
    bool duplicate = false; 
    
    for(int i = 0; i < SIZE - 1; i++ ){
        
        temp = arr[i];
        
        for( int j = i + 1; j < SIZE; j++){
            
            if( arr[j] == temp) duplicate = true; 
            
        }
        
    }
    
    return duplicate; 
}
