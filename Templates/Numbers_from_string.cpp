#include<bits/stdc++.h>
using namespace std;
void getNumbersFromString(string str) {
    vector<int> vec;
    stringstream ss;
    ss<<str;
    string temp;
    int num ;
    while(!ss.eof()) {
        ss>>temp;
        if(stringstream(temp)>>num) {
            vec.push_back(num);
        }
    }
    for(int x: vec ) {
         cout<< x<< " ";
    }
}
int main() {
string str = "2 foxes and 3 dragon are divided into 69 ppls and have fun with 23 gobi";
getNumbersFromString(str);
}