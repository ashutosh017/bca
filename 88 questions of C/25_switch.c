#include<stdio.h>

int main(){
    int a,b,ad,s,d,m;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    switch (a,b)
    {
    case 1:
        ad=a+b;
        // break;
    
    case 2:
        s=a-b;
        // break;
    
    case 3:
        d=a*b;
        // break;
    
    case 4:
        m=a/b;
        // break;
    
    // default:
    //     break;
    printf("addition = %d\nsubtraction = %d\ndivision = %d\nmultiplication = %d\n",ad,s,d,m);
    }
    return 0;
}