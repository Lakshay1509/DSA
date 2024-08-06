#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int start;
    int prev;

    Queue(int size)
    {
        this->size = size;
        start = -1;
        prev = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - prev > 1)
        {
            prev++;
            arr[prev] = element;
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }

    void dequeue()
    {
        if (start != -1 && start - prev < 0)
        {
            start++;
        }
        else
        {
            cout << "Empty" << endl;
        }
    }
};

int main()
{
    Queue Q(5);
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);

    Q.push(6); // Overflow
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue(); // Empty
    return 0;
}
