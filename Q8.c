#include <stdio.h>
#include <stdbool.h>

int main(){
    int idsN,k;
    printf("Number of IDs? ");
    scanf("%d",&idsN);
    int arr[idsN];
    for(int i=0;i<idsN;i++){
        printf("ID #%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Rotates by? ");
    scanf("%d",&k);
    int temp[k];

    for(int i=0;i<k;i++){
        temp[i]=arr[idsN-k+i];
    }
    for(int i=(idsN-1);i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    printf("Your employee ids after rotating by %d are: \n",k);
    for(int i=0;i<idsN;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}