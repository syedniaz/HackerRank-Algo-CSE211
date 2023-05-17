#include <bits/stdc++.h>

using namespace std;


int designerPdfViewer(vector<int> h, string word) 
{
    /* in ASCII w = 119,a = 97
        'w' - 'a' = 22, 22nd letter of alphabet = w (counting from 0)
    */
    int max = 0;
    int lenght = word.size();
    for (int i = 0; i < lenght; i++)
    {
        if ( h[word[i] - 'a'] > max) 
        {
            max = h[word[i] - 'a'];
        }
    }
    int area = max * lenght;
    return area;
}

int main()
{
    vector<int> h {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7}; 
    string word = "zaba";

    cout << designerPdfViewer(h, word) << endl;

    return 0;
}
