#include <bits/stdc++.h>
using namespace std;

class Books
{
    string name;
    string author;
    string publication;
    int price;
    int page;

public:
    Books(string name, string author, string publication, int price, int page)
    {
        this->name = name;
        this->author = author;
        this->publication = publication;
        this->price = price;
        this->page = page;
    }

    void display()
    {
        cout << "Book: " << name
             << ", Author: " << author
             << ", Publication: " << publication
             << ", Price: " << price
             << ", Pages: " << page << endl;
    }
};

int main()
{
    int n;
    cout << "How many books do you want to enter? ";
    cin >> n;
    cin.ignore(); // ignore newline after number input

    Books* books[n]; // array of pointers to Books

    for (int i = 0; i < n; i++)
    {
        string name, author, publication;
        int price, page;

        cout << "\nEnter details for Book " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "Author: ";
        getline(cin, author);
        cout << "Publication: ";
        getline(cin, publication);
        cout << "Price: ";
        cin >> price;
        cout << "Pages: ";
        cin >> page;
        cin.ignore(); // ignore newline after int input

        books[i] = new Books(name, author, publication, price, page); 
    }

    cout << "\n--- Book List ---\n";
    for (int i = 0; i < n; i++)
    {
        books[i]->display();
    }

    // Free memory
    for (int i = 0; i < n; i++)
    {
        delete books[i];
    }

    return 0;
}
