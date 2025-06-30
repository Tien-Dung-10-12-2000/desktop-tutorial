// timf so lon nhat trong mang
#include<stdio.h>
int main(){
    int array[10];
    int Max = 0;

    for(int i = 0; i <= 10; i++){
        printf("Number array[%d]: \n", i);
        scanf("%d", array[i]);   
    
    
        if( i == 0|| array [i] > Max){
        Max = array[i];
        }
    }
    printf("max number: %d\n", Max);
    return 0;
        

    



        
}