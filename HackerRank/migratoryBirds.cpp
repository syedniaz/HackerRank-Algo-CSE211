#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(vector<int> arr) 
{
    int m = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > m) m = arr[i];
    }
    vector<int> arr1[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i+1) arr1[i].push_back(arr[j]);
        }
    }
    /*for (int i = 0; i < m; i++)
    {
        cout << i+1 << ":"; 
        for (int j = 0; j < arr1[i].size(); j++)
        {
            cout << arr1[i][j];
        }
        cout << endl;
    }*/
    int freq = arr1[0].size();
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr1[i].size() > freq) 
        {
            freq = arr1[i].size();
            j = i+1;
        }
    }
    return j;     
}

int main()
{
    vector<int>arr{1,2,3,4,5,4,3,2,1,3,4};
    cout << migratoryBirds(arr) << endl;
    return 0;
}