// so sanh min max kieu khac
#include<stdio.h>
void findMinMax(int arr [], int lenth, int *min, int *max){
    *min = *max = arr[0];
    for (int i = 0; i < lenth; i ++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
    
}
int main (){
    int arr[7] = {100,5,1,20,9999,0,10};
    int min, max;
    findMinMax(arr, 7, &min, &max);
    printf("Min = %d, Max = %d", min, max);
    return 0;
    
}
