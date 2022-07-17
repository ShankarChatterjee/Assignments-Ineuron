//Write a program to print unit digit of a given number
/*#include <stdio.h>
int main(){
    int num=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<10){
        printf("The unit digit is: %d\n",num);

    }
    else{
        num=num%10;
        printf("The unit digit is: %d\n",num);
    }
    return 0;
}*/
//Write a program to print a given number without its last digit.
/*#include <stdio.h>
int main(){
    int num=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<10){
        printf("This is a single digit number\n");

    }
    if(num>10){
        num = num/10;
        printf("The number without its last digit is %d\n",num);
    }
        return 0;

}*/
//Write a program to swap values of two int variables
/*#include <stdio.h>
int main(){
    int n1=0,n2=0,temp=0;
    printf("Enter Two numbers\n");
    scanf("%d%d",&n1,&n2);
    temp = n1;
    n1=n2;
    n2=temp;
    printf("The swaped numbers are: %d%d\n",n1,n2);
    return 0;


}*/
//Write a program to swap values of two int variables without using a third variable
/*#include <stdio.h>
int main(){
    int n1=0,n2=0;
    printf("Enter Two numbers\n");
    scanf("%d%d",&n1,&n2);
    n1 = n1-n2;
    n2 = n1 + n2;
    n1 = n2-n1;
    printf("The swapped numbers are %d%d\n",n1,n2);
    return 0;

}*/
//Write a program to input a three-digit number and display the sum of the digits.
/*#include <stdio.h>
int main(){
    int unit=0,tenth =0,hundred =0,num=0,sum =0;
    printf("Enter a 3-digit number\n");
    scanf("%d",&num);
    hundred = num/100;
    tenth = num/10 - (hundred*10);
    unit = num%10;
    
    sum = unit + hundred + tenth;
    
    printf("The sum of the digits of %d is: %d\n",num,sum);
    return 0;

    

}*/
//Write a program which takes a character as an input and displays its ASCII code.
/*#include <stdio.h>
int main(){
    char ch;
    
    printf("Enter a character:\n");
    scanf("%c",&ch);
    printf("ASCII value of %c is : %d\n",ch,ch);
    return 0;

}*/
//Write a program to find the position of first 1 in LSB.
/*#include <math.h> 
#include <stdio.h> 
  
unsigned int getFirstSetBitPos(int n) 
{ 
    return log2(n & -n) + 1; 
} 
  
// Driver code 
int main() 
{ 
    int n = 22; 
    printf("%u", getFirstSetBitPos(n)); 
    getchar(); 
    return 0; 
} */
//Write a program to check whether the given number is even or odd using a bitwise
//operator.
/*#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if((n ^ 1) == n + 1 ){
        printf("The number %d is even\n",n);
    }
    else{
        printf("The number %d is odd\n",n);
    }
}*/
//Write a program to print size of an int, a float, a char and a double type variable
/*#include <stdio.h>
int main(){
    int sizeofFloat=0,sizeOfDouble=0,sizeOfInt=0,sizeOfChar=0;
    sizeofFloat = sizeof(float);
    sizeOfChar = sizeof(char);
    sizeOfDouble = sizeof(double);
    sizeOfInt = sizeof(int);
    printf("Size of Float: %d\n",sizeofFloat);
    printf("Size of Char: %d\n",sizeOfChar);
    printf("size of Double: %d\n",sizeOfDouble);
    printf("Size of Int: %d\n",sizeOfInt);
    return 0;

}*/
//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
/*#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    n= n/10;
    n = n*10;
    printf("The number is %d\n",n);
    return 0;

}*/
//Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)
/*#include <stdio.h>
int main(){
    int num,dig;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a digit to append at the end of number\n");
    scanf("%d",&dig);
    num = num*10;
    num = num + dig;
    printf("The resultant number is %d \n",num);
    return 0;
}*/
//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
/*#include<stdio.h>
int main(){
    int num;
    printf("enter a number in INR\n");
    scanf("%d",&num);
    printf("The value of INR: %d in USD is :%f\n",num,num/76.23);
    return 0;
}*/

//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
/*#include <stdio.h>
int main(){
    int num,n1,n2;
    printf("Enter a 3-digit number\n");
    scanf("%d",&num);
    n1= num %10;
    n2 = num/10;
    n1 = n1*100;
    num = n1 + n2;
    printf("The rotated number is: %d\n",num );
    return 0;
}*/


