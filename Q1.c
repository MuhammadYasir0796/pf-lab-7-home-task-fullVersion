#include <stdio.h>
int frequency(int arr[],int target,int size);
int main(){
    int freqOld,freqNew,j=0;
    int rollN[10]={1,1,2,3,4,4,5,6,5,7};
    int newRollN[10];
    for(int i=0;i<10;i++){
        freqOld=frequency(rollN,rollN[i],10);
        freqNew=frequency(newRollN,rollN[i],10);
        if(freqNew==1){
            continue;
        }else{
            newRollN[j]=rollN[i];
            j++;
        }
    }
    printf("The mew fresh roll numbers list is: \n");
    for(int i=0;i<j;i++){
        printf("%d \n",newRollN[i]);
    }
    return 0;
}
int frequency(int arr[],int target,int size){
    int f=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            f++;
        }
    }
    return f;
}