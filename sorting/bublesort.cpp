#include <iostream>
using namespace std;
void prntarr(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        cout << a[i] << endl;
    }
}

void bubblesort(int a[], int n)
{
    int temp;
    int is_sorted;
    for (int i = 0; i < n; i++)
    { // for no of pass
        for (int j = 0; j < n - 1 - i; j++)
        { // for no of comparison in each pass{
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            
            }

        }
    }
}

int main()
{
    int a[] = {2, 7, 4, 6, 1, 9};
    int n = 6;
    prntarr(a, n);
    cout << "after bubble sort" << endl;
    bubblesort(a, n);
    prntarr(a, n);
    return 0;
}