#include<stdio.h>
int main(){
    int a[12];
		char ch = 'a';
		for(int i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = '\0';
        puts(a);


}