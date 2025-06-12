#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s; 
    int id;

    Student() {}

    Student(string nm, int cls, char s, int id)
    {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->id = id;
    }
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

  
    int left = 0, right = n - 1;
    while (left < right)
    {
        swap(arr[left].s, arr[right].s);
        left++;
        right--;
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << "\n";
    }

    return 0;
}
