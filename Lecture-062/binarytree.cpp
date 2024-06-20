#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* Left;
    Node* Right;

    Node(int d) {
        this->data = d;
        this->Left = NULL;
        this->Right = NULL;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter the left child of " << data << endl;
    root->Left = buildTree(root->Left);
    cout << "Enter the right child of " << data << endl;
    root->Right = buildTree(root->Right);

    return root;
}

void preOrder(Node* root){
  // base case
  if(root == NULL){
    return;
  }
  cout << root->data << " ";
  preOrder(root->Left);
  preOrder(root->Right);
}

void InOrder(Node* root){
  // base case
  if(root == NULL){
    return;
  }
  InOrder(root->Left);
  cout << root->data << " ";
  InOrder(root->Right);
}
void PostOrder(Node* root){
  // base case
  if(root == NULL){
    return;
  }
  PostOrder(root->Left);
  PostOrder(root->Right);
  cout << root->data << " ";

}
void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Marker for end of level

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl; // End of level
            if (!q.empty()) {
                q.push(NULL); // Add marker for the next level
            }
        } else {
            cout << temp->data << " ";

            if (temp->Left) {
                q.push(temp->Left);
            }
            if (temp->Right) {
                q.push(temp->Right);
            }
        }
    }
}

int main() {
    Node* root = NULL;

    // Building tree
    root = buildTree(root);

    // Level order traversal
    cout << "Level Traversal : " << endl;;
    levelOrderTraversal(root);

    cout<< "Inorder traversal : " ;
    InOrder(root);
    cout<< "Preorder Traversal : ";
    preOrder(root);
    cout<< "Postorder traversal : ";
    PostOrder(root);

    return 0;
}
