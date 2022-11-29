#include<stdio.h>
#include<math.h>
#include<string.h>
void check_cost(int cost){
    for(int i=0;i<cost;i++){
        if(pow(2,i)==cost){
           printf("Yes\n");
           printf("cost = 2^%d\n",i);
            return;
        }
    }
    printf("No\n");

}
int main(){
    char ch[100];
    int cost=0,len;
    scanf("%s",ch);
    getchar();
    len = strlen(ch);
    for(int i=0;i<len;i++){
        cost += ch[i]-96;
    }
    check_cost(cost);
}