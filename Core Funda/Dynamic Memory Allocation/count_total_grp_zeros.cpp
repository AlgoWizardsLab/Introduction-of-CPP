#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int grpZero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                if (i == 0 || arr[i - 1] != 0)
                {
                    grpZero++;
                }
            }
        }

        cout << grpZero << endl;
    }

    return 0;
}
