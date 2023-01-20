#include<iostream>
using namespace std;
void upperpart(int);
void lowerpart(int);
main()
{
    system("cls");
    
    int row;
    cout << "Enter the desired number of rows : ";
    cin >> row;
    upperpart(row/2);
    lowerpart(row/2);
    
}

void upperpart(int row)
{
    for (int i =1;i<=row;i++)
    {
        for(int j=1;j<=(row-i);j++)
        {
            cout << " ";
            
        }
        for(int k=1;k<=i;k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}


void lowerpart(int row)
{
    for (int i =1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << " ";
            
        }
        for(int k=1;k<=(row-i);k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}