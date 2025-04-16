#include<iostream>
using namespace std;

int input1DArray(int *Array, int Size)
{
   cout<<"The array is:"<<endl;
    for(int i=0;i<Size;i++)
    {
        cin>>Array[i];
    }
    cout<<endl;
    return 0;
}




int print1DArray(int *Array,int Size)
{
    cout<<"The array is:"<<endl;
    for(int i=0;i<Size;i++)
    {
        cout<<Array[i]<<"\t";
    }
    cout<<endl;
}
int reversePrint1DArray(int *Array, int Size)
{
    cout<<"The reverse array is:"<<endl;
    for(int i=Size-1;i>=0;i--)
    {
        cout<<Array[i]<<"\t";
    }
    cout<<endl;
}

int searchin1Darray(int *Array, int Size,int searchkey)
{
    int a=0;
    int i;
    for(i=0;i<Size;i++)
    {
        if(Array[i]==searchkey)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        cout<<"The number is in the index of "<<i<<endl;
    }
    else{
        cout<<"The number is not in the array."<<endl;
    }
}

int Max(int *Array,int Size)
{
    int Max=0;
    for(int a=0;a<Size;a++)
    {
        if(Array[a]>Max)
        {
            Max=Array[a];
        }
    }
    cout<<"The maximum number is: "<<Max<<endl;
}

int Min(int *Array,int Size)
{
    int Min=Array[0];
    for(int a=0;a<Size;a++)
    {
        if(Array[a]<Min)
        {
            Min=Array[a];
        }
    }
    cout<<"The minimum number is: "<<Min<<endl;
}
int copy1DArray(int *sourceArray, int *destinationArray, int Size)
{
    for(int i=0;i<Size;i++)
    {
        destinationArray[i]=sourceArray[i];
    }
    cout<<"The array is copied successfully"<<endl;
}
void Sort(int n[],int size){
    for(int j=0;j<size;j++){
    for(int i=0;i<size-1  ;i++){
if(n[i]>n[i+1]){
    int temp=n[i];
    n[i]=n[i+1];
    n[i+1]=temp;
}
}
}
}

