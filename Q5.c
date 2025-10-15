#include <stdio.h>
#include <stdbool.h>

int main(){
    int budget,prices[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("Customer: I want to buy two items whose total price is exactly equal to my budget.\n");
    printf("ShopKeeper: What is yor budget? ");
    scanf("%d",&budget);
    printf("The pair of prices that sum up to your budget are: \n");
    for(int i=0;i<20;i++){
        for(int j=0;j<=i;j++){
            if((prices[i]+prices[j])==budget){
                printf("%d , %d\n",prices[i],prices[j]);
            }
        }
    }
    return 0;
}