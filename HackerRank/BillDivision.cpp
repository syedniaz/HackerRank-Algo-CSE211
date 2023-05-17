#include <bits/stdc++.h>

using namespace std;


void bonAppetit(vector<int> bill, int k, int b) 
{
    int sum {0};
    for (int i = 0; i < bill.size(); i++)
    {
        sum += bill[i];
    }
    sum -= bill[k];
    sum /= 2;
    int ret = b-sum;
    if (ret == 0) cout << "Bon Appetit" << endl;
    else cout << ret << endl;
}

int main()
{
    vector<int> bill {3,10,2,9};
    int k {1}; 
    int b {7};

    bonAppetit(bill, k, b);

    return 0;
}