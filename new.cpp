#include <stdio.h>
int main(void)
{
    int N , a[999] , i , j , t;

    printf("请输入数据容量");
    scanf("%d" , &N);
    printf("请依次输入数据\n");
    for (i = 0 ; i < N ; i++)
    {
        scanf("%d" , &a[i]); 
    }
        
    for (i = 0 ; i < N-1 ; i++)
    {
        for (j = i+1 ; j < N ; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }  
        }      
    }
    
    printf("排序结果为");    
    for (i = 0 ; i < N ; i++)
    {
        printf("%d " , a[i]);
    }
        
    return 0;
AAAAAA
}
