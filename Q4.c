#include <stdio.h>
#include <stdbool.h>

int main(){
    int n,f=0,sizeOfMaxID=0,sizeOFFreqnecyiesOfIDS=0;
    int alreadyExistInMaxxID=false;
    printf("Total products sold: ");
    scanf("%d",&n);
    int sales[n],freqnecyiesOfIDS[n],maxID[n];
    printf("Enter product IDS, which were sold (one by one.)\n");
    for(int i=0;i<n;i++){
        printf("%d. ID: ",i+1);
        scanf("%d",&sales[i]);
    }
    for(int i=0;i<n;i++){
        f=0;
        alreadyExistInMaxxID=false;
        for(int j=0;j<sizeOfMaxID;j++){
            if(sales[i]==maxID[j]){
                alreadyExistInMaxxID=true;
                break;
            }
        }
        if(alreadyExistInMaxxID){continue;}
        for(int j=0;j<n;j++){
            if(sales[j]==sales[i]){
                f++;
            }
        }
        if(sizeOFFreqnecyiesOfIDS!=0){
            if(f<freqnecyiesOfIDS[sizeOFFreqnecyiesOfIDS-1]){continue;}
        }
        freqnecyiesOfIDS[sizeOFFreqnecyiesOfIDS]=f;
        sizeOFFreqnecyiesOfIDS++;
        maxID[sizeOfMaxID]=sales[i];
        sizeOfMaxID++;
    }
    printf("\nMaximum sold product IDs are: \n");
    for(int i=0;i<sizeOfMaxID;i++){
        printf("%d ",maxID[i]);
    }
    return 0;
}