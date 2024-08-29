#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int element = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > element)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = element;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}