/*Author: Thomas Saldana
*Stack
*Similar to Deitels Linked list on page 812
*
*Description: A stack is similar to a Linked List. However, new nodes can  only
*             be added and removed from a stack only at the top (LIFO). The link
*             member in the last node of the stack is set to NULL to indicate the
*             bottom of the stack.
*Member Functions: Push(adds to the top), Pop(removes a node from the stack).
*/
#include <iostream>
using namespace std;

//******************* Class Node *********************//
class Node{

    friend class List;
public:
    Node(const int &);   //construtor
    int getData() const; //return data in the node
private:
    int data;       //Data in the list
    Node * nextPtr; //points to the next node in the list
};

Node::Node(const int & info):data(info), nextPtr(NULL){

}

int Node::getData()const{
    return data;
}

//*******************End Node *********************//



//******************* Class  LIST *********************//
class List{
public:
    List();
    ~List();
    void insertAtFront(const int &);
    void insertAtBack(const int & );
    bool removeFromFront(int &);
    bool removeFromBack(int &);

    bool isEmpty() const;
    void print()   const;

private:
    Node *head; //pointer to the front of the list
    Node *lastPtr;  //pointer to the back of the list

    //Utility funcition to allocate a new node
    Node * createNewNode(const int &);
};

//Function Definitions for class List
List::List():head(NULL), lastPtr(NULL){}

List::~List(){
    if(!isEmpty()){ //list is not empty
        cout << "Destroying All nodes ... ";
        Node * currentPtr = head, * tempPtr;

        while( currentPtr != NULL){ //delete nodes
            tempPtr = currentPtr;
            cout << tempPtr->data << '\n';
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
        }
    }
    cout << "All nodes destroyed \n";
}
void List::insertAtFront(const int & value){
    Node * newPtr = createNewNode(value);
    if(isEmpty()){
        head = lastPtr = newPtr;
    }else{
        newPtr->nextPtr = head;
        head = newPtr;
    }

}

bool List::removeFromFront(int & value){

    if(isEmpty()){
        cout << "Nothing to do! List is Empty! \n";
        return false;
    }else{
        Node * tempPtr = head;
        if(head == lastPtr){ //if there is only one node
            head = lastPtr = NULL;
        }else{
            head = head->nextPtr;
        }

        value = tempPtr->data;
        delete tempPtr;
        return true;
    }

}

bool List::isEmpty() const {

    return (head == NULL);
}

void List::print()   const{
    if(isEmpty()){
        return;
    }else{
        Node * currentPtr = head;
        cout << "The list is: ";
        while(currentPtr != NULL){
            cout << currentPtr->data;
            cout << " ";
            currentPtr = currentPtr->nextPtr;
        }
        cout << "\n\n";
    }

}
Node * List::createNewNode(const int & value ){
    Node * temp = new Node(value);

    return temp;
}

//******************* END LIST  *********************//

//******************* Class STACK **************************//

class Stack : private List {
public:
    void push( const int & d){insertAtFront(d);}
    bool pop( int & d)       {return removeFromFront(d);}
    bool isStackEmpty()const { return isEmpty();}
    void printStack()  const { print();}

};
//*******************END STACK **************************//

int main(){

    Stack intStack;
    int popInteger, i;

    cout << "Stack\n";
    cout << "--------\n";

    for(i = 0; i < 4; i++){
        intStack.push(i);
        intStack.printStack();
    }

    while( !intStack.isStackEmpty()){
        intStack.pop( popInteger );
        cout << popInteger << " popped from stack " << endl;
        intStack.printStack();
    }


    return 0;
}
