#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int max = scores[0];
    int min = scores[0];
    
    int maxcount {0}, mincount {0};
    
    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] > max) 
        {
            maxcount++;
            max = scores[i];
        }
        if (scores[i] < min) 
        {
            mincount++;
            min = scores[i];
        }
    }
    vector <int> broken;
    broken.push_back(maxcount);
    broken.push_back(mincount);
    return broken;
}

int main ()
{
    
    vector<int> scores {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};

    vector <int> broken = breakingRecords(scores);

    for (int i = 0; i < broken.size(); i++)
    {
        cout << broken[i] << " ";
    }

    return 0;
}