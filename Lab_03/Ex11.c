#include <stdio.h>

int main()
{
    int a[5];

    for(int i=0;i<5;i++){
        scanf("%d",a + i);
    }
    for(int i=0;i<5;i++){
        if(*(a+i)%2==0){
        printf("vetor[%d] = %p\n",i+1,(a+i));
        }
    }

    return 0;
}