#include<stdio.h>

int main(){
    
    int Buying_Price,Selling_Price;
    printf("Enter Buying Price:-");
    scanf("%d",&Buying_Price);
    printf("Enter Selling Price:-");
    scanf("%d",&Selling_Price);
    if(Buying_Price>Selling_Price){
        printf("You are in loss");
    }
    else if(Buying_Price == Selling_Price){
        printf("There is no loss no profit");
    }
    else{
        printf("You are in profit");
    }


    return 0;
}