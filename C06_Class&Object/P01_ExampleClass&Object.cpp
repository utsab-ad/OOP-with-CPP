/*
Example Program to define class Student,
 taking inputs: name, roll, marks of two student and displaying the details
*/

#include<iostream>

    using namespace std;
    
    class Student {
        private: 
            char name[20];
            int roll_No;    // by default class members are private
            float marks;
        
        public:
            void input();
            void display();
    };
    
    int main() {
        Student S1, S2; 
        
        S1.input();
        S2.input();
        
        S1.display();
        S2.display();
        
        return 0;
    }
    
    void Student:: input() {
        cout<<"\nEnter details: "<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll No.: ";
        cin>>roll_No;
        cout<<"Marks: ";
        cin>>marks;
    }
    
    void Student:: display() {
        cout<<"\nDetails are: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Rol No.: "<<roll_No<<endl;
        cout<<"Marks: "<<marks<<endl;
    }