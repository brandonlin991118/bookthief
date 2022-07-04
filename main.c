//
//  main.c
//  hellom1pro
//
//  Created by Brandon Lin on 6/1/22.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int S ;
    int N,i;
    double p,q;
    double a,r;
    
    scanf(" %d", &S);
    while(S--){
        scanf("%d %lf %d",&N,&p,&i);
        q=1-p;
        a=pow(q, i-1)*p;
        r=pow(q,N);
        if(p==0){
            printf("0.0000\n");
        }
        else{
            printf("%4lf\n",(a*(1-pow(q, 100000))/(1-r)));
        }
    
    }
    return 0;
}
