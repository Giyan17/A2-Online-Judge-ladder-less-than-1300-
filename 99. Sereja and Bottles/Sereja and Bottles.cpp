#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a, b;

    int temp_a, temp_b;
    for(int i=0; i<n; i++){
        cin >> temp_a >> temp_b;
        a.push_back(temp_a), b.push_back(temp_b);
    }
    int open=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(b[i]==a[j] && i!=j){a[j]=-1;open++;}
        }
    }
    cout << n - open << endl;

    return 0;
}
