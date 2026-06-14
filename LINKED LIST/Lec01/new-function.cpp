#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void display(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp -> next;
    }
}

int length(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp -> next;
    }
    cout<<count;
}

void InsertFront(Node*& head, int x){
    Node* new
}

int main(){
    Node* head;

    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        InsertFront(head,a);
    }
    
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* forth = new Node(40);
    // Node* fifth = new Node(50);

    // head = first;
    // head -> next = second;
    // head -> next -> next = third;
    // head -> next -> next -> next = forth;
    // head -> next -> next -> next -> next = fifth;
    
    // Traverse

   display(head);
   
   cout<<length(head)<<endl;

   int InsertFront(head,5);

    return 0;
}