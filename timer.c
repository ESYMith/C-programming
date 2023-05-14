#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){

    int sec;
   enter: printf("Enter Sec value:-");
    scanf("%d",&sec);
    system("color 4E");
    for(int i = 0; i<sec ; i++){
        system("cls");
        printf("\n\n\n\t\t\t%d",i+1);
        Sleep(1000);     
        
    }

    printf("\nTimer Over\n");
    system("pause");
    system("cls");

    return 0;
}