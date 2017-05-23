//Author: Thomas Saldana
//Linked List
//Similar to Deitels Linked list on page 800

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

void testList(List & listObject){
    cout << "Testing the list...\n";

    cout << "Enter one of the following: \n"
         << " 1 to insert at beginning of list\n"
         << " 2 to insert at end of list \n"
         << " 3 to delete from beginning of list \n"
         << " 4 to delete from end of list \n"
         << " 5 to end list processing\n";

    int choice;

    int value;
    do{
        cout << "? ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter value:" ;
                cin >> value;
                listObject.insertAtFront(value);
                listObject.printList();
                break;
            case 2:
                cout << "Enter value:";
                cin >> value;
                listObject.insertAtBack(value);
                listObject.printList();
                break;
            case 3:
                if(listObject.removeFromFront(value))
                    cout << value << " removed from list\n";

                listObject.printList();
                break;
            case 4:
                if(listObject.removeFromBack(value))
                cout << value << " removed from list\n";

                listObject.printList();
                break;
        }
    }while(choice != 5);
    cout << "End of list test\n\n";
}
int main(){

    List integerList;
    testList(integerList);

    return 0;
}
