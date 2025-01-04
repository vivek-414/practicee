#include<iostream>
using namespace std;
// int main()
// {
//     void disp();  //function declaration
//     disp();       //function call
// }
// // function declaration
// void disp()
// {
//     cout<<"Welcome to ITM\n ";
//     cout<<"Programming is nothing but logic implementation";
// }


// int main(){
   
//     void sum();
//     sum();
// }
// void sum()
// {
//     int a,b,c;
//     cout<<"Enter any 2 numbers:  "<<endl;
//     cin>>a>>b;
//     c=a+b;
//     cout<<"Sum="<<c<<endl;
// }
    
// function with arguments and 
// int main(){
   
//     void sum(int x,int y);
//     int a,b;

//     cout<<"Enter any 2 numbers";
//     cin>>a>>b;
//     sum(a,b);
// }
// void sum(int x,int y)
// {
//    int z;
//    z=x+y;
//    cout<<"Sum = "<<z;
// }
   

// int main(){
//     int sum();
//     int c=sum();
//     cout<<"Sum="<<c;
// }
// int sum()
// {
//     int a,b,c;
//     cout<<"Enter any 2 nnumbers";
//     cin>>a>>b;
//     c=a+b;
//     return c;
// }

// int main(){
//     void SI (float p,float r,int n=1);
//     SI(10000,8.5,2);
//     SI(15000,9);
// }
// void SI (float p, float r,int n)
// {
//     cout<<"\n Simple Interest="<<(p*n*r/100);
// }


// int main(){
//     void SI (float p,float r,int n=1);
//     SI(10000,8.5,2);
//     SI(15000,9);
// }
// void SI (float p, float r,int n)
// {
//     n=n+1;
//     cout<<"\n Simple Interest="<<(p*n*r/100);
// }

// int main(){
//     int n=10;
//     int *p;

//     p=&n;

//     cout<<"\n Address of n :"<<&n;
//     cout<<"\n Address of n :"<<n;
//     cout<<"\n Address of n :"<<n;
//     cout<<"\n Address of n :"<<*p;

// }

// int main(){
//     int a,b;
//     void swap(int x,int y);

//     cout<<"Enter any 2 numbers";
//     cin>>a>>b;

//     cout<<"\nBefore swap : "<<a<<"\t"<<b;
//     swap(a,b);
//     cout<<"\nAfter Swap:"<<a<<"\t"<<b;

// }
// void swap (int x,int y)
// {
//     int t;
//     t=x;
//     x=y;
//     y=t;
//     cout<<"\nIn Swap : "<<x<<"\t"<<y;

//  #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     void swap(int *x,int *y);

//     cout<<"Enter any 2 numbers";
//     cin>>a>>b;

//     cout<<"\nBefore Swap :"<<a<<"\t"<<b;
//     swap(&a,&b);
//     cout<<"\nAfter Swap :"<<a<<"\t"<<b;
// }

// void swap(int *x , int *y)
// {
//     int t;
//     t=*x;                                     //int data type takes 4 bytes for storage
//     *x=*y;
//     *y=t;
//     cout<<"\nIn Swap :"<<*x<<"\t"<<*y;
// }

// int main(){
//     int a[]={10,20,30,40,50};
//     int *p;
//     p=&a[0];
    
//     for (int i=0;i<5;i++)
//     {
//         cout<<"\n Address :"<<p<<"Value: "<<*p;
//         p++;
//     }



//dynamic memory allocation
// int main(){
//     int*p=NULL;
//     p=new int;
//     if(!p)
//     cout<<"allocation of memory failed \n";
//     else{
//         *p=29;
//         cout<<"Value of p: "<<*p<<endl;
//     }
//     delete p;

//     cout<<"Value of p: "<<*p<<endl;
//     return 0;
// }

// int main()
// {
//     int n,f=1;
//     int fact(int x);

//     cout<<"Enter the number: "<<endl;
//     cin>>n;

//     f=fact(n);

//     cout<<"Factorial of"<<n<<"="<<f;
// }
// int fact (int x)
// {
//     int f=1;
//     if (x==1)
//     {
//         return 1;
//     }
//     else{
//         return x * fact(x-1); 
//     }
// }


// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;  // Base case: F(0) = 0
//     } else if (n == 1) {
//         return 1;  // Base case: F(1) = 1
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: F(n) = F(n-1) + F(n-2)
//     }
// }

// int main() {
//     // Print the first 10 Fibonacci numbers
//     cout << "The first 10 Fibonacci numbers are:" << endl;
//     for (int i = 0; i < 10; i++) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }





// Recursive function to reverse the number
int reverseNumber(int n, int reversedNum = 0) {
    // Base case: when n becomes 0, return the reversed number
    if (n == 0) {
        return reversedNum;
    } else {
        // Extract the last digit and add it to the reversed number
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        // Recur for the rest of the number
        return reverseNumber(n / 10, reversedNum);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversedNum = reverseNumber(num);
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}