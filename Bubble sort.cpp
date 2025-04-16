#include<iostream>
using namespace std;
int bsort(int n[],int size){
    for(int j=0;j<size;j++){
    for(int i=0;i<size-1  ;i++){

if(n[i]<n[i+1]){
    int temp=n[i];
    n[i]=n[i+1];
    n[i+1]=temp;
}
}
}
}

int main()
{
    int num[5]={1,2,3,4,5};
    cout<<"The array is:";
        for(int i=0;i<5;i++){
        cout<<num[i]<<"\t";
    }

    bsort(num,5);
    cout<<"\nThe sorted array is:  ";
    for(int i=0;i<5;i++){
        cout<<num[i]<<"\t";
    }

}
