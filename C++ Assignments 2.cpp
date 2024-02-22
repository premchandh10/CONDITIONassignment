Assignments


C++ Assignments 2 


Q1. Find the output for this code. Let input:- 2 3 6 
#include <iostream> 
using namespace std; 
int main() 
{ 
int x; 
cout << "Enter first number\n"; 
cin >> x; // user will give 'x' a value. 
int y, m; 
cout << "Enter second number and value for taking modulus\n"; cin >> y >> m; // user will give 'y' a value. 
int Z = (x * y) % m; 
cout << "Output is: " << Z; 
} 


(A)  Input - 2,3,6
    Output -  0 


Q2. Find the output for this code. Let input:- 3 2 
#include <iostream> 
using namespace std; 
int main() 
{ 
int x; 
cout<<"Enter first number\n"; 
cin>>x; // user will give 'x' a value. 
int y; 
cout<<"Enter second number\n"; 
cin>>y; // user will give 'y' a value. 
cout<<(x!=y)<<" "<<(x>=y); 
}


(A) Input - 3 , 2
    Output - 1 , 1. 


Q3. Find the output for this code. Let input:- 2 3 
#include <iostream> 
using namespace std; 
int main() 
{ 
int x,y; 
cin>>x>>y; 
x+=y; 
x-=y; 
x%=y; 
cout<<x; 
} 


(A) Input - 2 , 3
    Output - 2


Q4. WAP for finding the volume of the cylinder by taking radius and height as input.                             

   (A)   
              #include <iostream>                                                                                                                                                                                                        
              using namespace std ;
                 int main(){
                int radius;
                     cout<<"Enter radius of the cylinder : ";
                     cin<<radius;

                float pi = 3.14 ;

                int height;
                     cout << "Enter height of the cylinder : ";
                    cin>>height;

                float volume = pi*radius*radius*height;

                 return 0;

            }


                
Q5. WAP to find the difference between ASCII of two characters ,take them as input . 

(A) 
        #include <iostream>
        using namespace std ;
        int main

        char a,b;
        cout<<"Enter a character : " ;
        cin>>a>>b;
        cout<<(a-b);

        return 0;









Q6. Find the output of the below code 
#include <iostream> 
using namespace std; 
int main() 
{ 
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ; 
cout<<i; 
} 

(A)
    Output - 49





Note:- Please try to invest time doing the assignments which are necessary to build a strongfoundation. Do not  directly Copy Paste using Google or ChatGPT. Please use your brain.
Java + DSA C++ & DSA