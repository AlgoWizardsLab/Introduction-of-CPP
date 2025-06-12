#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    string name;
    string dept;
    int salary;
    int id;
    bool hasComplete_BEd;

public:
    // Constructor
    Teacher(const string &name, const string &dept, int salary, int id, bool hasComplete_BEd)
        : name(name), dept(dept), salary(salary), id(id), hasComplete_BEd(hasComplete_BEd) {}

    // Function to display teacher information
    void print_info() const
    {
        cout << "----------------------------------------" << endl;
        cout << "Teacher Information" << endl;
        cout << "----------------------------------------" << endl;
        cout << "ID              : " << id << endl;
        cout << "Name            : " << name << endl;
        cout << "Department      : " << dept << endl;
        cout << "Salary (monthly): " << salary << " Taka" << endl;
        cout << "B.Ed Completed  : " << (hasComplete_BEd ? "Yes" : "No") << endl;
        cout << "----------------------------------------" << endl;
    }

    // Getter for ID
    int getID() const { return id; }
};

int main()
{
    vector<Teacher> teachers;
    int n;
    cout << "How many teachers do you want to add? ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cout << "\nEnter details for Teacher " << i + 1 << ":\n";

        string name, dept;
        int salary, id;
        bool hasComplete_BEd;

        cin.ignore(); // To clear newline from previous input
        cout << "Name: ";
        getline(cin, name);

        cout << "Department: ";
        getline(cin, dept);

        cout << "Salary: ";
        cin >> salary;

        cout << "ID: ";
        cin >> id;

        cout << "B.Ed Completed (1 for Yes, 0 for No): ";
        cin >> hasComplete_BEd;

        teachers.emplace_back(name, dept, salary, id, hasComplete_BEd);
    }

    cout << "\n--- All Teacher Details ---\n";
    for (const auto &t : teachers)
    {
        t.print_info();
    }

    // Search functionality
    int search_id;
    cout << "\nEnter Teacher ID to search: ";
    cin >> search_id;

    bool found = false;
    for (const auto &t : teachers)
    {
        if (t.getID() == search_id)
        {
            cout << "\nTeacher Found:\n";
            t.print_info();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Teacher with ID " << search_id << " not found." << endl;
    }

    return 0;
}
