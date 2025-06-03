/*
Q1. Create a class called Studentwith two data member to represent
name and age of the student. Use member function to read and print
these data. From this class, derive a class called Boarder with data
member to represent room number. Derive another class called
DayScholar from the class Student with data member to represent
address and bus number of the student. In both derived classes, use
member function to read and print the respective data.
*/

#include<iostream>
    using namespace std;
   
    class Student {
        protected:
            char name[25];
            int age;
       
        public:
            void readDetails() {
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter age: ";
                cin>>age;
            }
           
            void printDetails() {
                cout<<"\nName: "<<name<<endl<<"Age:"<<age<<endl;
            }
    };
   
    class Boarder: public Student {
        protected:
            int roomNo;
        public:
            void readRoomNo() {
                cout<<"Enter Room No: ";
                cin>>roomNo;
            }
           
            void printRoomNo() {
                cout<<"Room No: "<<roomNo<<endl;
            }
    };
   
    class DayScholar: public Student {
        protected:
            char address[25];
            int busNo;
           
        public:
            void inputDayScholar() {
                cout<<"Enter Address: ";
                cin>>address;
                cout<<"Enter Bus No: ";
                cin>>busNo;
            }
           
            void printDayScholar() {
                cout<<"Address: "<<address<<endl<<"Bus No: "<<busNo<<endl;
            }
    };
   
    int main() {
        Boarder B1;
        B1.readDetails();
        B1.readRoomNo();
        DayScholar D1;
        D1.inputDayScholar();
        B1.printDetails();
        B1.printRoomNo();
        D1.printDayScholar();
       
        return 0;
    }


The O/P is :: 
Enter Name: Utsab
Enter age: 31
Enter Room No: 3001
Enter Address: panini
Enter Bus No: 234

Name: Utsab
Age:31
Room No: 3001
Address: panini
Bus No: 234
    