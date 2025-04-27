// Program to check maximum by function overloading

#include<iostream>
    using namespace std;
    
    int max(int a, int b)
        {
            return ((a>b)?a:b);
        }
     int max(int a, int b, int c)
        {
            return ((a>b && a>c) ? a : (b>a&&b>c ? b : c));
        }
     int max(int a, int b, int c, int d)
        {
            return ((a>b && a>c && a>d) ? a : (b>a && b>c && b>d ? b : (c>d ? c : d)));
        }
    
    int main()
        {
            int number1, number2, number3, number4;
            cout<<"Enter Four Numbers: "<<endl;
            cin>>number1>>number2>>number3>>number4;
            
            cout<<"The max among "<<number1<<" and "<<number2<<" is "<<max(number1, number2)<<endl;
            cout<<"The max among "<<number1<<", "<<number2<<" and "<<number3<<" is "<<max(number1, number2, number3)<<endl;
            cout<<"The max among "<<number1<<", "<<number2<<", "<<number3<<" and "<<number4<<" is "<<max(number1, number2, number3, number4)<<endl;
             return 0;
            
        }