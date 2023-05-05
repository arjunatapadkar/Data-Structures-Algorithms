

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<bool> Sieve(int n){
    vector<bool> s(n+1, true);

    s[0]=s[1] = false;
    for(int i=2; i<=n; i++){
        s[i] = true;
        int j = i * 2;
        while(j <= n){
            s[j] = false;
            j += i;
        }
    }
    return s;
}

vector<bool> seg_sieve(int L, int R){

    vector<bool> sieve = Sieve(sqrt(R));

    vector<int> base_primes;

    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]){
            base_primes.push_back(i);
        }
    }


    vector<bool> seg_sieve(R - L + 1, true);

    if(L==0 || L == 1) seg_sieve[L] = false;

    for(auto prime : base_primes){

        int first_mul = (L / prime) * prime;

        if(first_mul < L) first_mul += prime;

        int j = max(first_mul, prime * prime);

        while (j <=R){

            seg_sieve[j - L] = false;

            j = j + prime;

        }   
    }

    return seg_sieve;

}

int main(){


    int L = 100, R = 300;

    vector<bool> ss = seg_sieve(L, R);

    for(int i=0; i<ss.size(); i++){
        if(ss[i]){
            cout <<  L + i << " ";
        }

    }
    cout << endl;



    return 0;
}