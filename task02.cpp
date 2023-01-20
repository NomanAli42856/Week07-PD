#include<iostream>
using namespace std;
void nested(int);
main()
{
    system("cls");
    
    int row;
    cout << "Enter the desired number of rows : ";
    cin >> row;
    nested(row);
    
}

void nested(int row)
{
    for (int i =row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}