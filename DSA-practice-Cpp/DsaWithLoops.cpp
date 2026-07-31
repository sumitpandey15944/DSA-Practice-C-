// sum of numbers 1 to n using for loop

// #include<iostream>    
// using namespace std;

// int main(){
//     int sum=0; //-------->for storing sum, sum start from 0
//     int n; 
//     cout<<"enter the value of n";
//     cin>>n;

//     for(int i=1; i<=n; i++){//--------> we ad always i in sum according to condition
//         sum=sum+i;
//     }
//     cout<<sum;

    
// }



//---------> sum of numbers 1 to n using while loop

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int sum=0;
//     int i=1;

//     cout<<"enter the value of n";
//     cin>>n;

//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<sum;
// }



// ------> Sum of the odd no 1 to n using for loop

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     int oddSum=0;

//     for(int i=1; i<=n; i++){
//         if(i%2!=0){
//             oddSum+=i;
//         }
//     }
//     cout<<"sum of odd no: "<<oddSum;
//     return 0;
// }


//  sum of odd number from 1 to n  using while loop  


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the vakue of n";
//     cin>>n;
//     int oddSum=0;
//     int i=1;
//     while( i<=n){
//         if(i%2 != 0){
//             oddSum=oddSum+i;
          
//         }i++;
//     }
//     cout<<oddSum;
// }



//-------------> check if a number is prime or not using for loop

// 



/// sum of all no from 1 to n which is divisible by three

// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cout<<"enter the n:";
//     cin>>n;
//     int sum=0;

//     for(int i=3; i<=n; i++){
//         if(i%3==0){
//             sum+=i;
//         }
       
//     }
//     cout<<sum;

// }


//-----> same to the above question by using while loop


// #include<iostream>
// using namespace std;


// int main(){

//     int n;
//     cout<<"enter the value of n";
//     cin>>n;

//     int sum=0;
//     int i=1;
//     while(i<=n){
//         if(i%3==0){
//             sum+=i;
//         }
//         i++;
//     }
//     cout<<sum;

// }




//---------------->pattern series question using for loop---

// 1.--------> print a square of number with takin input from the users.



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<j;
//         }cout<<endl;
//     }
// }


//---->  print * with taking n iinput from the users 


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "entter the value of n:";
//     cin>>n;

//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"* ";

//         }cout<<endl;
//     }
// }


//---------->  print charachter in form of square using for loop


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         char ch='A';
//         for(int j=0; j<n; j++){
//             cout<<ch;
//             ch=ch+1;
//         }cout<<endl;
//     }
// }


// //----------> to print continious no like 1 2 3 4 5 6 7 8 9 10  by using for loops


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     int num=1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }



//--------> printing character continuoesly using for loop


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     char ch='A';
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<ch;
//            ch+=1;
//         }
//         cout<<endl;
        
//     }cout<<int(char(ch));//------> for checking ascii value
// }


//   ---------->  printing triangle "*" pattern using for loop


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout<<"* ";
//         }cout<<endl;
//     }
// }



// ---> printin triangle shaped number using for loop

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;

//         }cout<<endl;
//     }
// }


// --->  printing number in triangle formate usinng for loop


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
    
//     for( int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<j+1;
//         }cout<<endl;
//     }
// }

// -----------> print a reveerse triangle number using for loop


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=1+i; j>0; j--){
//             cout<<j;
//         }cout<<endl;
//     }
// }


// ------> floyd's triangle pattern printing no using for loop


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;

//     int no=1;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<no<<" ";
//             no++;
//         }
       
//         cout<<endl;
//     }
// }



//------------> floyd's triangle with character 


// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<ch<<" ";
//             ch++;
//         }cout<<endl;
//     }
// }


/* -----------> Inverted triangle pattern[11111
                                           2222
                                            333
                                             44
                                              5]*/


                                              
                                              
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<(i+1);
//         }cout<<endl;
//     }
// }


// --------------> inverse triangle pattern of chracter 


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<"_";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<ch;
            
//         }
//         ch+=1;
//         cout<<endl;
//     }
// }



// -----------> pyramid pattern of given n no

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";

        }
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        for (int j=i; j>0; j--){
            cout<<j;

        }cout<<endl;
    }
}
// too many concept of loop 


