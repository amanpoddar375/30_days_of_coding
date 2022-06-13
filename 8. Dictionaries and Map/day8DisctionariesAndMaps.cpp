#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string  name;
    int phoneNumber;
    int n,i;
    cin>>n;
    map<string, int> phoneBook;
    for(i=0;i<n;i++){
        cin>>name;
        cin>>phoneNumber;
        phoneBook[name] = phoneNumber; // constructing a map
    }
    while(cin>>name){
        if(phoneBook.find(name) != phoneBook.end())//find the elements and follows the last element in the map
        {
            cout<<name << "="<< phoneBook.find(name)->second<<endl;} // acessing the values
        else{
            cout<<"Not found"<<endl;
        }
    }
    
 
}
    
