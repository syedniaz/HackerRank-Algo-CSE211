#include <bits/stdc++.h>

using namespace std;

void prnt(vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort2(int n, vector<int> arr) 
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        int value = arr[i];
        while (j >= 1 && arr[j-1] > value) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = value;
        prnt(arr);
    }
}

int main()
{
    vector <int> arr {1, 4, 3, 5, 6, 2};
    insertionSort2(6, arr);

    return 0;
}