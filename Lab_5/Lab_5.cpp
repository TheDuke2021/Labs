

#include <iostream>

int correct(int* arr, int size);
void shuffle(int* arr, int size);
void bogoSort(int* arr, int size);

using namespace std;

int main()
{
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    bogoSort(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
}

int correct(int* arr, int size) {
    while (size-- > 0)
        if (arr[size - 1] > arr[size])
            return 0;
    return 1;
}

void shuffle(int* arr, int size) {
    for (int i = 0; i < size; ++i)
        swap(arr[i], arr[(rand() % size)]);
}

void bogoSort(int* arr, int size) {
    while (!correct(arr, size))
        shuffle(arr, size);
}