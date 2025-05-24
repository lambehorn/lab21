#include "Tree.h"

void Tree::push(int data, TreeNode *node) {
    TreeNode* current;
    if (root != nullptr) {
        if (node != nullptr) {
            current = node;
        }else {
            current = root;
        }
        if (data < current->data) {
            if (current->left == nullptr) {
                current->left = new TreeNode(data);
                cout << "l" << endl;
            }else {
                push(data, current->left);
            }
        }else {
            if (current->right == nullptr) {
                current->right = new TreeNode(data);
                cout << "r" << endl;
            }else {
                push(data, current->right);
            }
        }
    }else {
        root = new TreeNode(data);
        cout << "rt" << endl;
    }
}
// void Tree::push(int data, TreeNode* node) {
//     if (root == nullptr) root = new TreeNode(data);
//     else {
//         if (node == nullptr) node = new TreeNode(data);
//         else if (data < node->data) push (data, node->left);
//         else if (data > node->data) push (data, node->right);
//     }
// }
