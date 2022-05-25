 #include <iostream>
using namespace std;
void printarr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void partition(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        partition(a, low, mid);
        partition(a, mid + 1, high);
        merge(a,mid,low,high);
    }
}
void merge(int a[], int mid, int low, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            K++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
int main()
{

    int a[] = {1, 6, 3, 2, 9};
    int n = 5;
    printarr(a, n);
    cout << "after sorting" << endl;
    partition(a, 0, 4);

    return 0;
}