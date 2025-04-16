 #include<iostream>
using namespace std;

void init2DArray(int **mat,int row,int col,int v){
    for(int r=0;r<row;r++){
        mat[r] = new int[col];
    }
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            mat[r][c] = v;
        }
    }

}
void print2DArray(int **mat,int row,int col){
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cout<<mat[r][c]<<"\t";
        }
        cout<<endl;
    }
}
void input2DArray(int **mat,int row,int col){
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cin>>mat[r][c];
        }
    }
}
void transpose(int **mat1,int **mat2,int row,int col)
{
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            mat2[col][row]=mat1[row][col];
        }
    }

}
int main(){

    int row,col;
    row = 3;
    col = 3;
    int **matrixA = new int*[row];
    int **matrixB = new int*[row];


    init2DArray(matrixA,row,col,0);
    init2DArray(matrixB,row,col,0);

    cout<<"1st matrix:"<<endl;
    input2DArray(matrixA,row,col);


    transpose(matrixA,matrixB,row,col);
    print2DArray(matrixB,col,row);


return 0;
}

