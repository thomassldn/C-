/*
 Author: Thomas S
 Date 20 Sept 2020
 Desc: Demonstrating size_t

 Calculate the Median by creating a dynamic float array 2 larger in size than the dynamic integer array.

If you don't know how to calculate the median, google it.

Output the results with 2 decimal places.

Create the following functions and use them, here are the prototypes

int *getData(int &);         //Return the array size and the array

void prntDat(int *,int);    //Print the integer array

float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data

void prntMed(float *);     //Print the median Array

*/



#include <iostream>

using namespace std;

int *getData(int &);         //Return the array size and the array

void prntDat(int *,int);    //Print the integer array

float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data

void prntMed(float *);     //Print the median Array


//Execution Begins
int main(){

  //Declaration of Variables
  int arrSize = 0;
  int *intArray = nullptr;
  float * floatArray = nullptr;


  intArray = getData( arrSize ); //get user data

  prntDat( intArray, arrSize );  //print array data

  floatArray = median(intArray, arrSize); //find the median

  prntMed(floatArray);

	return 0;
}

int * getData(int & arrSize){        //Return the array size and the array


  int * arrPtr = nullptr;

  cout << "How many floating point numbers would you like to add to the set?\n";
  cin >> arrSize;

  arrPtr = new (nothrow) int [arrSize];

  if ( arrPtr == nullptr ){
    cout << "Error: could not allocate memory!\n";
  } else {

    for( int i = 0; i < arrSize; i++ ){

      cout << "Enter number: ";
      cin >> * ( arrPtr + i );

    }

    //delete [] arrPtr;

    return arrPtr;

  }


}

void prntDat(int * intArray, int arrSize){    //Print the integer array

    cout << "The set: { ";
    for( int i = 0; i < arrSize; i++ ){

      cout << *( intArray + i ) << ", ";
    }
    cout << "}\n";

}

float * median(int * intArray, int arrSize){  //Fill the median Array with the Float array size, the median, and the integer array data

  int temp = 0;
  int middle = 0;
  float * median = nullptr;
  median = new (nothrow) float [arrSize + 2];

  //sort the array
  for ( int i = 0; i < arrSize - 1; i ++ ){

    for( int j = 0; j < arrSize - 1; j++ ){

      if( intArray[j] > intArray[ j + 1 ]){

        temp = intArray[j];
        intArray[j] = intArray[j+1];
        intArray[j+1] = temp;

      }

    }

  }//End sort

  //add array size to median array
  *(median + 0) = arrSize + 2;

  //Find the median
  if ( arrSize % 2 == 0 ){ //if the set is even

    //calculate the middle of the array
    middle = (arrSize / 2) - 1;

    //add median to array
    median[1] = ( intArray[middle] + intArray[middle + 1] ) / 2.0;

  } else { //if the set is odd

    middle = (arrSize / 2);
    median[1] = intArray[middle];

  }

  //add integer array data to median array
  for ( int i = 0; i < (arrSize + 2) ; i ++ ){

    median[i + 2] = intArray[i];

  }

  return median;

}

void prntMed(float * floatArray){   //Print the median Array

  cout << "\nThe median array is: { ";
  for( int i = 0; i < *floatArray; i++ ){

    cout << *(floatArray + i) << " ";
  }
  cout << "}";
  cout << "\nThe size of the array is: " << *floatArray;
  cout << "\nThe median is: " << *(floatArray+1) << endl;

}

