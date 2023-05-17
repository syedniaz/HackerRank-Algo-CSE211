#include <bits/stdc++.h>

using namespace std;

void insertionSort1(int n, vector<int> arr) 
{
    int key = arr[n-1];
    for (int i = n-2; i >= -1; i--)
    {
        if (key < arr[i]) 
        {   
            arr[i+1] = arr[i];
            for (int j=0; j < n; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        else if (i==-1)
        {
            arr[i+1] = key;
        }
        else
        {
            arr[i+1] = key;
            break;
        }
    }
    for (int j=0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    
}

int main()
{
    int n = 5;
    vector <int> arr {2,4,6,8,3};
    insertionSort1(n, arr);
    return 0;
}
