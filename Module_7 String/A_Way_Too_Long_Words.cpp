#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string myStr;
        cin >> myStr;

        if(myStr.size() <= 10){
            cout << myStr << endl;
        }
        else {
            int size = myStr.size() - 2;
            char first_letter = myStr.front();
            char last_letter = myStr.back();
            cout << first_letter << size << last_letter << endl;
        }
    }

    return 0;
}
