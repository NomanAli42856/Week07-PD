#include<iostream>
using namespace std;
void printpercentage(float num);
main()
{
    system("cls");
    
    float num;
    cout << "Enter number  : ";
    cin >> num;
    printpercentage(num);
}

void printpercentage(float num)
{
    float a = 0;
    float b = 0;
    float c = 0;
    for(int i =1;i<=num;i++)
    {
        int number;
        cout << "Enter the value in range (1-1000) : ";
        cin >> number;
        if(number % 2 == 0)
        {
            a++;
        }
        if(number % 3 == 0)
        {
            b++;
        }
        if(number % 4 == 0)
        {
            c++;
        }
    }
    cout << "Percentage of number divisible by 2 : " << (a/num)*100 << " %" << endl;
    cout << "Percentage of number divisible by 3 : " << (b/num)*100 << " %" << endl;
    cout << "Percentage of number divisible by 4 : " << (c/num)*100 << " %";
}