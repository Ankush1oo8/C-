#include<iostream>
using namespace std;
void india()
{
    cout<<"you are in INDIA!!"<<endl;
    return;
}

void usa()
{
    cout<<"you are in USA!!"<<endl;
    india();
    return;
}

int main()
{
    cout<<"you are in main"<<endl;
    india();
    usa();
    return 0;
}