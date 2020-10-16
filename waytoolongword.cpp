#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
   
        string s;
        cin>>s;
        int l = s.length();
 if(l)
 {
 
        if(l>10){
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
        else {
            cout<<s<<endl;
        }
 }
 else cout<<"Please enter input";
 
    return 0;
 
}
