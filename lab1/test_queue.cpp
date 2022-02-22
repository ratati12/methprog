#include <iostream>
#include <vector>
#include "priority_queue.h"
using namespace std;

/* Methods priority_queue:
 * swap(int *a, int *b)
 * add(int element)
 * rm(int element)
 * void sort_heapTree(int i);
 * void print_heapTree();
 * void check_empty();
 * void heapTree_size();
 * void print_max();
 * */

int main()
{
    Priority_queue test;

    test.check_empty();
    cout << "/* test.add(9);\n   tree.add(3); \n   tree.add(5);\n   tree.add(1);\n   tree.add(4);\n   tree.add(2);\n   tree.add(7);*/\n";
    test.add(3);
    test.add(5);
    test.add(9);
    test.add(4);
    test.add(1);
    test.add(7);
    test.add(2);
    test.check_empty();
    test.heapTree_size(); 
    test.print_heapTree();
    test.rm(3);
    test.print_heapTree();
    test.print_max();
}
