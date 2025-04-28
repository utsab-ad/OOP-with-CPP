//Example program to get started with Class in C++

#include<iostream>
    using namespace std;
    
    class Student {
        public: 
            char name[20];
            int id;
            float marks;
            void input();
            void display();
    };
    
    
    int main()
        {
        Student S1, S2;
        
            S1.input();
            S2.input();
            
            S1.display();
            S2.display();
            
            return 0;
        }
        
    void Student:: input()
        {
            cout<<"\n Enter Name: ";
            cin>>name;
            cout<<"ID: ";
            cin>>id;
            cout<<"Marks: ";
            cin>>marks;
            
            
        }
        
    void Student:: display()
        {
            cout<<"\n The Details of "<<name<<" ==> "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Marks: "<<marks<<endl;
        }