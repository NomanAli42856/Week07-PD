#include<iostream>
using namespace std;
void amplify(int);
main()
{
    system("cls");
    
    amplify(25);
    
}

void amplify(int n)
{
    int i=1;
    while(i<=n)
    {
        cout << i << ", ";
        i++;
        if(i%4==0)
        {
            cout << i*10 <<", ";
            i++;
        }
    }
}