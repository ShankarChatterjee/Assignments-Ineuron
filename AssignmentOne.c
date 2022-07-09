//Write a program to print Hello Students on the screen.
/*#include <stdio.h>
int main(){
    printf("Hello Students\n");
    return 0;
}*/
//Write a program to print Hello in the first line and Students in the second line.
/*#include <stdio.h>
int main(){
    printf("Hello\nStudents\n");
    return 0;
}*/
//Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
/*#include <stdio.h>
int main(){
    printf("\"MySirG\"\n");
    return 0;
}*/
//WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.Expected output format – “Area of circle is A having the radius R”. Replace A with area
//& R with radius.
/*#include <stdio.h>
int main(){
    float r=0,a=0;
    printf("Please enter the radius of the circle \n");
    scanf("%f",&r);
    a= 3.14* r*r;
    printf("Area of circle is %f having the radius %f",a,r);
    return 0;
}*/
//WAP to calculate the length of String using printf function.
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length=0;
    printf("Enter the string\n");
    gets(str);
    length = strlen(str);
    printf("The length of the %s is: %d\n",str,length);
    return 0;

}*/
///WAP to print the name of the user in double quotes.
/*#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    printf("Enter the name of the user\n");
    gets(name);
    printf("\"Hello , %s\"\n",name);
    return 0;
}*/
//WAP to print “%d” on the screen.
//WAP to print “\n” on the screen.
//WAP to print “\\” on the screen.
/*#include<stdio.h>
int main(){
    printf("%%d\n");
    printf("\\n\n");
    printf("\\\\n");//have dout in this
    return 0;
}*/
//Find output of below code:
/*#include<stdio.h>
int main()
{
int x = printf("ineuron");
printf("%d",x);//output:-ineuron7
return 0;
}*/
//WAP to take date as an input in below given format and convert the date format and
//display the result as given below.
//User Input date format – “DD/MM/YYYY” (27/11/2022)
//Output format –
//“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
/*#include<stdio.h>

int main(){
    int d, m, year;
    printf("Enter date (dd/mm/yy):\n");
    scanf("%d/%d/%d", &d,&m,&year);
    printf("Day - %d ,Month - %d , Year - %d\n",d,m,year);
    return 0;
}*/
//WAP to take time as an input in below given format and convert the time format and
//display the result as given below.
//User Input date format – “HH:MM”
//Output format – “HH hour and MM Minute”
//Example –
//“11:25” converted to “11 Hour and 25 Minute”
 /*#include<stdio.h>
int main(){
    int h,m;
    printf("Enter Time (HH:MM): \n");
    scanf("%d:%d", &h,&m);
    printf("\"%d:%d\”converted to\“ %d Hour and %d Minute\”\n",h,m,h,m); //have doubt in this
    return 0;
}   */

