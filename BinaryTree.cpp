#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *left;
    Node *right;
};

Node* MakeNode(char X) {
    Node *p;
    p = new Node;

    p->data = X;
    p->left = NULL;
    p->right = NULL;

    return p;
}

void PreOrder(Node *root) {
    if (root != NULL) {
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(Node *T) {
    if (T != NULL) {
        PostOrder(T->left);
        PostOrder(T->right);
        cout << T->data << " ";
    }
}

void InOrder(Node *T) {
    if (T != NULL) {
        InOrder(T->left);
        cout << T->data << " ";
        InOrder(T->right);
    }
}

int main() {

    Node *root = NULL;

    root = MakeNode('C');

    root->left = MakeNode('X');
    root->right = MakeNode('Y');

    root->left->left = MakeNode('T');

    root->right->left = MakeNode('M');
    root->right->right = MakeNode('N');

    cout << "Pre-Order Traversal is: ";
    PreOrder(root);

    cout << "\nPost-Order Traversal is: ";
    PostOrder(root);

    cout << "\nIn-Order Traversal is: ";
    InOrder(root);

    return 0;
}