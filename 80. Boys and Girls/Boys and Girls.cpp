#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
    size_t n, m;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;
    if(n>=m){
        n-=m;
        while(m!=0){
            cout <<"BG";
            m--;
        }
        if(m==0){
            while(n!=0){
                cout << "B";
                n--;
            }
        }
    }

    else{
        m-=n;
        while(n!=0){
            cout <<"GB";
            n--;
        }
        if(n==0){
            while(m!=0){
                cout << "G";
                m--;
            }
        }
    }


    return 0;
}
