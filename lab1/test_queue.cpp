#include <iostream>
#include <vector>
#include "priority_queue.h"
using namespace std;

/*
 * Functions priority_queue:
 * swap(int *a, int *b)
 * add(vector<int> &heapTree, int element)
 * void sort_heapTree(vector<int> &heapTree, int i);
 * void print_heapTree(vector<int> &heapTree);
 * void check_empty(vector <int> &heapTree);
*/
int main()
{
    vector<int> heapTree;

    check_empty(heapTree);
    add(heapTree, 7);
    add(heapTree, 1);
    add(heapTree, 3);
    add(heapTree, 9);
    add(heapTree, 2);
    add(heapTree, 4);
    check_empty(heapTree);
}
