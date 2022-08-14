#include <iostream>

void SelectionSort(int*, int);
void PrintArray(int*, int);

int main()
{
    const int size = 6;
    int arr[size] = {5, 3, 1, 6, -8, 7};
    SelectionSort(arr, size);
    PrintArray(arr, size);
    return 0;
}

void SelectionSort(int* arr, int size)
{
    int i = 0;
    int j = i + 1;
    int tmp;
    int first;
    for (i = 0; i < size; ++i)
    {
        first = i;
        for (j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[first])
            {
                first = j;
                tmp = arr[i];
                arr[i] = arr[first];
                arr[first] = tmp;
            }
        }
    }
}


void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ", ";
    }
}
