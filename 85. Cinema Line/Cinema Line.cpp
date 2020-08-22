#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
        }

    int money=0, n_25=0, n_50=0, n_100=0;

    for(int i=0; i<n; i++){
        if(A[i]==25){
            money+=25;
            n_25++;
        }
        else if(A[i]==50){
            if(n_25==0){cout<<"NO";return 0;}
            money+=25;
            n_50++, n_25--;
        }
        else{
            if(n_25>=1 && n_50>=1){
                money+=25;
                n_100++, n_50--, n_25--;
            }
            else if(n_25>=3){
                money+=25;
                n_100++, n_25-=3;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}
