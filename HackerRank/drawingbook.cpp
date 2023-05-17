#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) 
{
    int totalpfront = n/2;
    int targetpfront = p/2;
    int targetpback = totalpfront - targetpfront;
    
    int ret;
    if (targetpback < targetpfront) ret = targetpback;
    else ret = targetpfront;
    
    return ret;
}

int main()
{
    cout << pageCount(5,4) << endl;
    return 0;
}