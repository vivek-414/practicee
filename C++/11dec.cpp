// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     double real; // To store the real part
//     double imag; // To store the imaginary part

// public:
//     // Constructor to initialize the complex number
//     Complex() : real(0), imag(0) {}

//     // Setter for the real part
//     void setReal(double r) {
//         real = r;
//     }

//     // Setter for the imaginary part
//     void setImag(double i) {
//         imag = i;
//     }

//     // Getter for the real part
//     double getReal() const {
//         return real;
//     }

//     // Getter for the imaginary part
//     double getImag() const {
//         return imag;
//     }

//     // Method to display the complex number
//     void display() const {
//         cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
//     }
// };

// int main() {
//     Complex c1;

//     // Set values for the complex number
//     c1.setReal(3.5);
//     c1.setImag(-2.4);

//     // Display the values using getter methods
//     cout << "Real part: " << c1.getReal() << endl;
//     cout << "Imaginary part: " << c1.getImag() << endl;

//     // Display the complex number
//     cout << "The complex number is: ";
//     c1.display();

//     return 0;
// }


//Operator Overloading

// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int r,i;
//     public:
//     void getdata()
//     {
//         cout<<"Enter the number";
//         cin>>r>>i;
//     }
//     void putdata()
//     {
//     cout<<r<<"+i"<<i<<endl;
// }
// Complex operator +(Complex obj)
// {
//     Complex ans;
//     ans.r=r+obj.r;
//     ans.i=i+obj.i;
//     return ans;
// }
// };
// int main()
// {
//     Complex C1,C2,C3;
//     C1.getdata();
//     C2.getdata();

//     cout<<"\n------------------\n";
//     C1.putdata();
//     C2.putdata();
//      cout<<"\n------------------\n";
//      C3=C1+C2;
//      C3.putdata();
//      return 0;
// }


// #include<iostream>
// using namespace std;
// class Number
// {
//     private :
//     int x,y;
//     public:
//     void getdata()
//     {
//         cout<<"Enter the data";
//         cin>>x>>y;
//     }
//     void putdata()
//     {
//         cout<<x<<"+i"<<y<<endl;

//     }
//     Number operator ++()
//     {
//         x++;
//         y++;
//     }
// };
// int main(){
//     Number O1;
//     O1.getdata();
//     cout<<"\nComplex Number W/O increment = ";
//     O1.putdata();

//     ++O1;

//     cout<<"\n Complex number W increment =";
//     O1.putdata();


// }




// #include<iostream>
// using namespace std;
// class birthyear
// {
//     private :
//     int x,y=2024;
//     public:
//     void getdata()
//     {
//         cout<<"Enter the year you were born and the current year ";
//         cin>>x>>endl;
//     }
//     void putdata()
//     {
//         cout<<x<<endl;
        

//     }
//    birthyear operator -()
//     {
//       (y-x);
//     }
// };
// int main(){
//     birthyear O1;
//     O1.getdata();
//     cout<<"\n Your birth year= ";
//     O1.putdata();

//     -O1;

//     cout<<"\n Age: ";
//     O1.putdata();


// }



//Function overriding
// #include<iostream>
// using namespace std;
// class number
// {
//     protected:
//     int n;
//     public:
//     void getdata(int x)
//     {
//         cout<<"Base Class\n";
//         n=x;
//     }
// };
// class sq:public number
// {
//     public:
//     void getdata(int y)
//     {
//         cout<<"Derived class \n";
//         number::getdata(y);
//     }
//     void display()
//     {
//         cout<<"Square= "<<n*n;
//     }
// };

// int main()
// {
//     sq no;
     
//     no.getdata(5);
//     no.display();
// }


//virtual function
// #include<iostream>
// using namespace std;

// class BaseClass{
//     public:
//     void method1(){
//         cout<<"\nBase Class Method1";
//     }
//     virtual void method2(){
//         cout<<"\nBase Class Method2";
//     }
// };
// class DerivedClass:public BaseClass{
//     public:
//     void method1(){

//     }
// }



// #include <iostream>
// #include <fstream>


// using namespace std;

// int main()
// {
//     ifstream file("xyz.txt");
//     ofstream copy("xyz1.txt");

//     if (!file)
//     {
//         cout << "Error opening file" << endl;
//     }

//     string line;
//     while (getline(file, line))
//     {
//         cout << line << endl;
//         copy << line << endl;

//     }
//     return 0;
//}



// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     string line;
//     fstream file;

//     file.open("abc.txt",ios::out);
//     file<<"Hello Btech students";
//     file.close();

//     file.open("abc.txt",ios::in);
//     while (getline(file,line))
//     {
//         cout<<line<<'\n';
//     }
//     file.close();
// }  


// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main(){
//     string line;
//     fstream file;

//     file.open("abc.txt",ios::out);
//     file<<" ! Be prepared for exam";
//     file.close();

//     file.open("abc.txt",ios::in);
//     while (getline(file,line))
//     {
//         cout<<line<<'\n';
//     }
//     file.close();
// }  


#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    int roll;
    string name;

public:
    void set()
    {
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        ofstream file;
        file.open("student.txt", ios::app);
        file << roll << " " << name << endl;
        file.close();
    }

    void get()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};
int main()
{
    Student s1;
    s1.set();
    s1.get();

    return 0;
}
