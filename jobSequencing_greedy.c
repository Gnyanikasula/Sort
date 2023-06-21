#include<stdio.h>

int main(){
    char arr[5] = {'a','b','c','d','e'};
    int profit[5] = {20,15,10,5,1};
    int deadline[5] = {2,2,1,3,3};
    int i,maxIndex=0,c=3;
    char sequence[3] = {""};
    while(c--){
    for (i=0;i<5;i++){
        if(profit[i]>profit[maxIndex]){
            maxIndex = i;
        }
        if(sequence[deadline[maxIndex]-1]==''){
        sequence[deadline[maxIndex]-1] = arr[maxIndex];
        profit[maxIndex] = 0;
        }else{
          sequence[deadline[maxIndex]-2] = arr[maxIndex];
        profit[maxIndex] = 0;  
        }
    }
    for(i=0;i<3;i++){
        printf("%c ",sequence[i]);
    }
    }
}