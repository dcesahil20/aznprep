#include <iostream>
#include <string>
#include <vector>
using namespace std;

void getSubsequence(string ss, string op, vector<string> &res ){

    if(ss.size()==0){
        res.push_back(op);
        return;
    }

    char ch = ss[0];
    ss = ss.substr(1);

    getSubsequence(ss, op + ch, res);
    getSubsequence(ss, op, res);
}


int main(){
    
    string s;
    getline(cin,s);
    
    vector<string> res;
    getSubsequence(s, " ", res);


    for(auto i : res){
        cout << i << " ";
    }

    cout << endl;
}