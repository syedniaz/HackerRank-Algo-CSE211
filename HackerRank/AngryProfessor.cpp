#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector<int> a) 
{
    int ontime = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0 )
        {
            ontime++;
        }
    }
    if (ontime < k) return "YES";
    else return "NO";
}

int main()
{

    int k = 3; 
    
    vector<int> a {-1, -3, 4, 2};

    cout << angryProfessor(k,a) << endl;

    return 0;
}