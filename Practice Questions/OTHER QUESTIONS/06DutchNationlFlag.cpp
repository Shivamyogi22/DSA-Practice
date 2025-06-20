#include<iostream>
#include<vector>

using namespace std;

void moveAllNegativeToLeft(int *a, int n){
    int low = 0;
    int high = n-1;

    while(low<high){
        if(a[low]< 0){
            low++;
        }
        else if(a[high]>0){
            high--;
        }
        else{
            swap(a[low], a[high]);
        }

    }
}

int main(){
    int a[] ={1,2,3,-2,-5, -110, 10, -45};
    int n = sizeof(a)/sizeof(int);

    moveAllNegativeToLeft(a, n);

    for(int i =0; i<n; i++){
        cout<< a[i]<<" ";
    }

    cout<<endl;

    return 0;

}