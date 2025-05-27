#include "Tree.h"
#include <iostream>
#include <cmath>
#include <string>
int main() {

    Tree a;
    a.push(100);
    a.push(50);
    // a.push(25);
    a.push(75);
    a.push(150);
    a.push(175);
    a.push(125);
    a.push(135);
    a.push(115);
    a.push(165);
    a.push(185);
    a.reverseLevel();
    a.treeOutput();
    int d;
    cin >> d;
    a.deleteNode(d);
    a.reverseLevel();
    a.treeOutput();
    return 0;
}

// :-)