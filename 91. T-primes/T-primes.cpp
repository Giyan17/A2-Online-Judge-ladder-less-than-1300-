#include<iostream>
#include<cmath>
#include<vector>

#define ll long long

using namespace std;

int check_prime(ll n){
    int sum=0;
    for(ll i=1; i*i<=n; i++){
        if(n==1)break;
        if(n%i==0){
            if(i*i!=0)sum++;
            sum++;
        }
        if(sum>2)break;
    }
    if(sum == 2) return 1;
    else return 0;
}

int main(){
    ll n;
    string A[1000005];
    cin >> n;
    while(n--){
        ll m;
        cin >> m;

        ll root = sqrt(m);
        int flag;
        if(root*root!=m){
            flag=0;
        }
        else{
            if(A[root].size()!=0){
                cout << A[root]<< endl;
                continue;
            }
            flag=check_prime(root);
        }
        if(flag==1){cout << "YES" << endl;A[root] = "YES";}
        else{cout << "NO" << endl; }

    }

    return 0;
}
