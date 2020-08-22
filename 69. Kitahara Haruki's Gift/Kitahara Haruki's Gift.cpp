#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int temp, n_100=0, n_200=0;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp == 100) n_100++;
        else n_200++;
    }

    if(n_100%2==0 && n_200%2==0) cout << "YES" << endl;

    else{
            if(n_200%2==1){
                n_100-=2;
            }
            if(n_100%2==0 && n_100>=0)cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    return 0;
}
