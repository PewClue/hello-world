#include <stdio.h>
#include <stdlib.h>
int pxq[200];
int main()
{
    int p[100], q[100], i, j, grad_p, grad_q;
    printf("Introduceti gradul lui p: ");
    scanf("%d", &grad_p);
    for(i = grad_p; i >= 0; i--)
    {
        printf("a%d= ", i);
        scanf("%d", &p[i]);
    }
    printf("Introduceti gradul lui q: ");
    scanf("%d", &grad_q);
    for(i = grad_q; i >= 0; i--)
    {
        printf("b%d= ", i);
        scanf("%d", &q[i]);
    }
    for(i = 0; i <= grad_p; i++)
        for(j = 0; j <= grad_q; j++)
        if(p[i] != 0 && q[j] != 0)
        pxq[i+j] = pxq[i+j] + p[i]*q[j];
    for(i = grad_p + grad_q; i >= 0 ; i--)
        printf("c%d = %d  ", i, pxq[i]);
    return 0;
}
