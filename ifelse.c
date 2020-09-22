#include<stdio.h>
int ifelse(){
    int marks;
    printf("Enter your mark: ");
    scanf("%d",&marks);
    printf("%d",marks);
    if(marks>50){
        printf("PASS");
    }
    else if(marks<50){
        printf("NO PASS");
    }
}
