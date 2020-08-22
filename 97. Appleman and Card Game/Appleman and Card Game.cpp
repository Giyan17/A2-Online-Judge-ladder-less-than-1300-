#include<iostream>
#include<algorithm>
#include<string>
#define ll long long
using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    ll s[26]={0};

    for(ll i=0; i<n; i++){
        s[str[i] - 'A']++;
    }

    sort(s, s+26, greater<int>());

    ll sum=0, index;
    for(int i=0; i<26; i++){
        sum+=s[i];
        if(sum>=k){index=i;break;}
    }
    ll ans=0, rem=k;
    for(int i=0; i<index; i++){
            ans+=s[i]*s[i];
            rem-=s[i];
        }


    if(rem>0 && rem<k) ans+=rem*rem;

    if(index==0){
        ans=k*k;
    }

    cout << ans;

    return 0;
}
