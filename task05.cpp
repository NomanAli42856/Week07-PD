#include<iostream>
using namespace std;
void triangle(int);
main()
{
    system("cls");
    
    triangle(215);
}

void triangle(int num)
{
    int sum=0;
    for (int i =1;i<=num;i++)
    {
        sum = sum + i;
    }
    cout << sum;
}