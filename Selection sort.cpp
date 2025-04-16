#include<iostream>
using namespace std;

void swap(int *N1,int *N2){
int temp;
temp=*N1;
*N1=*N2;
*N2=temp;
}
void Ssort(int N[],int Index)
{
    int C=0,S=0;
    for(int i=0;i<Index-1;i++){
        int minvalue=i;
        for(int j=i+1;j<Index;j++){

        if(N[j]<N[minvalue]){
            minvalue=j;
        }
        C++;
        }
        if(minvalue!=i){
        S++;
        swap(N[minvalue],N[i]);
        }
}
cout<<"\nTime Comparision:"<<C<<endl;
cout<<"Time Shifting:"<<S<<endl;
}

int main(){
int num[10]={12,32,1,2,3,4,56,7,90,2};
for(int i=0;i<10;i++){
    cout<<num[i]<<"\t";
}
Ssort(num,10);
for(int i=0;i<10;i++){
    cout<<num[i]<<"\t";
}

}
