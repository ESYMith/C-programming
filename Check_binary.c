#include<stdio.h>
#include<string.h>
int main(){
    char bin[20];

    printf("Enter a binary number:-\n");
    scanf("%s",bin);

    for(int i =0; i<strlen(bin); i++){
        if(bin[i]!='0' && bin[i]!='1'){      //Check whether bit is not 0 or 1
            printf("Entered Format is not binary");
            break;                           //If Number is not binary then exit
        }
    }
    return 0;
}