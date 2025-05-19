#include<iostream>

    using namespace std;
    
    class Numbers {
        int num1, num2;
        int result;
        
        public: 
            void input();
            void add();
            void display();        
    };
    
    int main() {
        Numbers N[10];
        int n, i;
        
        cout<<"Enter no of Objects:";
        cin>>n;
        
        for(i=0;i<n;i++) {
            cout<<"For Objet No.:"<<i+1<<" -->";
            N[i].input();
        }
        
        for(i=0;i<n;i++) {
            N[i].add();
            N[i].display();
        }
        
        return 0;
    }
    
    void Numbers:: input() {
        cout<<"Enter First Number:";
        cin>>num1;
        cout<<"Enter Second Number:";
        cin>>num2;
    }
    
    void Numbers:: add() {
        result = num1+num2;
    }
    
    void Numbers:: display() {
        cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    }