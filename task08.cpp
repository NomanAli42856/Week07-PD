#include<iostream>
using namespace std;

void averageton(int );

main()
{
    system("cls");
    
    int num;
    cout << "Enter the number : ";
    cin >> num;
    averageton(num);
    
}

void averageton(int num)
{
    int sum = 0;
    int average = 0;
    int tons;
    for (int i=1 ; i<=num ; i++)
    {
        cout << "Enter the number of tons : ";
        cin >>  tons;
        tons = sum + tons;
    }
        if(tons < 3)
        {
            average = tons / 200;
        }
        if(tons > 3 && tons < 11)
        {
            average = tons / 175;
        }
        if(tons > 11)
        {
            average = tons / 120;
        }
        int pm = 4/tons*100;
        int pt = 5/tons*100;
        int ptt =  16/tons*100;
        cout << (4*200+5*175+16*120)/25 << endl;
        cout << "Percentage by minibus = " << pm << endl;
        cout << "Percentage by truck = " << pt << endl; 
        cout << "Percentage by train = " << ptt;   
}