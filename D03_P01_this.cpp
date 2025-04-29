//this pointer is implicitly used in the classes 

#include<iostream>
    using namespace std;
    
    class Complex  {
        private: 
            int real;
            int img;
            
        public: 
            void input();
            void display();
    };
    
    int main()
        {
            Complex first, second;
            
            cout<<"For First";
            first.input();
            
            cout<<"For Second";
            second.input();
            
            cout<<"\n First Complex: ";
            first.display();
            
            cout<<"\n Second Complex: ";
            second.display();
            return 0;
        }
        
    void Complex:: input()
        {
            cout<<"Enter Real: ";
            cin>>real; // cin>>this->real
            
            cout<<"Enter Imaginary: ";
            cin>>img; // cin>>thsi->img
            
        }
        
    void Complex:: display()
        {
            cout<<"The Datas Are:"<<endl;
            cout<<"Real : "<<real<<endl; // cout<<thsi->real
            cout<<"Imaginary : "<<img<<endl;
            
            
        }