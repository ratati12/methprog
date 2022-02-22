void swap(int *a, int *b);
void add(vector<int> &heapTree, int element);
void sort_heapTree(vector<int> &heapTree, int i);
void print_heapTree(vector<int> &heapTree);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void add(vector<int> &heapTree, int element)
{
    int i;
    int size = heapTree.size();
    if (size != 0) 
    {
        heapTree.push_back(element);
        for (int i = size/2-1; i >= 0; i--)
        {
            sort_heapTree(heapTree, i);
        }
    }
    else
    {
        heapTree.push_back(element);
    }
}

void sort_heapTree(vector<int> &heapTree, int i)
{
    int size = heapTree.size();
    int max = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if ((left < size) && (heapTree[left] > heapTree[max])) max = left;      //looking for the max element 
    if ((right < size) && (heapTree[right] > heapTree[max])) max = right;   //between left and right elements
    if (max != i)
    {
        swap(&heapTree[i], &heapTree[max]);
        sort_heapTree(heapTree, max);
    }
}

void print_heapTree(vector<int> &heapTree)
{
    for (int i = 0; i < heapTree.size(); i++) 
    {
        cout << heapTree[i] << "  ";
    }
    cout << "\n";
}
