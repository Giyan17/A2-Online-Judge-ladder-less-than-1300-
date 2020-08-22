#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];

    int max=0, count_1=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            count_1=0;
            for(int z=i; z<=j; z++)a[z]=1-a[z];
            for(int z=0; z<n; z++){
                if(a[z]==1)count_1++;
                }
            if(count_1>max)max=count_1;
            for(int z=i; z<=j; z++)a[z]=1-a[z];
        }
    }
    cout << max << endl;
    return 0;
}
