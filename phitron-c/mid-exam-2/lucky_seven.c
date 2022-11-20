#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[30];
    char strReverse[30];

    int i, j, result = 0, n;
    scanf("%d", &n);
    getchar();
    for (int p = 0; p < n; p++)
    {
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        // for (j = 0; j<len-1; j++)
        // {
        //     printf("%c<=%d\n",str[j],j);
        // }
        // printf("============================================\n");
        for (i = len - 1, j = 0; i >= 0; i--, j++)
        {
            strReverse[i] = str[j];
        }
        // strReverse[i] = '\0';
        // printf("%s",strReverse);

        for (j = 1; j<len; j++)
        {
            if(strReverse[j]==str[j-1]){
                result =1;
            }else{
                result=0;
                break;
            }
        }
        if(result==1){
            if(len>7){
                printf("Case #2: %c%d%c\n",str[0],len-3,str[len-2]);
            }else{
            printf("Case #3: %s",str);
                
            }
        }else{
            printf("Case #1: Not Palindrome\n");
        }
        printf("============================================\n");
        
    }
    return 0;
}
