#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n;
    string s;
    cin>>n;
    
    while(n--){
        cin>>s;
        for(i=0; i< s.length();i++){
            if(i%2==0){
                cout<< s[i];
            }
        }
        cout<<" ";
        for(i=0; i< s.length();i++){
            if(i%2!=0){
                cout<< s[i];
            }
        }
       cout<< "\n";
    }
    return 0;
}
