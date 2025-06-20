#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

vector <bool> Sieve(int n){
    // create a sieve of N Size telling is prime.
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i =2; i*i<=n; i++){// OPTIMIZATION -II i<-n ---> i*i<=n
        if(sieve[i] == true){
            // int j = i*2;
            int j = i*i; //-------> OPTIMISATION- I  j=i*2 ---> j = i*i;
            // First unmarked number would be i*i, kuki uske phele k to already marekd ho chuke honge i*(i-n) where n=1,2,3,4, < i
            while(j<=n){
                sieve[j] = false;
                j = j+i;
            }
        }
    }

    return sieve;
}

// int main(){
//     vector<bool> sieve = Sieve(25); 

//     for(int i = 0; i<=25; i++){
//         if(sieve[i]){
//             cout<< i<<" ";
//         }
//     }

//     return 0;
// }
vector<bool> segSieve(int L, int R){
    // get me prime array, I will use it to mark seg sieve
    vector<bool> sieve = Sieve(sqrt(R));
    vector<int> basePrimes;

    for(int i = 0; i<sieve.size(); i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R-L+1, true);
    if(L==1 || L == 0){
        segSieve[0] = false;
    }

      for (auto prime : basePrimes) {
        long long first_mul = (L / prime) * prime;
        if (first_mul < L) first_mul += prime;
        // Important: Skip marking the base prime itself if it's inside the range
        if (first_mul == prime) first_mul += prime;

        for (long long j = max(first_mul, 1LL * prime * prime); j <= R; j += prime) {
            segSieve[j - L] = false;
        }
    }

    return segSieve;
}

int main() {
    int L = 110, R = 130;
    vector<bool> result = segSieve(L, R);

    cout << "Primes in range [" << L << ", " << R << "]:\n";
    for (int i = 0; i < result.size(); i++) {
        if (result[i]) {
            cout << (i + L) << " ";
        }
    }

    return 0;
}