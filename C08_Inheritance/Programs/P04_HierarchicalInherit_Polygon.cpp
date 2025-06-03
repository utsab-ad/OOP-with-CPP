#include<iostream>
    using namespace std;
    
    clss Polygen {
        protected: 
            int x, y;
            
        public: 
            void readData() {
                cout<<"Enter X: ";
                cin>>x;
                cout<<"Enter Y: ";
                cin>>y;
            }
    };
    
    class Rectangle: public Polygon {
        protected: 
            int area();
            
        public: 
            void area() {
                area = x*y;
                cout<<"Area of Rectangle is : "<<area<<endl;
            }
    };
    
    class Triangle: public Polygon {
        protected: 
            double area;
            
        public: 
            void area() {
                area = x * y * 0.5;
                cout<<"Area of Triangle is : "<<area<<endl;
            }
    };