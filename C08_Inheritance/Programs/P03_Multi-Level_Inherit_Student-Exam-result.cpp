/*
structure of program: 

Student: 
            roll, setDetails, displayDetails
Examination: 
            OOP_marks, DS_marks, setMArks
Result: 
        total, calculate, displayResult

*/


#include<iostream>

    using namespace std;
    
    class Student {
        protected: 
            int roll;
        public: 
            void setDetails();
            void displayDetails();
    };
    
    class Exmamination: public Student {
        protected: 
            double OOP_marks, DS_marks;
        public: 
            void setMarks();
    };
    
    class Result: public Exmamination {
        protected: 
            double total;
        public: 
            void calcTotal();
            void displayResult();
    };
    
    int main() {
        Result R1;
        
        R1.setDetails();
        R1.setMarks();
        R1.calcTotal();
        R1.displayDetails();
        R1.displayResult();
        
        return 0;
    }
    
    void Student:: setDetails() {
        cout<<"Enter Roll. No:";
        cin>>roll;
    }
    void Student:: displayDetails() {
        cout<<"Roll No: "<<roll<<endl;
    }
    
    void Exmamination:: setMarks() {
        cout<<"\nEnter Marks -->"<<endl;
        cout<<"OOP marks: ";
        cin>>OOP_marks;
        cout<<"DS marks: ";
        cin>>DS_marks;
    }
    
    void Result:: calcTotal() {
        cout<<"\nCalculating Total ...."<<endl;
        total = OOP_marks + DS_marks;
    }
    
    void Result:: displayResult() {
        cout<<"The Total Marks is: "<<total<<endl;
        cout<<"OOP: "<<OOP_marks<<" and DS: "<<DS_marks<<endl;
    }
    
    