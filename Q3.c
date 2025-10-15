#include <stdio.h>
int main(){
    int n,j=0;
    printf("Number of ids? ");
    scanf("%d",&n);
     int ids[n];
     int arrangeIds[n];
    // ids[n];
    // arrangeIds[n];
    for(int i=0;i<n;i++){
        printf("ID %d: ",i+1);
        scanf("%d",&ids[i]);
    }
    for(int i=0;i<n;i++){
        if(ids[i]%2==0){
            arrangeIds[j]=ids[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(ids[i]%2!=0){
            arrangeIds[j]=ids[i];
            j++;
        }
    }
    printf("\nThe arrange ids are: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arrangeIds[i]);
    }
    return 0;
}