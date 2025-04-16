#include<iostream>
using namespace std;
int** inputArray(int** arr,int row,int col){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
            cout<<endl;
        }
        return arr;
}

void printArray(int** arr,int row,int col){
for (int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void reverseArray(int** arr,int row,int col){
    for(int i=row-1;i>=0;i--){
        for(int j=col-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}

bool searchnum(int** arr,int row,int col,int e){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(e==arr[i][j])
                return true;
        }
    }
return false;

}

int findmax(int** arr,int row,int col){
    int m=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(m<arr[i][j])
                m=arr[i][j];
        }
    }
return m;
}

int findmin(int** arr,int row,int col){
    int m=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(m>arr[i][j])
                m=arr[i][j];
        }
    }
return m;
}


int** copyarray(int** arr,int** brr,int row,int col){
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        brr[i][j]=arr[i][j];
    }
    }
return brr;
}

