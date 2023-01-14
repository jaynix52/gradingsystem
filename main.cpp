#include <iostream> 
using namespace std; 
struct Student 
{      
  int student_id;          
  int mark;
 };

 int main() {    
  struct Student students[5];      
        cout << "Please enter students' ID and marks:\n\n"; 
    for (int i = 0; i < 5; i++)
    {      
        cout << "\tStudent " << i + 1 << " ID:  ";
        cin >> students[i].student_id; 
        cout << "\tStudent " << i + 1 << " mark: "; 
        cin >> students[i].mark; 
    }     
    
 int stu_id;    
    cout << "\nEnter the student's ID that you want to search: ";
    cin >> stu_id;   
    
 bool found = false;  
 
    for (int i = 0; i < 5; i++)    
    {        
    if (students[i].student_id == stu_id)    
    {               
  found = true;
     cout << "Target found\n\n"; 
     cout << "The mark of student " << stu_id << " is " << students[i].mark << ". The grade is ";
int marks = students[i].mark;
  if (marks >= 80) 
    cout << "A";
 else if (marks >= 60) 
     cout << "B";
  else if (marks >= 50)  
     cout << "C"; 
  else if (marks >= 40)  
    cout << "D";
else 
     cout << "F"; 
  break;  
}
} 
if (!found)
{  
  cout << "Target not found";
} 
}
