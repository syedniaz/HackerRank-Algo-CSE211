#include <bits/stdc++.h>

using namespace std;


int utopianTree(int n) 
{
    int height {1};
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0) height *= 2;
        else height++;
    }
    return height;
}

int main ()
{
    int n = 5;
    //cin >> n;
    cout << utopianTree (n) << endl;
    
    return 0;
}