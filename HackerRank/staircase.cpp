#include <bits/stdc++.h>

using namespace std;

void staircase(int n) 
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ( j >= ((n-i)+1))
            {
                cout << "#";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main ()
{
    staircase (6);

    return 0;
}