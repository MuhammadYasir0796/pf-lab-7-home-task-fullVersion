#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    srand(time(0));
    int max=100,min=10,random,randomN[10];
    bool found=false;
    for(int i=0;i<10;i++){
        random=(rand()%((max-min+1)))+min;
        randomN[i]=random;
    }
    printf("FOr teacher, one number is %d",randomN[2]);
    int searchN;
    while(1){
        printf("\nSearch Number: ");
        scanf("%d",&searchN);
        for(int i=0;i<10;i++){
            if(randomN[i]==searchN){
                printf("The number %d was found in random numbers in index %d.",searchN,i);
                found=true;
                break;
            }
        }
        if(found){
            break;
        }else{
            printf("We could not found the number %d in the random numbers.\nTry again\n",searchN);
        }
    }

    return 0;
}