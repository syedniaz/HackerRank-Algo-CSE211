#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector<int> arr) 
{
    int freq [101] {0};
    vector <int> arr1;
    int max = arr[0];
    
    for (int i = 0; i < arr.size(); i++)
    {
        int index = arr[i];
        freq[index]++;
        
        if (arr[i] > max) max = arr[i];
    }
    
    int max_freq = freq[0];
    int max_freq_ind = 0;
    for (int i = 0; i <= max; i++)
    {
        if (freq[i] > max_freq) 
        {
            max_freq = freq[i];
            max_freq_ind = i;
        }
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == max_freq_ind) arr1.push_back(arr[i]);
    }
    
    int res = (arr.size())-(arr1.size());
    return res;
}

int main()
{
    vector <int> arr {3, 3, 2, 1, 3};
    cout << equalizeArray(arr) << endl;
    return 0;
}