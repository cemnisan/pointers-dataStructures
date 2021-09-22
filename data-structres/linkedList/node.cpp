#include <iostream>
using namespace std;

// Constructor Node
class Node{
    public:
        Node(const int& data = 0,Node* next=NULL): data(data), next(next) { }
        int data;
        Node* next;
};

// Constructor List
class list{
    Node* root;
    public:
        list(): root(NULL){}
        Node* begin()const{ return root; }
        Node* end()const{ return NULL; }
        // bool isEmpty()const{return root == NULL; } or
        bool isEmpty()const { 
            return begin() == end(); 
        }
};

int main(){

    list l;
    cout << l.isEmpty();


    return 0;
}