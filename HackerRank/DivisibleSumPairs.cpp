#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) 
{
    int count {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum {0};
            sum = ar[i] + ar[j];
            if (sum % k == 0) count++;
        }
    }
    return count;
}

int main ()
{

    int k = 3;
    int n = 6;
    vector <int> ar {1, 3, 2, 6, 1, 2};

    cout << divisibleSumPairs(n, k, ar) << endl;

    return 0;
}