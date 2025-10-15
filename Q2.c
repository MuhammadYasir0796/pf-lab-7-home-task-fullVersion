#include <stdio.h>
int frequency(int arr[],int target,int size);
int main(){
    int max=0;
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter the marks number %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++){
        if(max<=marks[i]){
            max=marks[i];
        }
    }
    printf("\nThe maximun marks is %d\n",max);
    return 0;
}