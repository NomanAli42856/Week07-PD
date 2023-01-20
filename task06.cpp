#include<iostream>
using namespace std;
void triangle(int);
main()
{
    system("cls");
    
    int prd,trt,untrt;
    int pat;
    int tot = 0;
    cout <<"Enter the period for calculation : ";
    cin >> prd;
    for(int i=1;i<=prd;i++)
    {
        
        cout << "Enter the number of paitents at Day " << i << " : ";
        cin pat;
        tot = pat + tot;
        trt = 0;
        untrt = tot - trt;
        if(trt > untrt)
        {
            trt = trt+7;
        }
        if(trt < untrt && i % 3 ==0)
        {
            trt = trt + 8;
        }

    }
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