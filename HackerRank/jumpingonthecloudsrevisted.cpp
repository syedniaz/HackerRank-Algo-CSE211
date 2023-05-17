#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c, int k) 
{
    int energy = 100;
    int i = k % c.size();
    energy -= c[i] * 2 + 1;
    while (i != 0)
    {
        i = (i + k) % c.size();
        energy = energy - (c[i] * 2 + 1);
    }
    
    return energy;
}

int main ()
{
    vector<int> c {0, 0, 1, 0, 0, 1, 1, 0};
    int k = 2;
    cout << jumpingOnClouds(c, k) << endl;
    return 0;
}