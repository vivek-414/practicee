// #include<iostream>
// using namespace std;

// class student 
// {
//     private:
//     int roll;
//     string sname;

//     public:
//     void setdata()
//     {
//         cout<<"Enter the roll no & name";
//         cin>>roll>>sname;
//     }
//     void getdata()
//     {
//         cout<<"\nRoll No: "<<roll;
//         cout<<"\nName   : "<<sname;
//     }

// };

// int main()
// {
//     student s1,s2;
//     s1.setdata();
//     s2.setdata();

//     cout<<"\n Student Details: \n";
//     s1.getdata();
//     cout<<"\n ------------------------";
//     s2.getdata();
//     cout<<"\n -------------------------";
// }



#include<iostream>
using namespace std;

class student 
{
    private:
    int roll;
    string sname;

    public:
    void setdata()
    {
        cout<<"Enter the roll no & name";
        cin>>roll>>sname;
    }
    void getdata()
    {
        cout<<"\nRoll No: "<<roll;
        cout<<"\nName   : "<<sname;
    }

};

int main()
{
    student s[3];
    for (int i=0;i<3;i++ )
    {
        s[i].setdata();
    }
    cout<<"\nStudent Details :\n ";
    cout<<"\nRoll No \t Name \n  ";
    cout<<"\n------------------------------------\n";
    for (int i=0;i<3;i++)
    {
        s[i].getdata();
        cout<<"\n------------------------\n";
    }
    
}
    

