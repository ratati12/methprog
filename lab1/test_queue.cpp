#include <iostream>
#include <vector>
#include "priority_queue.h"
using namespace std;

/*
 * Functions priority_queue:
 * swap(int *a, int *b)
 * add(int element)
 * void sort_heapTree(int i);
 * void print_heapTree();
 * void check_empty();
 * void heapTree_size()
 * 
 * */

int main()
{
    Priority_queue tree;

    tree.check_empty();
    cout << "/* tree.add(9);\n   tree.add(3); \n   tree.add(5);\n   tree.add(1);\n   tree.add(4);\n   tree.add(2);\n   tree.add(7);*/\n";
    tree.add(9);
    tree.add(3);
    tree.add(5);
    tree.add(1);
    tree.add(4);
    tree.add(2);
    tree.add(7);
    tree.check_empty();
    tree.heapTree_size(); 
    tree.print_heapTree();
}
