#include<iostream>
using namespace std;
void pattern(int);
main()
{
    system("cls");
    
    int row;
    cout << "Enter the desired number of rows : ";
    cin >> row;
    pattern(row);
    
}

void pattern(int row)
{
    for (int i =1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
            
        }
        for(int k=1;k<=(row-i);k++)
        {
            cout << " ";
        }
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
