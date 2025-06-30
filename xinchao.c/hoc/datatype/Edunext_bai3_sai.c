#include<stdio.h>
float main(){
    int Thap, Trung_Binh, Cao;

    printf("nhap gia tri dien ap thap: ");
    scanf("%d", &Thap);

    printf("nhap gia tri dien ap trung binh: ");
    scanf("%d", &Trung_Binh);

    printf("nhap gia tri dien ap cao: ");
    scanf("%d", &Cao);

    if( Thap < Trung_Binh < Cao)
    {
        printf("muc pin thap: %d\n", Thap);
    }

   else if( Trung_Binh > Thap && Trung_Binh < Cao )
   {
    printf("muc pin trung binh: %d\n", Trung_Binh);
   }
    else if ( Cao > Trung_Binh && Trung_Binh > Thap )
   {
    printf("muc pin cao: %d\n", Cao);
   }

    return 0;
}