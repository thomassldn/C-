/*Author: Thomas Saldana
*Stack
*Similar to Deitels Linked list on page 815
*
*Description: A queue is like a checkout line. The first items to come in are the
                first to come out. Queue nodes are moved from the head of the queue
                and are inserted only at the tail of the queue(FIFO).
                enque: insert operation
                deque: remove operation

                This function is derived from the class list
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



//******************* Class LIST *********************//
class List{
public:
    List();
    ~List();
    void insertAtFront(const int &);
    void insertAtBack(const int & );
    bool removeFromFront(int &);
    bool removeFromBack(int &);

    bool isEmpty() const;
    void printList()   const;

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
void List::insertAtBack(const int & value){

    Node * newPtr = createNewNode(value);

    if( isEmpty() ){
        head = lastPtr = newPtr;
    }else{
        lastPtr->nextPtr = newPtr;
        lastPtr = newPtr;
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
bool List::removeFromBack(int & value){
    if(isEmpty()){
        cout << "Nothing to do! List is Empty! \n";
        return false;
    }else{
        Node * tempPtr = lastPtr;
        if(head == lastPtr){ //if there is only one node
            head = lastPtr = NULL;
        }else{
            Node * currentPtr = head;
            while (currentPtr->nextPtr != lastPtr)
                currentPtr = currentPtr->nextPtr;

            lastPtr = currentPtr;
            currentPtr->nextPtr = NULL;
        }
        value = tempPtr->data;
        delete tempPtr;
        return true;
    }

}
bool List::isEmpty() const {

    return (head == NULL);
}

void List::printList()   const{
    if(isEmpty()){
        cout << "Nothing to do! List is Empty! \n";
        return;
    }else{
        Node * currentPtr = head;
        cout << "The list is: \n";
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

//******************* Class QUEUE *********************//
class Queue: private List {
public:
    void enqueue( const int & d ){insertAtBack(d);}
    bool dequeue( int & d ){ return removeFromFront(d);}
    bool isQueueEmpty() const { return isEmpty();}
    void printQueue() const { printList();}

};
//*******************END QUEUE *********************//


int main(){


    Queue queueObject;
    int data;

    cout << "Queue: \n";

    for(int i = 0; i < 4; i++){
        queueObject.enqueue(i);
        queueObject.printQueue();
    }

    return 0;
}
