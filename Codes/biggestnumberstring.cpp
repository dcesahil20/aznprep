#include<bits/stdc++.h>
using namespace std;

/*
    10 11 20 30 3
    330201110

*/


string concatenate(vector<int> numbers){
    //complete this method and return the largest number you can form as a string
    vector<string> s;

    for(auto i: numbers){
        s.push_back(to_string(i));
    }

    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());

    string str;

    for(auto i: s){
        str+=i;
    }

    return str;
}

int main(){
    vector<int> v  = {10,11,20,30,3};
    cout << concatenate(v);
}