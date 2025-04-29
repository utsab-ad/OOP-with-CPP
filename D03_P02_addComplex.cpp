//defining class Complex and add complex no.

#include<iostream>
    using namespace std;
    
    class Complex  {
        private: 
            int real;
            int img;
            
        public: 
            void input();
            void display();
            void addComplex(Complex C1, Complex C2);
    };
    
    int main()
        {
            Complex first, second, result;
            
            cout<<"\n For First";
            first.input();
            
            cout<<"\n For Second";
            second.input();
            

            cout<<"\n First Complex: ";
            first.display();
            
            cout<<"\n Second Complex: ";
            second.display();

            result.addComplex(first, second);
            cout<<"\n After Addition= --> ";
            result.display();
            return 0;
        }
        
    void Complex:: input()
        {
            cout<<"\n Enter Real: ";
            cin>>real; // cin>>this->real
            
            cout<<"\n Enter Imaginary: ";
            cin>>img; // cin>>thsi->img
            
        }
        
    void Complex:: display()
        {
            cout<<"\n The Datas Are:"<<endl;
            cout<<"Real : "<<real<<endl; // cout<<thsi->real
            cout<<"Imaginary : "<<img<<endl;
            
            
        }
    void Complex:: addComplex(Complex C1, Complex C2)
        {
            real = C1.real + C2.real;
            img = C1.img + C2. img;
        }