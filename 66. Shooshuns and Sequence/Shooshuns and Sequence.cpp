#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a;
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    int flag=0, index=0, num=0;

    for(int i=0; i<a.size(); i++){
        if(a[k-1] != a[i]) {index = i; num++;}
    }

    if(index < k-1 && num >0) cout << index + 1 << endl;
    else if(index <= k-1 && num == 0) cout << 0 << endl;
    else if(index > k-1) cout << -1 << endl;

    return 0;
}
