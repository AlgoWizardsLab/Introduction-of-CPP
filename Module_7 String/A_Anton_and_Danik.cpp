#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string matches;
    cin >> n >> matches;

    int antonCount = 0;
    int danikCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (matches[i] == 'A')
            antonCount++;
        else if (matches[i] == 'D')
            danikCount++;
    }

    if (antonCount > danikCount)
        cout << "Anton" << endl;
    else if (danikCount > antonCount)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
