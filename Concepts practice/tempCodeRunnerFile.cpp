FIND UNIQUE ELEMENET: 
int getUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]= {2, 10,11,19,20,10,2,19,7,5,9,7,5,9,20};
    int n =15;

    int finalAns = getUnique(arr, n);
    cout<<"Final Answer: "<< finalAns;
}
