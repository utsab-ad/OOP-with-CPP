#include<iostream>
    using namespace std;

    void swapp(int &x, int &y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
    int main() {
        int num1, num2;
            cout<<"Enter Two Numbers: ";
            cin>>num1>>num2;

            cout<<"\n Before Swap !! "<<endl;
            cout<<" The value of num1: "<<num1<<endl;
            cout<<" The value of num2: "<<num2<<endl;

        swapp(num1, num2);

            cout<<"\n After Swap !! "<<endl;
            cout<<" The value of num1: "<<num1<<endl;
            cout<<" The value of num2: "<<num2<<endl;

        return 0;
    }
