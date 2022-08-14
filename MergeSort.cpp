#include <iostream>

void Merge(int arr[], int first, int mid, int last);
void MergeSort(int arr[], int f, int l);
void Print_array(int* arr, int size);

const int arr_size = 4;

int main()
{

    int arr[] = {10, 8, 4, 1};
    Merge(arr, 1, 4, 2);
    MergeSort(arr, 0, 3);
    Print_array(arr, arr_size);
}

void Merge(int arr[], int first,int mid, int last)
{
 int temp_arr[arr_size] = {};
 int f1 = first;
 int l1 = mid;
 int f2 = mid + 1;
 int l2 = last;
 int index = first;
 
while((f1 <= l1) && (f2 <= l2))
{
	if(arr[f1] <= arr[f2])
	{
		temp_arr[index] = arr[f1];
		++f1;
	}
	else 
	{
		temp_arr[index] = arr[f2];
		++f2;
	}
	++index;
}

while(f1 <= l1)
{
	temp_arr[index] = arr[f1];
	++f1;
	++index;
}

while(f2 <= l2)
{
	temp_arr[index] = arr[f2];
	++f2;
	++index;
}

for(index = first; index <= last; ++index)
{
	arr[index] = temp_arr[index];
}
}

void MergeSort(int arr[], int f, int l)
{
    if(f < l)
    {
        int mid = (f + l) / 2;
        MergeSort(arr, f, mid);
        MergeSort(arr, mid + 1, l);
        Merge(arr, f, mid, l);
    }
}

void Print_array(int* arr, int size)
{
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i] << ", ";
  }
}
