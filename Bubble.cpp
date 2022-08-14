#include <iostream>

void Bubble_sort(int* arr, int size);

int main()
{
  const int size = 5;
  int arr[size] = {56, 39, 41, 20, 6};
  Bubble_sort(arr, size);
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i] << ", ";
  }
}
void Bubble_sort(int* arr, int size)
{
  bool flag = true;
  for (int i = 0; i < size - 1; ++i)
  {
    flag = true;
    for (int j = 0; j < size - 1; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        std::swap(arr[j], arr[j + 1]);
        flag = false;
      }
    }
    if (flag)
    {
      return;
    }
  }
}
