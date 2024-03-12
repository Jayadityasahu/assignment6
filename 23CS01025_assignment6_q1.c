#include<stdio.h>

int prime(int k)
      {   int s, div=0;
     for(int s=1; s<=k; s++)  if(k%s==0)  div +=1;
     if(div==2) return 1;
     else return 0;}

int main(){

    int i, j, f;
    printf("Enter lower limit:");
    scanf("%d", &i);
    printf("Enter upper limit:");
    scanf("%d", &j);
for(f=i; f<=j; f++){
       int s, div=0;
     for(int s=1; s<=f; s++)  if(f%s==0)  div +=1;
     if(div==2) 
     printf("%d, ", f);
}

return 0;
}