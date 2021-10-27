#include<bits/stdc++.h>
using namespace std;

//str is the input the string
string compressString(const string &str){   
    //complete the function to return output string
    int n = str.size();
    string res;

    for(int i=0; i<n; i++){
        int count = 1;

        while(i<n-1 && str[i]==str[i+1]){
            count++;
            i++;
        }

        res+=str[i];
        res+=to_string(count);
    }

    if(res.length()>str.length()){
        return str;
    }

    return res;
}

int main(){
    string s;
    getline(cin, s);

    cout << compressString(s) << endl;
}