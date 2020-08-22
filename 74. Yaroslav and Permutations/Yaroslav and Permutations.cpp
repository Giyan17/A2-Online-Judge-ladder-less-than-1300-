#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int temp;
    int a[1001] = {0};
    for(int i=0; i<n; i++){
        cin >> temp;
        a[temp]++;
    }
   sort(a, a+1001, greater<int>());

   int half, flag=0;
   if(n%2==0) half=n/2;
   else half=(n/2)+1;
   for(int i=0; i<=1000; i++){
        if(a[i]==0)break;
        if(a[i] > half) {flag=1;break;}
   }

   if(flag==1)cout << "NO" << endl;
   else cout << "YES";

    return 0;
}
