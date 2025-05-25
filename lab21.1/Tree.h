#include<iostream>
#include <string>
#define DEBUG 1

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
    string a;
public:
    Tree() {
        count = 0;
        root = nullptr;
    }
    ~Tree() {}

    void push(int data) {_push(data, root);}
    void reverseLevel() {_reverseLevel(root);}
    void treeOutput() {_treeOutput(root);}
    void treeSearch(int data) {_treeSearch(data, root);}
private:
    void _push(int data, TreeNode*& node, int level = 0);
    void _treeOutput(TreeNode* node, int level = 0, string prefix = "root: ");
    void _treeSearch(int data, TreeNode* node);
    int _reverseLevel(TreeNode* node);
};

// :-)