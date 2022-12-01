#include<stdio.h>

int main(){
    printf("***Print Table using While loop***\n");    // Title 
    int a;                                            // Initialization of a local variable 
    printf("Enter a number-:");                      // Ask User to enter a number 
    scanf("%d",&a);                                 // Scan number in local variable

    int i;                                        // While loop Variable Initialization
    while(i<=10){                               // While statement 
        printf("%d x %d = %d\n",a,i,a*i);      // While Loop Execution
        i++;                                  //Increment of While Loop Variable
    }
    return 0;                               // Exit Statement
}