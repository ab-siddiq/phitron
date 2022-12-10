#include<stdio.h>
#include<stdio.h>

struct student
{
    char name[100];
    int roll;
    double marks;
};

int main(){
    
    struct student s;

    printf("Enter information:\n");
    printf("Enter name: "); 
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%lf",&s.marks);
    printf("\n\n");
    printf("Displaying Information:\n");
    printf("Name: %s",s.name);
    // puts(s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Marks: %.2lf\n",s.marks);

}
