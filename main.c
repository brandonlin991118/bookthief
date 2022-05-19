//
//  main.c
//  bookthief
//
//  Created by Brandon Lin on 5/19/22.
//  Copyright © 2022 Brandon Lin. All rights reserved.
//
#include<stdio.h>
int main(void)
{
    int num=0;
    while(1){
        int sum=0;
        int page=0;
        scanf("%d",&num);
        if(num==0) break;
        for(int i=1;i<=num+1,sum<=num;i++){
            sum+=i;
            if(sum>num){
                page=sum-num;
                printf("%d %d\n",page,i);
            }
        }
    }
    return 0;
}

