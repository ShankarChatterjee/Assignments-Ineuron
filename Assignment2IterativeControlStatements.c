//WAP to print MySir G N times on the Screen.
/*#include <stdio.h>
int main(){
int i=1,n;
printf("Enter a number\n");
scanf("%d",&n);
while(i<=n){
    printf("MySirG\n");
    i++;
}
return 0;
}*/
//WAP to print the first N natural numbers
/*#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
//WAP to print the first N natural numbers in reverse order
/*#include <stdio.h>
int main(){
    int n;
     printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d\n",i);

    }
    return 0;
}*/
//WAP to print first N odd natural numbers
/*#include <stdio.h>
int main(){
    int n;
     printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        printf("%d\n",i);
    }
    return 0;
}*/
//WAP to print the first N odd natural numbers in reverse order.
/*#include <stdio.h>
int main(){
    int n;
     printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        if(i%2) printf("%d\n",i);
    }
    return 0;
}*/
//WAP to print the first N even natural numbers
/*#include <stdio.h>
int main(){
    int n,i=0;
     printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        printf("%d\n",i);
    }
    return 0;
}*/
//WAP to print the first N even natural numbers in reverse order
/*#include <stdio.h>
int main(){
    int n,i;
     printf("Enter a number\n");
     scanf("%d",&n);
    for(i=n;i>=2;i--){
        if (i%2==0) printf("%d\n",i);
    }
    return 0;
}*/
//WAP to print square of the first N natural numbers
/*#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter a number\n");
     scanf("%d",&n);
     while(i<=n){
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}*/
//WAP to print cubes of the first N natural numbers
/*#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter a number\n");
     scanf("%d",&n);
     while(i<=n){
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}*/
//WAP to print a table of N
/*#include <stdio.h>
int main(){
    int table,i;
    printf("Enter a number\n");
     scanf("%d",&table);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",table,i,table*i);
    }
    return 0;
}*/


