#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
string guest;
string host;
string pile;
cin >> guest >> host >> pile;
int count_guest = 0, count_host = 0;

for(int i=0; i<guest.size(); i++){
    for(int j=0; j<pile.size(); j++){
        if(guest[i] == pile[j]) {
           pile.erase(j,1);
           count_guest++;
           break;
        }
    }
}
//cout << pile << endl;
for(int i=0; i<host.size(); i++){
    for(int j=0; j<pile.size(); j++){
        if(host[i] == pile[j]) {
           pile.erase(j,1);
           count_host++;
           break;
        }
    }
}
//cout << pile.size() << endl;
//cout << count_guest << " " << count_host << endl;
if(pile.size() == 0 && count_guest == guest.size() && count_host == host.size()) cout << "YES";
else cout << "NO";

return 0;

}
