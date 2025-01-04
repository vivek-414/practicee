Q1
#include<iostream>
using namespace std;
int main(){
    int i,n,m;
    m=1;
    cout<<"Enter the number:  "<<endl;
    cin>>n;
    
    for (i=1;i<11;i++)
    {
        m=n*i;
        cout<<""<<n<<"*"<<i<<"="<<m<<endl;
    }
}

//Q2
// #include<iostream>
// using namespace std;
// int main()  
// {
//     int n,m,sum=0;
//     cout<<"Enter any number:  "<<endl;
//     cin>>n;
//     while(n>0){
//         m=n%10;
//         sum+=m;
//         n=n/10;
//     }
//     cout<<"Sum of the digits is : "<<sum<<endl;
//     return 0;
// }

//Q3
// #include<iostream>
// using namespace std;
// int main(){
//     int p=1,m,n,i;
//     cout<<"Enter the base : ";
//     cin>>m;
//     cout<<"Enter the power:  ";
//     cin>>n;
//     for (i=1;i<=n;i++){
//         p=p*m;
        
//     }
//     cout<<"Answer is :  "<<p;
// }

//Q4
// #include<iostream>
// using namespace std;
// int main() {

//   int n, reverse = 0, rem;

//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     rem = n % 10;
//     reverse = reverse * 10 + rem;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reverse;
// }

//Q5
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=5;i>=1;i--){
//         for (j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }


//Q6
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for (j=1;j<=i;j++){
//             cout<<j;
//         }
//       cout<<"\n";
//     }
// }

//Q7
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for (j=1;j<=i;j++){
//             cout<<i;
//         }
//       cout<<"\n";
//     }
// }

//Q8
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for (j=1;j<=i;j++){
//             cout<<j;
//         }
//       cout<<"\n";
//     }
// }
// Q9
// #include<iostream>
// using namespace std;
// int main(){
//     char i,j;
//     for (i='A';i<='E';i++){
//         for (j='A';j<=i;j++){
//             cout<<j;
//         }
//       cout<<"\n";
//     }
// }
