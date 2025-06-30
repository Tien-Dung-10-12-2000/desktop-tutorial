#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("enter x: \r\n");
    scanf("%d", &x);

    printf("enter y: \r\n");
    scanf("%d", &y);

    printf("enter z: \r\n");
    scanf("%d", &z);

    printf("x= %d y= %d z= %d \r\n",x,y,z);
    int result =x+y+z;
    printf("result =%d", result);
    return 0;

}