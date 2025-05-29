#include <bits/stdc++.h>
using namespace std;

class Astro
{
public:
    char name[100];
    int mass;
    float rotation_speed;
    double distance;

    Astro(char name[100], int mass, float rotation_speed, double distance)
    {
        strcpy(this->name, name);  // copy the string
        this->mass = mass;
        this->rotation_speed = rotation_speed;
        this->distance = distance;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Mass: " << mass << endl;
        cout << "Rotation Speed: " << rotation_speed << endl;
        cout << "Distance: " << distance << endl;
    }
};

int main()
{
    char name[] = "Earth";
    Astro a(name, 5972, 0.4651, 149.6e6);
    a.display();

    return 0;
}
