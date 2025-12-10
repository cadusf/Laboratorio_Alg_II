#include <stdio.h>

int main()
{
    int a[5];

    for(int i=0;i<5;i++){
        scanf("%d",a + i);
    }
    for(int i=0;i<5;i++){
        printf("vetor[%d] = %d\n",i+1,*(a+i) * 2);
    }

    return 0;
}