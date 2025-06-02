#include<bits/stdc++.h>
using namespace std;

int main()
{
    string myStr = "Ikram Aaaakbar" ;

 /*    for(int i = 0; i<myStr.size(); i++){
        cout<<myStr[i]<<endl;
    } */

    for(string::iterator it = myStr.begin(); it<myStr.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}