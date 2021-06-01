#include<stdio.h>

int main(){
    int arr[5];
    int sum;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum +=(arr[i]^0); 
    }
    if(sum%2) printf("Odd parity\n");
    else printf("Even paritiy\n");
    return 0;
}
