#define DEBUG 1
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Tree {
// the class that stores information about the tree relationships
private:
    class TreeNode { // the class that stores the roots of the tree
    public:
        TreeNode* left;
        TreeNode* right;
        int data = 0;
        int level = 0;
        TreeNode() {
            left = nullptr;
            right = nullptr;
            level = 0;
        };
        TreeNode(int data = 0, int level = 0) {
            this->level = level;
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
    };
    // typedef TreeNode* root;
    TreeNode* root = nullptr;
    int count;
    string matrix;
public:
    Tree() {
        count = 0;
        root = nullptr;
    }
    ~Tree() {}

    //add node at tree
    void push(int data) {_push(data, root);}
    //adds height to each element of the tree
    void reverseLevel() {_reverseLevel(root);}
    //displays the tree horizontal
    void treeOutput() {_treeOutput(root);}
    //displays the tree by floor
    void treeOutput2() {_treeOutput2(root, root->level);}
    //tree search
    void treeSearch(int data) {_treeSearch(data, root);}
    //delete tree element
    void deleteNode(int deleteData) {_deleteNode(deleteData, root);};
private:
    void _push(int data, TreeNode*& node, int level = 0);
    int _reverseLevel(TreeNode* node);
    void _treeOutput(TreeNode* node, string prefix = "Root: ", string postfix = "");
    void _printLevel(TreeNode* node, int level, string prefix = "Rt:");
    void _treeOutput2(TreeNode* node, int level = 0, string prefix = "root: ");
    void _treeSearch(int data, TreeNode* node);
    void _deleteNode(int deleteData, TreeNode*& node);


};

// :-)
