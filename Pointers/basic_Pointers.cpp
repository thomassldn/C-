// & and * pointer operators, Deitel pg 308 
// 

#include <iostream>
using namespace std; 

int main()
{
    int a  = 10;      //a variable holds value 10  
    int* aPtr;  //create a pointer that will eventually point to a

    aPtr = &a;  //have aPtr point to the address of variable a 

    cout << "The address of a is " << &a; 
    cout << "\nThe value of aPtr is " << aPtr; 

    cout << "\n\nThe value of a is " << a; 
    cout << "\nThe value of *aPtr is " << *aPtr; 


}

/*Output:
The address of a is 010FFB00
The value of aPtr is 010FFB00

The value of a is 10
The value of *aPtr is 10
*/
