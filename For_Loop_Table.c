#include<stdio.h>

int main(){
    printf("***Print Table using for loop***\n");   // Title 
    int a;                                         // Initialization of a local variable 
    printf("Enter a number-:");                   // Ask User to enter a number 
    scanf("%d",&a);                              // Scan number in local variable

    for(int i=1; i<=10; i++){                  //For loop declaration 
        printf("%d x %d = %d\n",a,i,a*i);     //For loop execution
    }
    return 0;                               // Exit Statement
}