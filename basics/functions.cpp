#include<iostream>
using namespace std;
void greet()//fuction making
{
    cout<<"good morning"<<endl;
    cout<<"How are you?"<<endl;
    return;//fuction khtam ho jata hai
}
int main()// main fuction

{
greet();//fuction call
cout<<"hey"<<endl;
greet();
}