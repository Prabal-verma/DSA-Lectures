#include<iostream>
using namespace std;

class Node{
  public:

  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }

};

void insertAtTail(Node* &tail, int data){
  Node* temp = new Node(data);
  tail->next=temp;
  tail=temp;
  
}

void insertAtHead(Node* &head, int data){
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtMiddle(Node* &head,Node* &tail, int pos, int data){
  // inserting at start
  if(pos ==1){
    insertAtHead(head,data);
    return;
  }

  Node* temp = head;
  int cnt = 1;

  while(cnt<pos-1){
    temp = temp->next;
    cnt++;

  }
  if(temp->next==NULL){
    insertAtTail(tail,data);
    return;
  }

  Node* nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;

}

void print(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;


}

int main(){

  Node* node1 = new Node(10);

  cout << node1->data << endl;

  Node* head = node1;
  Node* tail = node1;

  print(head);

  insertAtHead(head, 12);

  print(head);

  insertAtTail(tail, 14);

  print(head);

  insertAtMiddle(head,tail,2,13);
  print(head); 


}