#include<iostream>

using namespace std;

class Tree {
private:
    class TreeNode {
        public:
        TreeNode* left;
        TreeNode* right;
        int data = 0;
        TreeNode() {
            left = nullptr;
            right = nullptr;

        };
        TreeNode(int data = 0, TreeNode* left = nullptr, TreeNode* right = nullptr) {
            this->data = data;
            this->left = left;
            this->right = right;
        }
    };
    TreeNode* root = nullptr;
    int count;
public:
    Tree() {
        count = 0;
        root = nullptr;
    }
    void Branch (int data, TreeNode* left = nullptr, TreeNode* right = nullptr) { // <= add recursive or whyle going for tree idk how it doing 
        TreeNode* current = this -> root;
        if (root == nullptr) {
            current = new TreeNode(data, left, right);

        }else if (data < current->data) {
            current->left = new TreeNode(data, current->left, nullptr);
        }else {
            current->right = new TreeNode(data, current->right, nullptr);
        }
    }


};