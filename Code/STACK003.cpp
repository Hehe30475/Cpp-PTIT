#include <string>
#include <stack>
#include <iostream>
using namespace std;
string check(string a){
    stack<char> s;
    for(int i=0;i<a.length();i++){
        if(a[i]!='#') s.push(a[i]);
        else s.pop();
    }
    string ss="";
    while(!s.empty()){
        ss+=s.top();
        s.pop();
    }
    return ss;
}
int main(){
    int a; cin>>a;
    cin.ignore();
    while(a--){
        string a,b; cin>>a>>b;
        if(check(a)==check(b)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
        }
}