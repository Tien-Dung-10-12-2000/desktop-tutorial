#include<stdio.h>
float main(){

    float so;

    printf(" nhap mot so: ");
    scanf("%f", &so );

    if ( so > 0)
    {
        printf("canh bao: so duong \n");
    }
    else if ( so < 0 )
    {
        printf("canh bao: so am \n");
    }
    else
    {
        printf("so bang 0 \n");
    }
    return 0;
}
// true
