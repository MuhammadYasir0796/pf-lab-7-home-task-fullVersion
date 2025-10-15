#include <stdio.h>

int main(){
    int seats[10]={1,0,1,0,1,0,1,0,1,0},seat,j=1;
    printf("Enter seat number from (0-9) you want:; \n");
    for(int i=0;i<5;i++){
        printf("%d. Seat: ",j);
        scanf("%d",&seat);
        if(seats[seat]==1){
            printf("Seat already Booked.\n");
            i--;
            continue;
        }else{
            printf("\nBooked.\n");
            seats[seat]=1;
            j++;
        }
    }
    printf("Booked seats of bus are: \n");
    for(int i=0;i<10;i++){
        printf("%d ",seats[i]);
    }
    return 0;
}