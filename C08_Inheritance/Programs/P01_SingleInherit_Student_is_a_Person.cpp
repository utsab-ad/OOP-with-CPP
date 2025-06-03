/* WAP to implement "Student is a person", 
Where the person has attributes name, address,
 contact and student has additional features Rollno,
  regNo, faculty and college name, define member function 
  as per your requirement*/

#include<iostream>
    using namespace std;
    
    class Person;
    class Student;
    
    class Person {
        protected: 
            char name[25];
            char address[25];
            int contact;
    
        public: 
            void inputPerson();
    };
    
    class Student: public Person {
        protected: 
            int rollNo, regNo;
            double fee;
            char collegeName[30], faculty[25];
            
        public: 
            void inputStudent();
            void displayStudent();
    };
            
    int main() {
        Student S1;
        S1.inputPerson();
        S1.inputStudent();
        S1.displayStudent();
        
        return 0;
    }
        
void Person::inputPerson() {
    cout<<"\nEnter Person Details --> "<< endl;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Address: ";
    cin>>address
    cout<<"Enter Contact: ";
    cin>>contact;
}

void Student::inputStudent() {
    cout<<"\nEnter Student Details --> "<<endl;
    cout<<"Enter College Name: ";
    cin>>collegeName;
    cout<<"Enter Faculty: ";
    cin>>faculty;
    cout<<"Enter Roll No: ";
    cin>>rollNo;
    cout<<"Enter Reg No: ";
    cin>>regNo;
    cout<<"Enter Fee: ";
    cin>>fee;
}

void Student:: displayStudent() {
    cout<<"\nStudent Details are --> "<<endl;
    cout<<"\nName:"<<name<<endl;
    cout<<"\nAddress:"<<address<<endl;
    cout<<"\nContact:"<<contact<<endl;
    cout<<"\nRoll. No:"<<rollNo<<endl;
    cout<<"\nReg. No:"<<regNo<<endl;
    cout<<"\nCollege::"<<collegeName<<endl;
    cout<<"\nFee:"<<fee<<endl;
    cout<<"\nFaculty:"<<faculty<<endl;
 }