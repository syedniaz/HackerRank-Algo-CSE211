#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector <int> ar;
    ar.push_back (0);
    ar.push_back (0);
    int al = 0, bob = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b [i]) al++;
        else if (a[i] < b [i]) bob++;
    }
    ar[0] = al;
    ar[1] = bob;
    
    return ar;
}

int main ()
{
    vector<int> a = {17,28,30};
    vector<int> b = {99,16,8};

    vector<int> result = compareTriplets(a, b);

    for (int i =0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}