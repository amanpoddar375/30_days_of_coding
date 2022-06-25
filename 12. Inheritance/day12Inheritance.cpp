#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
	    vector<int> testScores;
        int sum=0, numbScore=0;
        double avg=0.0; 
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        
      Student(string firstName, string lastName, int identification, vector<int> scores): Person(firstName,lastName,identification)
       {
         this->testScores=scores;
         numbScore=testScores.size();
       }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        
       char calculate()
        {
           char grade;
           for(int i=0; i<numbScore; i++)
            {
               sum+=testScores[i];
            }
           avg=sum/numbScore;
            
            if(avg >=90 && avg <= 100){
                grade='O';
            }
            else if(avg >=80 && avg < 90){
                grade='E';
            }
            else if(avg >=70 && avg < 80){
                grade='A';
            }
            else if( avg >=55 && avg < 70){
                grade='P';
            }
            else if(avg >=40 && avg < 55){
                grade='D';}
            
            else{
                grade='T';
            }
            return grade;
        }
        
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
