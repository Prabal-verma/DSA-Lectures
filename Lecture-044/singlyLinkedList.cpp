#include<iostream>
using namespace std;

class Node{
  public:
  
  int data ;
  Node* next;


  // constructor
  Node(int data){
    this->data = data;
    this->next = NULL;
  }

  //destructor
  ~Node() {
    int value = this -> data;
    //memory free
    if(this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "memory is free for node with data " << value << endl;
  }
};

void insertAtHead(Node* &head, int data){
  // creating new node
  Node* temp = new Node(data);
  temp ->next = head;
  head= temp;
}

void insertAtTail(Node* &tail, int data){
  // creating new temp node
  Node* temp = new Node(data);
  tail->next = temp;
  temp->next = NULL;
  tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int pos, int data){

  // inserting at start
  if(pos ==1){
    insertAtHead(head,data);
    return;
  }
  Node*temp = head;
  int cnt = 1;

  while(cnt<pos-1){
    temp = temp->next;
    cnt++;
  }
  // inserting at end
  if(temp->next==NULL){
    insertAtTail(tail,data);
    return;
  }

  // creating a temp node
  Node* nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}


void deleteNode(int position, Node* & head) { 

  //deleting first or start node
  if(position == 1) {
    Node* temp = head;
    head = head -> next;
    //memory free start ndoe
    temp -> next = NULL;
    delete temp;
  }
  else
  {
    //deleting any middle node or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < position) {
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

  prev -> next = curr -> next;
  curr -> next  = NULL;
  delete curr;

  }
}


bool isCircularList(Node* head) {
  //empty list
  if(head == NULL) {
    return true;
  }

  Node* temp = head -> next;
  while(temp != NULL && temp != head ) {
    temp = temp -> next;
  }

  if(temp == head ) {
    return true;
  }

  return false;
}




void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data  << " ";
    temp = temp->next;
  }
    cout<< endl;
}

int main(){
  // creted new node
  Node* node1 = new Node(10);
  cout << node1->data<<endl;
  cout << node1->next<<endl;
  // pointed head and tail
  Node* head = node1;
  Node* tail = node1;
  print(head);

  // inserting new node
  insertAtHead(head,15);
  print(head);

  insertAtTail(tail,20);
  print(head);


  insertAtPosition(head,tail, 2, 12);
  print(head);

  deleteNode(2,head);
  print(head);
}