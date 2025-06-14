#include <bits/stdc++.h>
using namespace std;
void print_min_max(int x, int y)
{
    if (x < y)
    {
        cout << x << " " << y << endl;
    }
    else
        cout << y << " " << x << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        print_min_max(x, y);
    }

    return 0;
}