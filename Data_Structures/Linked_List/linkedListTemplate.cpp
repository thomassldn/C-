#include <iostream>
using namespace std;

//*******************Node *********************//
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



//******************* LIST *********************//
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
    Node *firstPtr; //pointer to the front of the list
    Node *lastPtr;  //pointer to the back of the list

    //Utility funcition to allocate a new node
    Node * getNewNode(const int &);
};

//Function Definitions for class List
List::List():firstPtr(NULL), lastPtr(NULL){

}
List::~List(){

}
void List::insertAtFront(const int & value){

}
void List::insertAtBack(const int & value){

}
bool List::removeFromFront(int & value){

    return true;
}
bool List::removeFromBack(int & value){
    return true;
}
bool List::isEmpty() const {


    return true;
}

Node * List::getNewNode(const int & value ){
    Node * ptr = new Node(value);
    return ptr;
}

//******************* END LIST  *********************//
int main(){




    return 0;
}
