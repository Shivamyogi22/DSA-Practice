#include<iostream>
using namespace std;

int getPaintWays(int n, int k){
    // base case
    if(n == 1){
        return k;
    }
    if(n == 2){
        return k + k*(k-1); // same ka ans = k and diff ka = k*(k-1)
    }

    int ans = (k-1)*(getPaintWays(n-1, k) + getPaintWays(n-2, k));

    return ans;
}

int main(){
    int n =3; // walls
    int k =3; // colors R, G, B;

    int ans = getPaintWays(n, k);

    cout<<ans << endl;
}