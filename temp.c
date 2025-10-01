#include <stdio.h>

signed main(){
    int n,x,even_count=0,odd_count=0,total_count=0,eventmp=0,oddtmp=0;
    float even_avg=0,odd_avg=0;
    eventmp = 0;
    oddtmp = 0;

    // input
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        if(x<0) break;
        if(x == 0) continue;
        if(!(x%2)){
            even_count++;
            eventmp += x;
        }
        else{
            odd_count++;
            oddtmp += x;
        }
    }
    
    //calc
    total_count = even_count + odd_count;
    even_avg = (float)eventmp/even_count;
    odd_avg = (float)oddtmp/odd_count;
    
    //output
    if(even_count==0){printf("0 0\n");}
        else {
            printf("%d %.2f\n",even_count,even_avg);
        }
    if(odd_count==0){printf("0 0\n");}
        else {
            printf("%d %.2f\n",odd_count,odd_avg);
        }
    printf("%d",total_count);
    return 0;
}