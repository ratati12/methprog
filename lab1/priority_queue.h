/*  Kласс должен содержать следующие методы: 
 *  проверка очереди на пустоту; [+]
 *  получение числа элементов в очереди; [+]
 *  добавление элемента в очередь; [+]
 *  удаление элемента из очереди; [+]
 *  доступ к максимальному элементу очереди;
 * */

using namespace std;
class Priority_queue 
{
    public:
        vector<int> heapTree;
        void swap(int *a, int *b)
        {
            int temp = *a;
            *a = *b;
            *b = temp;
        }

        void check_empty()
        {
            if (heapTree.size() == 0 ) cout << "The heap tree is empty\n";
            else cout << "The heap tree is not empty!\n"; 
        }

        void heapTree_size()
        {
            cout << "The heap tree contains " << heapTree.size() << " elements.\n";
        }
        void add(int element)
        {
            int i;
            int size = heapTree.size();
            if (size != 0) 
            {
                heapTree.push_back(element);
                for (int i = size/2-1; i >= 0; i--)
                {
                    sort_heapTree(i);
                }
            }
            else
            {
                heapTree.push_back(element);
            }
        }
        void rm(int element)
        {
            int i;
            int size = heapTree.size();
            for (i = 0; i < size; i++)
            {
                if (element == heapTree[i]) break;
            }
            swap(&heapTree[i], &heapTree[size-1]);
            heapTree.pop_back();
            for (int i = size/2-1; i >= 0; i--)
            {
                sort_heapTree(i);
            }
        }

        void sort_heapTree(int i)
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
                sort_heapTree(max);
            }
        }
        void print_max()
        {
            cout << "The max element is " << heapTree[0] << "\n";
        }
        void print_heapTree()
        {
            for (int i = 0; i < heapTree.size(); i++) 
            {
                cout << heapTree[i] << "  ";
            }
            cout << "\n";
        }
};
