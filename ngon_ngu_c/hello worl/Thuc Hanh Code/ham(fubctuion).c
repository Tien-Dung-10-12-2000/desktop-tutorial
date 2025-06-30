// ham, fubctuion
#include<stdio.h>
/*void hello() // fubction call, loi goi ham
{
    printf("\nToi yeu jav\n");
    printf("Than tuong cua toi la maria oza wa\n");
}
    

int main(){
    int x[5] = {1, 2, 3};

    for (int i = 0; i <= 2; i++)
    {
        printf("%d ", x[i]);
    }

    hello();
}
    */
// ham tham so, palamittrer( truyen vao la doi so, tham so giong nhu bien)

/*void printfarraay(int x[3]) // bien tham so nam trong ham
{
    for(int i = 0; i <= 2; i++)// 2 ham khac nhau khong nhin duoc bien cua nhau
    {
        printf("%d ", x[i]);// tu dinh nghia ra 1 cai lenhj khac so voi thu vien
    }
}
int main (){
    int x[3] = {1, 2, 3};

    printfarraay(x); // goi hm void duoc chay xuong
    return 0;
}
    */

int tong(int x[3]) // input
{
    int ket_qua = x[0] + x[1] + x[2];
    return ket_qua;
}
int main (){
    int x[3] = {1, 2, 3};

    int ket_qua = tong(x);
    printf("tong = %d", ket_qua);
}