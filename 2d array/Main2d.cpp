#include<iostream>
#include"arrayutility2d.h"
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the row:";
    cin>>row;
    cout<<"\nEnter the column:";
    cin>>col;

    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    int** brr=new int*[row];
    for(int i=0;i<row;i++){
        brr[i]=new int[col];
    }

    cout<<"The array:"<<endl;
    inputArray(arr,row,col);
    cout<<endl;
    cout<<"The array is:"<<endl;
    printArray(arr,row,col);
    cout<<endl;

    cout<<"reverse printing array:"<<endl;
    reverseArray(arr,row,col);
    cout<<endl;

    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(searchnum(arr,row,col,num))
    {
              cout<<"found"<<endl;
    }

    else{
        cout<<"Not found"<<endl;
    }


    cout<<"Max element : "<<findmax(arr,row,col)<<endl;
    cout<<"Min element : "<<findmin(arr,row,col)<<endl;

    cout<<"copying and printing"<<endl;
    copyarray(arr,brr,row,col);
    printArray(brr,row,col);

}
