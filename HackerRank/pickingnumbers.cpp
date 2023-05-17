#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) 
{
    int freq [101] {0};
    int res = -1;
    
    for (int i = 0; i < a.size(); i++)
    {
        int index = a[i];
        freq[index]++;
    }
    
    for (int i = 1; i <= 100; i++)
    {
        res = max(res, freq[i] + freq[i-1]);       
    }
    
    return res;
}

int main()
{
    vector <int> a = {1,2,2,3,1,2};

    cout << pickingNumbers(a) << endl;

    return 0;
}