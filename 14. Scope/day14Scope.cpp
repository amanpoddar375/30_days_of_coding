#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    
    Difference(vector<int> a )
{
elements = a;
}
void computeDifference(){
  int i, maximum = 0, minimum = 100 ; 
  for (i = 0; i < elements.size(); ++i) 
    maximum = elements[i] > maximum ? elements[i] : maximum;
  for (i = 0; i < elements.size(); ++i)
    minimum = elements[i] < minimum ? elements[i] : minimum;
  maximumDifference = maximum - minimum;
}

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
