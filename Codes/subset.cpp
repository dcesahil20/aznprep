#include <iostream>
#include <string>
using namespace std;


void checkSubset(string s, string in){
    
    int j = s.length()-1;
    int i = in.length()-1;
    
    while(j>=0){
        cout << "S " << s[i] << endl;
        cout << "IN " << in[j] << endl; 
        if(in[i]==s[j]){
            i--;
            j--;
        }
        else{
            j--;
        }
    }

    if(i>=0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    
}

int main(){

    string s,in;

    getline(cin,s);
    getline(cin,in);

    checkSubset(s,in);
}