#include<iostream>
using namespace std;
void triangle(int);
main()
{
    system("cls");
    
    int prd,trt,untrt;
    int pat;
    int tot = 0;
    trt = 0;
    untrt = 0;
    int j=7;
    cout <<"Enter the period for calculation : ";
    cin >> prd;
    for(int i=1;i<=prd;i++)
    {
        
        cout << "Enter the number of paitents at Day " << i << " : ";
        cin >> pat;
        tot = pat + tot;
        if(pat <= 7)
        {
             trt = trt + pat;            
        }
        else if(pat > 7)
            {
                trt = trt + j;
                untrt = pat - trt;
            }
        else if(untrt > trt && i % 3 == 0)
        {
            j++;
            trt = trt + j;
        }
        untrt = tot - trt;
    }
    cout << j;
    cout << "Treated patients : " << trt << endl;
    cout << "Untreated patients : " << untrt;
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