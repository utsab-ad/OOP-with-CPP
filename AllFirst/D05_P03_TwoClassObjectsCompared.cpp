#include<iostream>
    using namespace std;
    
    class Class1;
    class Class2;
    int max(Class1 &obj1, Class2 &obj2);
    
    class Class1 {
        int x;
        
        public: 
        void setValue();
        friend int max(Class1 &obj1, Class2 &obj2);
    };
    
    class Class2 {
        int y;
        
        public: 
        void setValue();
        friend int max(Class1 &obj1, Class2 &obj2);
    };
    
    void Class1:: setValue()
        {
            cout<<"\nEnter a Number for Class One: ";
            cin>>x;
        }
    
      void Class2:: setValue()
        {
            cout<<"\nEnter a Number for Class Two: ";
            cin>>y;
        }
        
    int main()
        {
          Class1 obj1;
          Class2 obj2;
          
          obj1.setValue(); 
          obj2.setValue();
          
          int maximum = max(obj1, obj2);
          
          cout<<"\n.......Comparing......"<<endl;
          
          cout<<"\nThe Maximum Number is : "<<maximum<<endl;
          
          return 0;
        }
        
    int max(Class1 &obj1, Class2 &obj2)
        {
           return (obj1.x>obj2.y ? obj1.x : obj2.y);
        }