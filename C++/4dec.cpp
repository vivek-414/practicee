// #include<iostream>
// using namespace std;

//5 rows 5 columns stars
//Nesdted loops
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for (j=1;j<=5;j++){
//             cout<<"*";
//         }   
                                      
// cout<<"\n"
//     }


// }

//increasing no of stars
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++){
//         for (j=1;j<=i;j++){
//             cout<<"*";
//         }   
                                      
// cout<<"\n";
//     }


// }
 


//decreasing number of stars

// int main(){
//     int i,j;
//     for (i=5;i>=1;i--){
//         for (j=1;j<=i;j++){
//             cout<<"*";
//         }   
                                      
// cout<<"\n";
//     }


// }

// int main(){
//   int marks[5];
//   int i,total=0;
//   cout<<"Enter the marks of 5 students: "<<endl;
//   for (i=0;i<5;i++){
//     cin>>marks[i];
//     total=total+marks[i];
//   }
//   for (i=0;i<5;i++){
//     cout<<"Marks are: "<<marks[i]<<endl;
//   }
//   cout<<"Total marks="<<total<<endl;
// }

// int main(){
//     int matrix[3][3];
//     int i,j;
//     cout<<"Enter the eements of a matrix :\n";
//     for (i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<"The Matrix is :\n";
//     for (i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         {
//             cout<<matrix[i][j]<<"\t";
//         }
//         cout<<"\n";


// int main(){
//     char str[20]="Hello";
//     cout<<str;
// }

// int main(){
//     string str="Hello";
//     cout<<str;
// }


// int main(){
//     char str[100];
//     cout<<"Enter a string : ";
//     cin>>str;
//     cout<<"You entered : "<<str<<endl;
//     cout<<"\n Enter another string: ";
//     cin>>str;
//     cout<<"You entered : "<<str<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string:  ";
//     getline(cin,str);

//     cout<<"You entered : "<<str<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     char sname[50];
//     cout<<"Enter your name";
//     gets(sname);

//     cout<<"Hi ";
//     puts(sname);
// }
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char sname[50];
//     cout<<"Enter your name : "<<endl;
//     cin>>sname;

//     cout<<"\n Length : "<<endl<<strlen(sname);
    
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char s1[50],s2[50];

//     cout<<"Enter string:  ";
//     cin>>s1;

//     strcpy(s2,s1);
//     cout<<"Copied string "<<s2;
// }



// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char s1[50],s2[50];

//     cout<<"Enter string:  ";
//     cin>>s1;

//     strncpy(s2,s1,3);
//     cout<<"Copied string "<<s2;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char s1[50],s2[50];
//     cout<<"Enter 2 string"<<endl;
//     cin>>s1>>s2;

//     strncat(s2,s1,3);

//     cout<<s1<<"\t"<<s2<<endl;
// }

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[50],s2[50];
    int d;
    cout<<"Enter 2 string";
    cin>>s1>>s2;

    d=strcasecmp(s2,s1);

    cout<<"Difference : "<<d;
}

