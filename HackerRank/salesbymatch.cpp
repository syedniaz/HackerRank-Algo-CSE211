#include <bits/stdc++.h>


using namespace std;

int sockMerchant(int n, vector<int> ar) 
{
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i] == ar[j] && ar[i] != 0)
            {
                pairs++;
                ar[i] = ar[j] = 0;
            }
        }
    }
    return pairs;
}


int main ()
{
    int n = 9;
    vector <int> ar {10, 20, 20, 10, 10, 30, 50, 10, 20};

    cout << sockMerchant(n, ar) << endl;
}