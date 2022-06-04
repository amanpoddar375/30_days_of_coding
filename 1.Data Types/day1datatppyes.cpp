```ruby
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i_2;
    double d_2;
    string s_2, result ="";
    
    // Read and save an integer, double, and String to your variables.
    cin>>i_2;
    cin>>d_2;
    cin.ignore(); 
    getline(cin,s_2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<i + i_2 <<endl;
    

    // Print the sum of the double variables on a new line.
    cout<< fixed <<setprecision(1)<<d + d_2 <<endl;
    // Concatenate and print the String variables on a new line

    s = s + s_2;
    cout << s;
    // The 's' variable above should be printed first.

    return 0;
    ```
