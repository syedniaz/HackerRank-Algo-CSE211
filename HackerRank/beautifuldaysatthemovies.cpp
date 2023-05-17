#include <bits/stdc++.h>

using namespace std;

int reversee(int n)
{
    int rem, rev = 0;
    while (n != 0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    return rev;
}

int beautifulDays(int i, int j, int k) 
{
    int irev, div, count = 0;
    while (i <= j)
    {
        irev = reversee(i);
        div = (i - irev)%k;
        if (div == 0) count++;
        i++;
    }
    return count;
}

int main()
{
    cout << beautifulDays(20,23,6) << endl;
    return 0;
}