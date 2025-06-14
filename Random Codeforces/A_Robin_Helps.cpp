#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int current_gold = 0;
        int help_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                current_gold += arr[i];
            }
            else if (arr[i] == 0)
            {
                if (current_gold > 0)
                {
                    help_count++;
                    current_gold--;
                }
            }
        }

        cout<<help_count<<endl;
    }

    return 0;
}