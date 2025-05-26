#include <iostream>

#include "Tree.h"

using namespace std;

int main() {

    Tree a;
    a.push(100);
    a.push(50);
    a.push(25);
    a.push(75);
    a.push(150);
    a.push(175);
    a.push(125);
    a.push(135);
    a.reverseLevel();
    a.treeOutput();

    return 0;
}

// :-)