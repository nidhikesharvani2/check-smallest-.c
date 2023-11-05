# include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers=");
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("%d is the smallest number",a);
    }else{
        printf("%d is not the smallest number",a);
    }
}