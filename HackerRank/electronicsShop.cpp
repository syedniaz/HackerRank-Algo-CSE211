#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) 
{
    int price = 0;
    int max_price = 0;
    int temp_max_price = 0;
    
    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            if ((keyboards[i] + drives[j]) > temp_max_price && (keyboards[i] + drives[j]) <= b) 
            {
                temp_max_price = keyboards[i] + drives[j];
            }
            
            if (temp_max_price > max_price && temp_max_price <= b) 
            {
                max_price = temp_max_price;
            }
        }
    }
    
    if (max_price == 0) return -1;
    else return max_price;
}

int main()
{
    vector<int> keyboards{3,1};
    vector<int> drives{5,2,8};
    int b = 10;
    cout << getMoneySpent(keyboards, drives, b) << endl;
    return 0;
}