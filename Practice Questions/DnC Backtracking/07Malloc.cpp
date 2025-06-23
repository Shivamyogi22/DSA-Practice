#include<iostream>
using namespace std;

void print(int **v, int rows, int cols){
    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;

    }

}

int main(){
    // //1. Allocate using int
    // int *intPtr = new int(5);
    
    // // using malloc
    // int *mptr = (int *)malloc(4);
    // *mptr = 5;

    // cout<<*intPtr << " " << *mptr<<endl;

    // delete intPtr;
    // free(mptr);

    // //2. 1D Allocation
    // int *arrNew = new int[5];

    // //using malloc
    // int *arrMalloc = (int *)malloc(5*sizeof(int));

    // for(int i = 0; i<5; i++){
    //     int d; 
    //     cin>>d;
    //     arrNew[i] = arrMalloc[i] = d;
        
    // }
    
    // for(int i = 0; i<5; i++){
    //     cout<< arrNew[i] << " " << arrMalloc[i] <<endl;
    // }

    // delete[] arrNew;
    // free(arrMalloc);

    //3. 2D Allocation
    int rows = 5, cols = 5;
    int **ptr2d = new int *[rows];

    for(int i = 0; i<rows; i++){
        ptr2d[i] = new int [cols];
    }

    // using Mallock
    int **ptr2dMalloc = (int **)malloc(sizeof(int*) * rows);
    
    for(int i = 0; i<rows; i++){
        ptr2dMalloc[i] = (int *)malloc(sizeof(int) *cols);
    }    

    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            ptr2d[i][j] = 7;
            ptr2dMalloc[i][j] = 9;
        }
    }
    print(ptr2d, rows, cols);
    print(ptr2dMalloc, rows, cols);

    for(int i = 0; i<rows; i++){
        delete [] ptr2d[i]; 
        delete [] ptr2d;
    }
    for(int i = 0; i<rows; i++){
        free(ptr2dMalloc[i]); 
        free(ptr2dMalloc); 
    }

    return 0;

}