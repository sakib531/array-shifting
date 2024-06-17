#include<stdio.h>
void leftShift(int arr[],int size,int x) {
    x%=size;
    for(int i = 0; i < size ; i++) {
        printf("%d",arr[(i+x)%size]);
    }
    printf("\n");
}
int main (){
    int n,b,y;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arrOne[n];
    printf("enter the value of shift");
    scanf("%d",&y);
    int shift = y;
    for(b=0;b<n;b++){
        scanf("%d",&arrOne[b]);
    }
    printf("given array : ");
    for (int i = 0; i < n; i++){
        printf("%d",arrOne[i]);
    }
    printf("\n");
    printf("shifted array : ");
    leftShift(arrOne , n , shift);
    return 0;
}
