#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) 
{
    int n1 = n;
    vector <int> arr;
    while (n1!=0)
    {
        arr.push_back(n1%10);
        n1 = n1/10;
    }
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0) continue;
        if ((n % arr[i]) == 0) count++;
        
    }
    return count;
}

int main ()
{
    cout << findDigits(1012) << endl;
    return 0;
}