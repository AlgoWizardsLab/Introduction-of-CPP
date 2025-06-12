#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    string name;
    string dept;
    int salary;
    int id;
    bool hasComplete_BEd;

public:
    Teacher(string name, string dept, int salary, int id, bool hasComplete_BEd)
    {
        this->name = name;
        this->dept = dept;
        this->id = id;
        this->salary = salary;
        this->hasComplete_BEd = hasComplete_BEd;
    }

    void print_info() {
        cout << "ID : " << id << endl;
        cout << "Teacher Name : " << name << endl;
        cout << "Dept of  : " << dept << endl;
        cout << "Salary (per month): " << salary << endl;
        cout << "B.Ed complete : " << (hasComplete_BEd ? "Yes" : "No") << endl;
    }
};

int main()
{
    Teacher t1("John Doe", "Mathematics", 50000, 101, true);
    t1.print_info();

    return 0;
}
