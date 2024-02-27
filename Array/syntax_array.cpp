#include<iostream>
using namespace std;
int main()
{
    //int x[5] = {1,2,3,4,5} declaratuion + initialisation
    int x[5];//declaration
    x[0] = 6;
    x[1] = 9;
    x[2] = 6;
    x[3] = 9;
    x[4] = 6;
    for(int i=0; i<5; i++)
    {
        cout<<x[i]<<" ";
    }

}