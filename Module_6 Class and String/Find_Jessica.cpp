#include <bits/stdc++.h>
using namespace std;

int main()
{
    string given_sentence;
    getline(cin, given_sentence);

    stringstream ss(given_sentence);
    string word;
    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
