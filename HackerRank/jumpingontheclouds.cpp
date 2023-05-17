#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c) 
{
    int count = 0;
    for (int i = 0; i < c.size(); i++)
    {
        c[i] += 1;
    }
    for (int i = 0; i < c.size(); )
    {
        if (c[i+2] == 1)
        {
            i+=2;
            count++;
        }
        else if (c[i+1] == 1)
        {
            i++;
            count++;
        }
        else i++;
    }
    return count;
}

int main()
{
    vector <int> c {0,0,1,0,0,1,0};
    cout << jumpingOnClouds(c) << endl;
    return 0;
}