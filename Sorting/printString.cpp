/*
 Author: Thomas S
 Date 20 Sept 2020
 Desc: Bubble sort using call-by-refernece and pointers
*/

#include <iostream>
#include <iomanip>

using namespace std;

void bubbleSort( int *, const int);
void swap(int * const, int * const);

int main(){

  const int arrSIZE = 10;

  int array[ arrSIZE ] = {9,2,7,3,4,1,5,0,6,8};

  //before sorting
  cout << "The original array: \n";

  for( int i = 0; i < arrSIZE; i++ ){

    cout << array[i] << " ";

  }
  cout << endl;

  //sort the array
  bubbleSort(array, arrSIZE);

  //after sorting
  cout << "\nAfter sorting: \n";

  for( int i = 0; i < arrSIZE; i++ ){

    cout << array[i] << " ";

  }
  cout << endl;
  return 0;
}

void bubbleSort( int * arr, const int SIZE){

  for(int curr = 0; curr < SIZE - 1; curr++){

    for( int j = 0; j < SIZE -1 ; j ++ ){

      if ( arr[j] > arr [j + 1 ]){

        swap(arr[curr], arr[j+1]);

      }
    }

  }

}//END bubbleSort


void swap(int * const elementPtr1, int * const elementPtr2){

  int temp;

  temp = *elementPtr1;
  *elementPtr1 = *elementPtr2;
  *elementPtr2 = temp;

}//END Swap
