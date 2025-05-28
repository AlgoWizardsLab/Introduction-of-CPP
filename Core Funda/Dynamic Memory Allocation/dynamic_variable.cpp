#include<bits/stdc++.h>
using namespace std;
// Dynamic Variable:
int* myVar ;

void my_func (){
    int* age = new int(25);
    myVar = age;
    cout << "Age: " << *myVar << endl;
}

int main()
{
    my_func();
    cout<< " Inside main func Dynamic Variable: " << *myVar << endl;
     
    return 0;
}