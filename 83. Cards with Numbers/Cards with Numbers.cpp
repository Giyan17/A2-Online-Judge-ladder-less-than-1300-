#include<iostream>
#include<vector>
#include<fstream>


using namespace std;
const int MAX=5001;
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int>p[MAX];

    int n, temp;
    cin >> n;

    for(int i=1; i<=2*n; i++){
        cin >> temp;
        p[temp].push_back(i);
    }
    int flag=0;
    for(int i=1; i<5001 ; i++)
    {
        if(p[i].size()%2==1)
            {
                flag=1;
                break;
             }
    }

    if(flag==1) {cout << -1;return 0;}

    for(int i=1; i<5001; i++){
        for(int j=0; j<p[i].size(); j+=2){
            cout << p[i][j] << " " << p[i][j+1];
            cout << endl;
        }
    }


    return 0;
}
