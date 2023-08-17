 #include <stdio.h>
int a;
int b;
int main() {
    
    printf("Hello world");
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf("The Entered Numbers are %d and %d",a,b);
    printf("\n");
    if(a>b){
      printf(" %d is Greater %d",a,b);  
    }
    else{
        printf(" %d is Greater %d",b,a);  
    }


    return 0;
}
