    #include<iostream>
    #include<string>
    #include<string.h>

    using namespace std;

    int main(){
    string s;
    cin >> s;
    int h=-1, e=-1, l1=-1, l2=-1, o=-1, i;
    for(i=0; i<s.size(); i++){
        if(s[i]=='h'){
            h = i;
            break;
        }
    }

    for(i=h; i<s.size(); i++){
        if(s[i]=='e'){
            e = i;
            break;
        }
    }


    for(i=e; i<s.size(); i++){
        if(s[i]=='l'){
            l1 = i;
            break;
        }
    }

    for(i=l1; i<s.size(); i++){
        if(s[i]=='l' && i!=l1){
            l2 = i;
            break;
        }
    }

    for(i=l2; i<s.size(); i++){
        if(s[i]=='o'){
            o = i;
            break;
        }
    }

    if(h<e && e<l1 && l1<l2 && l2<o ) cout << "YES";
    else cout << "NO";

    return 0;
    }
