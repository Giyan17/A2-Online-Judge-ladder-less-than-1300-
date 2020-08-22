#include<iostream>
 using namespace std;

 int main(){
 int s[4];

 for(int i=0; i<4; i++) cin >> s[i];

 int count = 0;
 for(int i=0; i<3; i++){
    for(int j=i+1; j<4; j++){
        if(s[i] == s[j])count++;
    }
     if(count == 3)break;
     else if(count == 2) break;
 }

 cout << count << endl;

 return 0;
 }
