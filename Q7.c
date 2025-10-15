#include <stdio.h>
#include <stdbool.h>

int main(){
    int sA,sB;
    printf("Total Students in section A? ");
    scanf("%d",&sA);
    printf("Total Students in section B? ");
    scanf("%d",&sB);
    int sARNs[sA],sBRNs[sB],cS=sA+sB,CombineS[cS];
    printf("ROll Number of section A students.\n");
    for(int i=0;i<sA;i++){
        printf("ROll Number of section A student #%d: ",i+1);
        scanf("%d",&sARNs[i]);
    }
    printf("ROll Number of section B students.\n");
    for(int i=0;i<sB;i++){
        printf("ROll Number of section B student #%d: ",i+1);
        scanf("%d",&sBRNs[i]);
    }
    for(int i=0;i<sA;i++){
        CombineS[i]=sARNs[i];
    }
    int j=0;
    for(int i=sA;i<cS;i++){
        CombineS[i]=sBRNs[j];
        j++;
    }

    printf("The combined class students roll numbers are:  \n");
    for(int i=0;i<cS;i++){
        printf("%d ",CombineS[i]);
    }
    return 0;
}