#include "Tree.h"

void Tree::_push(int data, TreeNode*& node, int level) {
    if (!node) node = new TreeNode(data, 0);
    else if (data < node->data) _push (data, node->left, level + 1);
    else if (data > node->data) _push (data, node->right, level + 1);
}

int Tree::_reverseLevel(TreeNode *node) {
    if (!node) return 0;
    node->level =  1 + (max(_reverseLevel(node -> left), _reverseLevel(node -> right)));
    return node->level;
}

void Tree::_treeOutput(TreeNode *node, string prefix, string postfix) {
    if (!node) {
        cout << prefix << "-" << postfix << endl;
        return;
    }
    _treeOutput(node->right, "Rgt:", " \\");
    for (int i = 0; i < node->level; i++) cout << "\t";
    cout << prefix << node->data  << " " << node->level << postfix << endl;
    _treeOutput(node->left, "Lft:", " /");
}

void Tree::_printLevel(TreeNode *node, int level, string prefix) {
    if (!node) {
        cout << prefix << "-";
        return;
    };
    if (level == 0) cout << prefix << node->data << " ";
    else {
        _printLevel(node->left, level - 1, "L:");
        _printLevel(node->right, level - 1, "R:");
    };
}

void Tree::_treeOutput2(TreeNode* node, int level, string prefix) {
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


void Tree::_deleteNode(int deleteData, TreeNode*& node) {
    if (!node) return;
    else if (deleteData < node->data) _deleteNode(deleteData, node->left);
    else if (deleteData > node->data) _deleteNode(deleteData, node->right);
    else{
        if (!node->left) node = node->right;
        else if (!node->right) node = node->left;
        else {

            TreeNode* restoreNode = node->right;
            while(restoreNode->left) {
                restoreNode = restoreNode->left;
            }
            node->data = restoreNode->data;
            _deleteNode(restoreNode->data, node->right);
        }
        }
}

// :-)
