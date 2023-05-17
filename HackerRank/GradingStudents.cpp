#include <bits/stdc++.h>

using namespace std;


vector<int> gradingStudents(vector<int> grades) 
{
    for (int i = 0; i < grades.size(); i++)
    {
        int temp = grades[i];
        if (grades[i] < 38) continue;
        if (grades[i]%5 == 0) continue;
        while (temp%5 != 0) temp++;
        if ((temp - grades[i]) >= 3 ) continue;
        else grades[i] = temp;
    }
    return grades;
}

int main()
{
    
    vector<int> grades = {73, 67, 38, 33};

    vector<int> result = gradingStudents(grades);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}