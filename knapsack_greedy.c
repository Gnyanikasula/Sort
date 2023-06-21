#include<stdio.h>

int main(){
    int profit[7]={10,5,15,7,6,18,3},i,sackWeight,maxIndex=0,c=0;
    float weight[7]={2,3,5,7,1,4,1};
    float ratio[7],knapsack[7]={0};
    scanf("%d",&sackWeight);
    for(i=0;i<7;i++){
        ratio[i] = profit[i]/weight[i];
    }
       
    while(sackWeight!=0 && c<7){
    for (i=0;i<7;i++){
        if(ratio[i]>ratio[maxIndex]){
            maxIndex = i;
        }
    }
    if(weight[maxIndex]<sackWeight){
        knapsack[maxIndex] = 1;
        sackWeight -= weight[maxIndex];
        profit[maxIndex] = 0;
        weight[maxIndex] = 0;
        ratio[maxIndex] = 0;
    }else{
        knapsack[maxIndex] = sackWeight/weight[maxIndex];
        sackWeight = 0;
    }
    c++;
    }
    for(i=0;i<7;i++){
    printf("%.2f ",knapsack[i]);
    }
}