// so sanh min max, uu tien su dung con tro


#include<stdio.h>
void minmax(int arr [], int lent, int *max, int *min)
{
    *min = *max = arr[0];
    int i;
    for(i = 1; i < lent; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        } 
    }
}

int main (){
    int a[] = {12,65,433,9,14,5};
    int min, max;
    int lent = 6;
    minmax (a, lent, &max, &min);
    printf("Maximun is %d, mininum is %d", max, min);
    return 0;
}