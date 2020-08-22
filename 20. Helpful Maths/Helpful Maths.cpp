#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
string s;
cin >> s;
int num_1=0, num_2=0, num_3=0;

for(int i =0; i<s.size(); i+=2){
    if(s[i] == '1') num_1++;
    else if(s[i] == '2') num_2++;
    else num_3++;
}

for(int i=0; i<num_1*2; i+=2) s[i] = '1';
for(int i=0; i<num_2*2; i+=2) s[num_1*2 + i] = '2';
for(int i=0; i<num_3*2; i+=2) s[num_1*2 + num_2*2 + i] = '3';


cout << s;

return 0;


}
