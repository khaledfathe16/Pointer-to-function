#include<Stdio.h>

void func(int x,int y); //Function prototype
void main(void){

void (*p)(int , int); //Pointer to function decleration

 p =&func; // pointer to function initialization wtih address

 (*p)(5,5);//  function initialization with pointer + calling

}
void func(int x,int y){ //function implementation

printf("Sum = %d",x+y); // Sum process

}
// Output = 10
