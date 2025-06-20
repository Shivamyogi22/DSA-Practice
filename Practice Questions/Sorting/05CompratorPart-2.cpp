#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myCompFor1stIndex(vector<int>&a, vector<int>&b){
    return a[1] < b[1];
}

void printvv(vector<vector <int>> &v){
    for(int i =0; i< v.size(); i++){
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];

        cout<< a <<" "<< b<< endl;   
    }
}

int main(){
    vector< vector<int> > v;
    int n;
    cout<<"Enter the size: \n";
    cin>>n;

    for(int i = 0; i<n; i++){
        int a, b;
        cout<< "Enter a, b: 4"<<endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);

        v.push_back(temp);
    }

    cout << "Here are the values "<<endl;
    printvv(v);

    // AB KRTE H SORT:
    sort(v.begin(), v.end());
    cout<<"Sorted Array will be: "<< endl;
    printvv(v);

    sort(v.begin(), v.end(), myCompFor1stIndex);
    cout<<"SORTING BASED ON INDEXING: "<<endl;

    printvv(v);



}
