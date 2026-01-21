#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node *root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

void inorder(Node *root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

void freeTree(Node *root) {
    if (root == nullptr) return;
    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main() {
    Node *root = nullptr;

    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; ++i) {
        root = insert(root, values[i]);
    }

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << "\n";

    freeTree(root);
    return 0;
}
