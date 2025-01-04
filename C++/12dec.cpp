//exception handling 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//      cout<<"Enter numerator and denominator for division: \n";
//      cin>>a>>b;

//      try{
//         if(b==0)
//         {
//             throw b;
//         }
//         else{
//             c=a/b;
//             cout<<"Division= "<<c;
//         }
//      }
//      catch(int ex)
//      {
//         cout<<"Error occured : cant divide by zero \n";
//      }
// }

// #include<iostream>
// using namespace std;
// void divide(int x,int y,int z){
//     cout<<"We are outside the function";
//     if ((x-y)!=0)
//     {
//         int r=z/(x-y);
//         cout<<"result = "<<r;
//     }
//     else{
//         throw (x-y);
//     }}
// int main()
// {
//         try{
//             cout<<"\n We are inside the try block";
//             divide(10,20,30);
//             divide(10,10,20);
//         }
//         catch(int i){
//             cout<<"\n Caught the exception";
//         }
     
        
// }

// this program will show error bcoz proper catch block is not created for char data type
// #include<iostream>
// using namespace std;
// int main()
// {
//     try{
//         throw 'a';
//     }
//     catch
// }




// #include<iostream>
// #include<stdexcept>
// using namespace std;
// int main(){
//     try{
//         int numerator =10;
//         int denominator=0;
//         int res;
//         if (denominator==0){
//             throw runtime_error("Division by zero not allowed!");
//         }
//         res=numerator/denominator;
//         cout<<"Result after division: "<<res<<endl;
//     }
//     catch(const exception& e){
//         cout<<"Exception "<<e.what()<<endl;
//     }
//     return 0;
// }



// 


// #include <iostream>
// #include <stdexcept>
// using namespace std;

// unsigned long long factorial(int n) {
//     if (n == 0) {
//         throw runtime_error("Error: Factorial of 0 is not defined.");
//     } else if (n == 1) {
//         throw runtime_error("Error: Factorial of 1 is not allowed.");
//     }

//     unsigned long long result = 1;
//     for (int i = 2; i <= n; ++i) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int n;
//     cout << "Enter a positive integer greater than 1: ";
//     cin >> n;

//     try {
//         if (n < 0) {
//             throw invalid_argument("Error: Negative numbers are not allowed.");
//         }
//         unsigned long long result = factorial(n);
//         cout << "Factorial of " << n << " = " << result << endl;
//     } catch (const invalid_argument& e) {
//         cout << e.what() << endl;
//     } catch (const runtime_error& e) {
//         cout << e.what() << endl;
//     } catch (...) {
//         cout << "An unknown error occurred." << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// void test(int x)
// {
//     try{
//         if(x==0) throw x;  //int
//         if(x==-1) throw 'x';  //char
//         if(x==1) throw 1.0;  //double
//     }
//     catch(...)  //catch all
//     {
//         cout<<"caught an exception \n";
//     }
// }
// int main(){
//     cout<<"testing gneric catch\n";
//     test(-1);
//     test(0);
//     test(1);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template<class T1>
// class Test
// {
//     T1 a;
//     public :
//     Test(T1 x)
//     {
//         a=x;
//     }
//     void show()
//     {
//         cout<<a<<"\n";
//     }
// };
// int main(){
//     Test<float>test1(1.23F);
//     Test<int>test2(100);

//     test1.show();
//     test2.show();
//     return 0;
// }  


// #include <iostream>

// // Generic function to multiply two numbers
// template <typename T>
// T multiply(T a, T b) {
//     return a * b;
// }

// int main() {
//     char choice;
//     std::cout << "Enter the type of numbers you want to multiply (i for int, f for float): ";
//     std::cin >> choice;

//     if (choice == 'i') {
//         int num1, num2;
//         std::cout << "Enter two integers: ";
//         std::cin >> num1 >> num2;
//         std::cout << "Result: " << multiply(num1, num2) << std::endl;
//     } 
//     else if (choice == 'f') {
//         float num1, num2;
//         std::cout << "Enter two floats: ";
//         std::cin >> num1 >> num2;
//         std::cout << "Result: " << multiply(num1, num2) << std::endl;
//     } 
//     else {
//         std::cout << "Invalid choice!" << std::endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// template<class T>
// T add(T &a,T &b){
//     T result =a+b;
//     return result;
// }
// int main()
// {
//     int i=1;
//     int j=3;
//     float m=2.3;
//     float n=1.2;
//     cout<<"Addition of i and j is : "<<add(i,j);
//     cout<<"Addition of m and n is : "<<add(m,n);
//     return 0;
// }


#include <iostream>
#include<string>
using namespace std;
template <class T1,class t2>
void display(T1 x,t2 y)
{
    cout<<"value of x="<<x<<endl;
    cout<<"value of y="<<y<<endl;
}
int main()
{
    display(100,"hello");
    display(200,2.3)
    return 0;
}