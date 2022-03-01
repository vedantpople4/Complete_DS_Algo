#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, int data){
    Node *temp = new Node(data);
    temp-> next = head;
    head = temp;
}

void printlist(Node* &head){
    Node *temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *node1  = new Node(10);
    cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node *head = node1;
    insertAtHead(head, 17);
    printlist(head);
    insertAtHead(head, 15);
    printlist(head);







    return 0;
}