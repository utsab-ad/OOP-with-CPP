#include<iostream>
    using namespace std;
    
    class Administration;
    class Internal;
    class External;
     double addMarks(Internal M1, External M2);
    
    class Administration {
        public:
            double addMarks(Internal M1, External M2);
    };
    
    class Internal {
        float x;
        public: 
            void input();
            friend double Administration:: addMarks(Internal M1, External M2);
    };
    
     class External {
        float y;
        public: 
            void input();
            friend double Administration:: addMarks(Internal M1, External M2);
    };
    
    int main()
        {
            Administration A[3];
            Internal I[3];
            External E[3];

            double R[3];
            
            cout<<"Please Enter the Marks of Subjects: "<<endl<<"1: C++"<<endl<<"2: Algebra"<<endl<<"3: Digital Logic"<<endl;
            
            for(int i=0;i<3;i++)
                {
                    cout<<"\n For Subject No.: "<<i+1<<endl;
                    I[i].input();
                    E[i].input();
                    R[i]= A[i].addMarks(I[i], E[i]);
                }

            for(int i=0;i<3;i++)
                {
                    cout<<"\n Total marks of Subject No. "<<i+1<<" is : "<<R[i]<<endl;
                }

            return 0;
        }
        
    void Internal:: input()
        {
            do {
                cout<<"Enter Internal marks: ";
                cin>>x;
            } while(x>=50);
        }

    void External:: input()
        {
            do {
                cout<<"Enter External marks: ";
                cin>>y;
            } while(y>=50);
        }
    
    double Administration:: addMarks(Internal M1, External M2)
        {
            return (M1.x+M2.y);
        }
    
    