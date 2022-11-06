#include <stdio.h>
int main()
{
    char ch[100];
    // name, size of name, stdin
    fgets(ch, sizeof(ch), stdin);
    puts(ch);
    int i = 0, v = 0, c = 0, l = 0, s = 0;
    while (ch[i] != '\0')
    {
        if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')){
           
            if (ch[i] == 'A' || ch[i] == 'a' || 
            ch[i] == 'E' || ch[i] == 'e' || 
            ch[i] == 'I' || ch[i] == 'I' || 
            ch[i] == 'O' || ch[i] == 'o' || 
            ch[i] == 'U' || ch[i] == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
            l++;
        }if(ch[i]==' '){
            s++;
        }  
        i++;
    }
    printf("No of vowel: %d\n", v);
    printf("No of consonent: %d\n", c);
    printf("No of letter: %d\n", l);
    printf("No of word: %d\n", s+1);
}