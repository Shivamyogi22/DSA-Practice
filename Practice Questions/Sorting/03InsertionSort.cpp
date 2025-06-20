#include <iostream>
#include <vector>
using namespace std;

void insetionSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i <n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j-- ){
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                // ruk jao
                break;
            }
        }
        arr[j+1] = temp;
    }

}

int main(){ 
    vector<int> arr={4,5,1,2,3}; 
    insetionSort(arr);

    for(int num : arr){
        cout << num << " ";
    }
    cout<<endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

}