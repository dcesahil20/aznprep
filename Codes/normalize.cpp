#include<bits/stdc++.h>
using namespace std;



string normalize(const string &sentence) {
    string copy = sentence;
    //Make the changes in copy, and return it

    stringstream ss(sentence);
    string token;
    string res;

    
    while(getline(ss,token,' ')){
        for(int i=0; i<token.size(); i++){
            token[i] = tolower(token[i]);
        }
        token[0] = toupper(token[0]);
        res+=token+" ";
    }

    return ;
}

int main(){
    string s;
    getline(cin,s);

    cout << normalize(s)<< endl;
}