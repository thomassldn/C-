/* 
 * File:   main.cpp
 * Author: thomas Saldana
 *
 * Created on December 30, 2020, 9:35 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;


int binarySearch(int *,int, int, int);

int main(int argc, char** argv) {

    
    int arr[] = {2,22,4,1,4,77,8};
    int x = 77; //search for 
    int SIZE = sizeof(arr) / sizeof(arr[0]);
    
    //array before sorting
    cout << "Array before sorting: \n";
    for(int i = 0; i < SIZE; i++ ){
        
        cout << arr[i] << " ";
    }
    
    //sort the array
    sort(arr, arr + SIZE);
    
    //array after sorting
  
    cout << "\n\nArray after sorting: \n";
    for(int i = 0; i < SIZE; i++ ){
   
        cout << arr[i] << " ";
    }
    
    
    //search for element in array
   int index = binarySearch(arr,0, SIZE - 1, x);

   (index == -1 )? cout << "\n\nElement is not present in the array"
                 : cout << "\n\nElement is present at index " << index; 
   cout << endl; 
   
    return 0;
}

int binarySearch(int * arr, int l, int r, int x){

    //if right is greater than or equal to l, we will search
    if  (r >= 1){
        
        //find middle of array
        int mid = l + (r - l)/2;
        
        
        //check if the element we are looking for is in the middle of the array
        if(arr[mid] == x) return mid;
        
        
        //if middle elment is greater than x, search on the left, otherwise search on the right
        if( arr[mid] > x ){
            return binarySearch(arr, l, mid - 1,x );
        }
        //else
        return binarySearch(arr, mid + 1 , r, x );
        
    }//end if 
    
    //else
    return -1;
    
    
}

/*
 OUTPUT: 
Array before sorting: 
2 22 4 1 4 77 8 

Array after sorting: 
1 2 4 4 8 22 77 

Element is present at index 6

 *
 */
