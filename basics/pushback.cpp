#include<iostream>
using namespace std;
int main()
{
    string s="ankush";
    cout<<s.length()<<endl;
    cout<<s<<endl;
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    cout<<s.length()<<endl;


}