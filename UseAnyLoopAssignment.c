//Write a program to calculate sum of first N natural numbers
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
        
    }
    return 0;
}*/
//Write a program to calculate sum of first N even natural numbers
/*#include <stdio.h>
int main(){
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2){
            printf("%d\n",i);
    }
    return 0;
}*/
//Write a program to calculate sum of first N odd natural numbers
/*#include <stdio.h>
int main(){
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
            printf("%d\n",i);
    }
    return 0;
}*/
//Write a program to calculate sum of squares of first N natural numbers
/*#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum += i*i;
        
    }
    printf("%d\n",sum);
    return 0;
}*/
//Write a program to calculate sum of cubes of first N natural numbers
/*#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum += i*i*i;
        
    }
    printf("%d\n",sum);
    return 0;
}*/
//Write a program to calculate factorial of a number
/*#include<stdio.h>
int fact(int);
int main(){
    
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(fact(n)<0) printf("factorial of %d is: undefined\n",n);
    else printf("factorial of %d is: %d\n",n,fact(n));
    return 0;
}
int fact(int a){
    int fact=0;
    if(a<0) return -1;
    else if(a==0) return 1;
    else{
        for(int i=a;i>=1;i--){
            fact +=i;
        }
        return fact;
    }

} */
//Write a program to count digits in a given number
/*#include <stdio.h>
int main(){
    int n,count =1;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(n!=0){
        n /=10;
        count++;
    }
    printf("The number of digits in the number is :%d\n",count);
    return 0;
}*/
//Write a program to check whether a given number is a Prime number or not
/*#include <stdio.h>
int main(){
    int n,m,flag=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    m = n/2;
    for(int i=2;i<=m;i++){
        if(n%i==0){
            printf(" %d is not a prime number\n",n);
            flag =1;
            break;
        }

    }
    if(flag ==0) printf("%d is a prime number\n",n);
    return 0;
}*/
//Write a program to calculate LCM of two numbers
/*#include <stdio.h>
int main(){
    int n1,n2,max;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    max = (n1>n2) ? n1:n2;
    while(1){
        if(max % n1 ==0 && max % n2 == 0 ){
            printf("The LCM of %d and %d is: %d\n",n1,n2,max);
            break;
        }
        max++;
    }
    return 0;
}*/
//Write a program to reverse a given number
/*#include <stdio.h>
int main(){
    int rev=0,num,rem;
    printf("Enter a number\n");
    scanf("%d",&num);
    
    while(num!=0){
        rem = num % 10;
        rev = rev *10 + rem;
        num /=10;  
    }
    printf("The reverse of %d is %d\n",num,rev);
    return 0;
}*/

