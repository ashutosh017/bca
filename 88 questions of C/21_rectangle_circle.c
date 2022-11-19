#include<stdio.h>

int main(){
    float len,bd,r,rectPerameter,circleArea,circumference;
    printf("Enter length of rectangle\n");
    scanf("%f",&len);
    printf("Enter breadth of rectangle\n");
    scanf("%f",&bd);
    printf("Enter radius of rectangle\n");
    scanf("%f",&r);
    rectPerameter=2*(len+bd);
    circleArea = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("perameter of rectangle is %0.2f unit\narea of circle is %0.2f unit sqr\ncircumference of circle is %0.2f unit\n",rectPerameter,circleArea,circumference);


    return 0;
}