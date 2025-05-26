#include "Tree.h"

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

void Tree::_printLevel(TreeNode *node, int level, string prefix) {

    if (node == nullptr) {
        cout << prefix << " - ";
        return;
    };
    if (level == 0) cout << prefix << node->data << " ";
    else {
        _printLevel(node->left, level - 1, "L:");
        _printLevel(node->right, level - 1, "R:");
    };
}

void Tree::_treeOutput(TreeNode* node, int level, string prefix) {


    for (int i = 0; i < level; i++) {
        _printLevel(node, i);
        cout  << endl;
    }
}

void Tree::_treeSearch(int data, TreeNode *node) {
    count++;
    if (!node) return;
    else if (data < node->data) _treeSearch(data, node->left);
    else if (data > node->data) _treeSearch(data, node->right);
    else cout << node->data << count  << endl;
}

// :-)

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
