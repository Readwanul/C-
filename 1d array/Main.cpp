#include<iostream>
#include"ary1.h"
using namespace std;
int main()
{

    int a[4],b[4];
    int num;
    input1DArray(a,4);
    print1DArray(a,4);
    reversePrint1DArray(a,4);
    cout<<"Enter the number:";
    cin>>num;
    searchin1Darray(a,4,num);
    Max(a,4);
    Min(a,4);
    copy1DArray(a,b,4);
    Sort(a,4);
    cout<<"The sorted array is:";
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

}
