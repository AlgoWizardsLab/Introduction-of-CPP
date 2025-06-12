#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;

    Student() {}

    Student(string nm, int cls, string s, int id, int math_marks, int eng_marks)
    {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    // Reverse the sections
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i].s, arr[n - 1 - i].s);
    }

    // Print updated student data
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " "
             << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}
