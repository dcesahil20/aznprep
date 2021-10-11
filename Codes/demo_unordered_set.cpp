#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


void setDemo(unordered_set<string> &items,string s){

    //NOTE: Agar iterator end par pohunch gya to matlab nahi mila kuch
    if(items.find(s) == items.end()){
        cout << "Not found" << endl;
    }
    else{
        cout << "Found " << endl;
    }
}


int main(){
    // check for item in menu
    unordered_set<string> items = {"dosa","idly","chai","pizza","patakha"};
    string s;
    cout << "Enter the item you want to search for: "<< endl;
    cin >> s;
    setDemo(items, s);
    return 0;
}