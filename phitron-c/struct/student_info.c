#include<stdio.h>
struct student_info{
    char name[100];
    int roll;
    double marks;
};

int main(){
    int n;
    printf("No of stduents: ");
    scanf("%d",&n);
    struct student_info s[n];
   
    
    for(int i=0;i<n;i++){
        printf("========================================\n");
        printf("Student %d info\n",i+1);
        printf("========================================\n");
        printf("Student %d name: ",i+1);
        scanf("%s",s[i].name);
        printf("Student %d roll: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Student %d marks: ",i+1);
        scanf("%lf",&s[i].marks);
    }
    printf("========================================\n");
        printf("Student info\n");
        printf("========================================\n");
    for(int i=0;i<n;i++){
        printf("========================================\n");
        printf("Student %d info\n",i+1);
        printf("========================================\n");
        printf("Student %d name: ",i+1);
        printf("%s\n",s[i].name);
        printf("Student %d roll: ",i+1);
        printf("%d\n",s[i].roll);
        printf("Student %d marks: ",i+1);
        printf("%lf\n",s[i].marks);
    }
}