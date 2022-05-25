#include <bits/stdc++.h>
using namespace std;
struct que
{
    int size;
    int r;
    int f;
    int *arr;
};

int isfull(struct que *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }

    return 0;
}
int isempty(struct que *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enque(struct que *q, int val)
{
    if (isfull(q))
    {
        cout << "que is overflow" << endl;
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}
int deque(struct que *q)
{
    int a = -1;
    if (isempty(q))
    {
        cout << "the que is full" << endl;
    }
    else
    {
        q->f++;
        return q->arr[q->f];
    }
}
void display(struct que q)
{
    for (int i = q.r; i < 0; i--)
    {
        cout << "q.arr[i]" << endl;
    }
}

void menu()
{
    cout << "what do you want to do??" << endl;
    cout << "1. enque" << endl;
    cout << "2.deque" << endl;
    cout << "3.display" << endl;
    cout << "4.exit" << endl;
}

void comand(struct que q)
{
    int cha, val;
    cout << "enter the choice" << endl;
    do
    {
        switch (cha)
        {
        case 1:
        {
            cout << "enter the value to be enque" << endl;
            cin >> val;
            enque(&q, val);
            menu();
            break;
        }
        case 2:
        {
            deque(q);
            menu();
            break;
        }
        case 3:
        {
            display(q);
            menu();
            break;
        }
        case 4:
        {
            cout << "thank you" << endl;
            break;
        }
        }
    } while (cha != 4);
}

int main()
{
    int s;
    cout << "enter the the of the que" << endl;
    cin >> s;
    struct que q;
    q.size = s;
    q.r = q.f = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    menu();
    comand(q);

    return 0;
}