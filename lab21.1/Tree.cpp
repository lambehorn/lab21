#include "Tree.h"
#include <cmath>
#include <string>
// void Tree::push(int data, TreeNode *node) {
//     TreeNode* current;
//     if (root != nullptr) {
//         if (node != nullptr) {
//             current = node;
//         }else {
//             current = root;
//         }
//         if (data < current->data) {
//             if (current->left == nullptr) {
//                 current->left = new TreeNode(data);
//                 cout << "l" << endl;
//             }else {
//                 push(data, current->left);
//             }
//         }else {
//             if (current->right == nullptr) {
//                 current->right = new TreeNode(data);
//                 cout << "r" << endl;
//             }else {
//                 push(data, current->right);
//             }
//         }
//     }else {
//         root = new TreeNode(data);
//         cout << "rt" << endl;
//     }
// }

int Tree::_reverseLevel(TreeNode *node) {
    if (!node) return 0;
    node->level =  1 + (max(_reverseLevel(node -> left), _reverseLevel(node -> right)));
    return node->level;
}


void Tree::_push(int data, TreeNode*& node, int level) {
    if (node == nullptr) node = new TreeNode(data, 0);
    else if (data < node->data) _push (data, node->left, level + 1);
    else if (data > node->data) _push (data, node->right, level + 1);
}

void Tree::_treeOutput(TreeNode* node, int level, string prefix) {

    if (node == nullptr) return;

    _treeOutput(node->left, level + 1, " ");
    cout << node->data << " " << node->level << endl;
    _treeOutput(node->right, level+1, " ");
}

void Tree::_treeSearch(int data, TreeNode *node) {
    count++;
    if (!node) return;
    else if (data < node->data) _treeSearch(data, node->left);
    else if (data > node->data) _treeSearch(data, node->right);
    else cout << node->data << count  << endl;
}

// :-)