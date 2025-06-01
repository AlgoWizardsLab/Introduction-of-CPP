#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello world This is test , I am a newbie programmer !";
    string s2 = "New World";

    //check the both length are equal or not :
    if(s == s2)cout<<"Same Length"<<endl;
    else cout<<"Not Same "<<endl;

    //maxSize of this machine capacity :
    cout<<s.max_size()<<endl; //4611686018427387903
    //capcity :
    cout<<s.capacity()<<endl;

    //resize : s.resize(1st parameter: Number, Second parameter: " ")
    // s.resize(100);
    s.resize(100,'e');
    cout<<s<<endl;
    return 0;
}