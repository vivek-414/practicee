// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//       cout<<"a is "<<a<<"\n";
//     cout<<"b is "<<b<<"\n";
//     int s;
//     s=a+b;
   
// }
// int main(){
//  sum(15,30);
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int n,fact=1,i;
//   cout<<"Enter the number";
//   cin>>n;
//   for( i=1;i<=n;i++){
//   fact*=i;
//   }
//   cout<<"Factorial : "<<fact;
// }


// int main(){
//   int rollno[3]={12,13,14};
//   cout<<rollno[2]<<endl;
// }


// int main(){
//   int nums[6]={1,2,23,34,45,-67};
//   int index;
//   int smallest=INT_MAX;
//   for(int i=0;i<6;i++){
//     if(nums[i]<smallest){
//       smallest=nums[i];
//       index=i;
//     }
  
//   }
//     cout<<"Smallest number is at  : "<<index<<endl;
  
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//  string s;
//  ifstream in("vivi.txt");
//  getline(in,s);
//  cout<<s<<endl;
//   return 0;
// }

//#include<iostream>
//#include<fstream>
// using namespace std;
// int main(){
//   ofstream out("aaa.txt");
//   string name="This is viivi";
//   string s;
//   out<<name<<endl;
//   ifstream in("aaa.txt");
//   getline(in,s);
//  cout<<s;


// }


//Q1
// int main(){
//   int i,n,sum=0,prod=1;
//   cout<<"Enter the number :";
//   cin>>n;
//   for (i=1;i<=n;i++){
//     if (%2==0){
//       sum=i+sum;
//     }
//     else {
//       prod*=i;
//     }
//   }
//   cout<<"Sum is "<<sum;
//   cout<<"Product is "<<prod;

// }

//Q2
// class rectangle{
  

//   public:
//     int length,breadth;
//   rectangle(){
//     length =1;
//     breadth=1;
//   }
//   int area(){
//     return length * breadth;
//   }
// };
// int main(){
//   rectangle first;
//   first.length=3;
//   first.breadth=4;
//   cout<<"The area of the rectange is "<<first.area()<<endl;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     string name;
//     int age;

// public:
//     // Parameterized Constructor
//     Student(string n, int a) {
//         name = n;
//         age = a;
//     }

//     // Copy Constructor
//     Student(const Student &s) {
//         name = s.name;
//         age = s.age;
//     }

//     // Member function to display student details
//     void display() const {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     // Create a Student object using the parameterized constructor
//     Student student1("Alice", 20);
//     cout << "Details of Student 1: ";
//     student1.display();

//     // Create a copy of student1 using the copy constructor
//     Student student2 = student1;
//     cout << "Details of Student 2 (Copy of Student 1): ";
//     student2.display();

//     return 0;
// }




// int add(int a , int b){
//     return a+b;
// }
// int main(){
//     int x,y;
//     cout<<"Enter 2 numbers: ";
//     cin>>x>>y;
//     cout<<"The sum of the two numbers is "<<add(x,y);
//     }


// int max(int a,int b){
//     if (a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// };
//  double max(double a,double b){
//     if (a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
//  };
//  int main(){
//     int x,y;
//     double c,d;
//     cout<<"Enter two int numbers and 2 double: ";
//     cin>>x>>y>>c>>d;
//     cout<<"Larger "<<max(x,y);
//     cout<<"larg "<<max(c,d); 
//  }


// int fact(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n*fact(n-1);
// };
// int main(){
//     int x;
//     cout<<"Enter a number:"<<endl;
//     cin>>x;
//     cout<<"Factorial is :"<<fact(x)<<endl;
// }


// int main(){
//     int arr[5],max=INT_MIN,i;
//     cout<<"Enter 5 nos :";
//     for (i=0;i<5;i++){
//         cin>>arr[i];
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     } 
//     cout<<"Maximum number is :"<<max<<endl;
// }

// int main(){
//     int arr[10],i;
//     for (i=0;i<10;i++){
//         arr[i]=i+1;
//     }
//     for (i=0;i<10;i++) {
//         cout<<arr[i]<<endl;

//     }
// }

// int main(){
// int i;
//  int arr[] = {1, 2, 3, 4, 5};
//  int size = sizeof(arr) / sizeof(arr[0]);
//  cout<<"\n Og array :";
//  for (i=0;i<size;i++){
//     cout<<arr[i]<<"  ";
//  }
//  cout<<"\n After reverse:";
//  for (i=size-1;i>=0;i--){
//     cout<<arr[i]<<"  ";
//  }
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string str1, str2;

//     // Input for the first string
//     cout << "Enter the first string: ";


//     // Input for the second string
//     cout << "Enter the second string: ";


//     // Reverse the first string
//     string reversedStr1 = string(str1.rbegin(), str1.rend());
//     cout << "Reversed first string: " << reversedStr1 << endl;

//     // Concatenate the two strings
//     string concatenatedStr = str1 + str2;
//     cout << "Concatenated string: " << concatenatedStr << endl;

//     // Calculate the length of the first string
//     cout << "Length of the first string: " << str1.length() << endl;

//     // Calculate the length of the second string
//     cout << "Length of the second string: " << str2.length() << endl;

//     return 0;
// }


// int main(){
//     int arr[6], sum=0;
//     cout<<"Enter three numbers: ";
//     for (int i=0;i<6;i++){
//         cin>>arr[i];
//         sum=sum+arr[i];

//     }
//     cout<<"Sum is :"<<sum;
// }

// 




// #include <iostream>
// using namespace std;
// // Function to swap two numbers using pointers
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     // Find largest and smallest elements
//     int largest = arr[0], smallest = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) largest = arr[i];
//         if (arr[i] < smallest) smallest = arr[i];
//     }
//     cout << "Largest element: " << largest << endl;
//     cout << "Smallest element: " << smallest << endl;
// return 0; }




// #include <iostream>
// using namespace std;
// class Base {
//     public:
//         virtual void display() {
//             cout << "Base class display function" << endl;
// } };
// class Derived : public Base {
//     public:
//         void display() {
//             cout << "Derived class display function" << endl;
// } };
// int main(){
//     Base *baseptr;
//     Derived dobj;
//     baseptr=&dobj;
//     baseptr->display();

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int arr[20], positive = 0, negative = 0, odd = 0, even =
//     0, zeros = 0;
//     cout << "Enter 20 integers: ";
//     for (int i = 0; i < 20; i++) {
//         cin >> arr[i];
//         if (arr[i] < 0) positive++;
//         else if (arr[i] > 0) negative++;
//         if (arr[i] == 0) zeros++;
//         else if (arr[i] % 2 == 0) even++;
//         else odd++;
// }




    
//     cout<<"Odd :"<<odd;
//     cout<<"even :"<<even;
//     cout<<"zeros :"<<zeros;
//     cout<<"positive :"<<positive;
//     cout<<"negative :"<<negative;
// }
























// int main(){
//     int arr[5],max=INT_MIN;
//     cout<<"Enter 5 numbers : ";
//     for (int i=0;i<5;i++){
//         cin>>arr[i];
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Largest number in the array is :"<<max;
//

// boilerplate



// #include <iostream>
// using namespace std;
// int main() {
//     int arr[20], positive = 0, negative = 0, odd = 0, even =
// 0, zeros = 0;
//     cout << "Enter 20 integers: ";
//     for (int i = 0; i < 20; i++) {
//         cin >> arr[i];
//         if (arr[i] > 0) positive++;
//         else if (arr[i] < 0) negative++;
//         if (arr[i] == 0) zeros++;
//         else if (arr[i] % 2 == 0) even++;
//         else odd++;
// }
//     cout << "Positive: " << positive << "\nNegative: " << neg
// ative << "\nOdd: " << odd << "\nEven: " << even << "\nZeros:
// " << zeros << endl;
// return 0; }


#include <iostream>
using namespace std;

int main() {
    // Create an array of 20 integers
    int numbers[20] = {12, -7, 5, 0, -3, 8, -1, 14, 19, -6, 22, -15, 4, 10, -9, 3, 7, -2, 11, -8};

    // Initialize counters
    int positiveCount = 0;
    int negativeCount = 0;
    int oddCount = 0;
    int evenCount = 0;

    // Loop through the array to count the numbers
    for (int i = 0; i < 20; i++) {
        if (numbers[i] > 0) {
            positiveCount++; // Count positive numbers
        } else if (numbers[i] < 0) {
            negativeCount++; // Count negative numbers
        }

        if (numbers[i] % 2 == 0) {
            evenCount++; // Count even numbers
        } else {
            oddCount++; // Count odd numbers
        }
    }

    // Print the results
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;

    return 0;
}