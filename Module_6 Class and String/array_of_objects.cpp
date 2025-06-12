#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    int roll;
    int mathMarks;
    int scienceMarks;
};

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    cin.ignore(); 

    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].cls;
        cin >> arr[i].roll;
        cin >> arr[i].mathMarks;
        cin >> arr[i].scienceMarks;
        cin.ignore();
    }

    cout << "\n===== Student Details =====\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << arr[i].name << endl;
        cout << "Class: " << arr[i].cls << endl;
        cout << "Roll: " << arr[i].roll << endl;
        cout << "Math Marks: " << arr[i].mathMarks << endl;
        cout << "Science Marks: " << arr[i].scienceMarks << endl;
    }

    return 0;
}
