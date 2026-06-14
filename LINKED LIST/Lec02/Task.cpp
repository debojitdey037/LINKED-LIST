#include <iostream>
#include <list>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data  = val;
        next = NULL;
    }
};

class LinkedList{

    public:

    Node* head;
    
    LinkedList(){
        head = NULL;
    }

// InsertFront
    void insertFront(Node*& head,int x){
         Node* temp = new Node(x);
         temp->next = head;
         head = temp;
    }

// InsertEnd
    void insertEnd(Node*& head,int x){
         Node* node = new Node(x);

         if(head==NULL){
             head = node;
             return;
         }

         Node* temp = head;
         while(temp->next != NULL){
            temp = temp->next;
         } 
        temp->next = node;
    }

//InsertPosition
    void insertPosition(int pos,int x){
         if(pos==1){
            Node* temp = new Node(x);
            temp->next = head;
            head = temp;
            return;
         }
         Node* curr = head;

         for(int i=1;i<pos-1 && curr!=NULL;i++){
            curr = curr->next;
         }

         if(curr == NULL){
            return;
         }

         Node* node = new Node(x);
         node->next = curr->next;
         curr->next = node;
    };

// DeleteFront
    void deleteFront() {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

//DeleteLast
    void deleteLast(Node*& head){
         if(head == NULL){
            return;
         }
         if(head->next == NULL){
            delete head;
            head = NULL;
            return;
         }
         Node* temp = head;
         if(temp->next->next != NULL){
            temp = temp->next;
         }
         delete temp->next;
         temp->next = NULL;
    };

//DeletePosition
    void deletePosition(Node*& head,int pos){
         if(head == NULL){
            return;
         }
         if(pos == 1){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
         }
         Node* curr = head;

         for(int i=1;i<pos-1 && curr!=NULL;i++){
            curr = curr->next;
         }

         if(curr == NULL || curr->next == NULL){
            return;
         }
         Node* temp = curr->next;
         curr->next = temp->next;
         delete temp;
    };

// Search
    bool search(Node* head,int key){
        Node* temp = head;

        while(temp!=NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    };

// Length
    int length(Node* head){
        int cnt = 0;
        Node* temp = head;

        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};

int main(){
 
    LinkedList();

    return 0;
}