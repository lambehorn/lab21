#include<iostream>
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
        TreeNode() {
            left = nullptr;
            right = nullptr;
        };
        TreeNode(int data = 0) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
    };
    TreeNode* root = nullptr;
    int count;
public:
    Tree() {
        count = 0;
        root = nullptr;
    }
    ~Tree() {}

    void push(int data, TreeNode* node = nullptr);
};
