#include <stdio.h>
#include <stdbool.h>

int main(){
    int sold,defectiveItem=3;
    printf("Total products sold: ");
    scanf("%d",&sold);
    int soldItems[sold],newSoldItems[sold],j=0;
    
    for(int i=0;i<sold;i++){
        printf("Item %d: ",i+1);
        scanf("%d",&soldItems[i]);
    }
    for(int i=0;i<sold;i++){
        if(soldItems[i]!=defectiveItem){
            newSoldItems[j]=soldItems[i];
            j++;
        }
    }
    printf("Update list of items: \n");
    for(int i=0;i<j;i++){
        printf("%d ",newSoldItems[i]);
    }
    return 0;
}