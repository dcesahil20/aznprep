#include<string>
#include <iostream>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function
    int hours = minutes/60;
    int min = minutes%60;
    string m = to_string(min);
    string s;
    if(m.size()>1){
        s = to_string(hours) + ":" + to_string(min);
    }
    else{
        s = to_string(hours) + ":0" + to_string(min);
    }
    return s;
    
}

int main(){
    int t;
    cin >> t;
    cout << convert_to_digital_time(t);
}