#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int k;
cin >> k;

int a[12];
for(int i=0; i<12; i++)cin >> a[i];

sort(a, a+12, greater<int>());
int sum = 0, num=0;

for(int i=0; i<12; i++){
    if(sum >= k) break;
    sum += a[i];
    num++;
    if(i==11 && sum<k) num = -1;
}
cout << num << endl;
return 0;
}
