/* Define class Rectangle with data members, length, breadth
and area, member functions to initialize length breadth and 
calculate area, define another class Box from Rectangle that has additional 
feature height and to calculate volume of the box */

#include<iostream>
    using namespace std;
    
    class Rectangle;
    class Box;
    
    class Rectangle {
        protected: 
            double length;
            double breadth, area;
    
        public: 
            void input();
            void calcArea();
    };
    
    class Box: public Rectangle {
        protected: 
            double height;
            double volume;
            
        public: 
            void inputHeight();
            void calcVolume();
    };
            
    int main() {
        Box B1;
        
        B1.input();
        B1.calcArea();
        B1.inputHeight();
        B1.calcVolume();
        
        return 0;
    }

void Rectangle:: input() {
    cout<<"\nEnter the details -->"<<endl;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Breadth: ";
    cin>>breadth;
}

void Rectangle:: calcArea() {
    cout<<"\nCalculating area ......"<<endl;
    area = length*breadth;
    cout<<"\nThe area of the Rectangle is : "<<area<<endl;
}

void Box:: inputHeight() {
    cout<<"\nEnter Height of the box: ";
    cin>>height;
}

void Box:: calcVolume() {
    cout<<"\nCalculating Volume ...."<<endl;
    volume = length * breadth * height;
    cout<<"\nVolume of the Box is : "<<volume<<endl;
}