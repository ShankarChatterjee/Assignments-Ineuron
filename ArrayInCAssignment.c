//Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.
/*#include <stdio.h>
int main(){
    int arr[10],sum=0;
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("The sum of array elements is : %d\n",sum);
     return 0;   

}*/
//Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.
/*#include <stdio.h>
int main(){
    int arr[10], sum=0;
    float avg=0;
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = sum/10;
    printf("The Average of array elements is : %f\n",avg);
     return 0;   

}*/
//Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
/*#include <stdio.h>
int main(){
    int arr[10], se=0,so=0;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2)
            so += arr[i];
        else
            se += arr[i];    
    }
    printf("The sum of all even numbers is: %d\n",se);
    printf("The sum of all odd numbers is: %d\n",so);
     return 0;   

}*/
//Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
/*#include <stdio.h>
int main(){
    int arr[10],temp;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp; 
        }
        }
        

    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
        printf("\n");
        printf("The shortest element is %d\n",arr[0]);

    return 0;
} */       
//Write a program to sort elements of an array of size 10. Take array values from the user.
/*#include <stdio.h>
int main(){
    int arr[10],temp;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp; 
        }
        }
        

    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
        printf("\n");
        

    return 0;
}*/
//Write a program to find second largest in an array.Take array values from the user.
/*#include <stdio.h>
int main(){
    int arr[10],temp;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp; 
        }
        }
        

    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
        printf("\n");
    int index=8;    
    for(int k=9;k>=1;k--){
        if(arr[index]<arr[k]){
            printf("The second largest number is: %d\n",arr[index]);
            break;
        }
        index--;
        
    }    

    return 0;
}*/
//Write a program to find the second smallest number in an array.Take array values
//from the user.
/*#include <stdio.h>
int main(){
    int i,j,arr[10],temp;
    printf("Enter the values of the array\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int index = 1;
    for(int k=0;k<10;k++){
        if(arr[k]<arr[index]){
            printf("The second smallest element is: %d\n",arr[index]);
            break;
        }
        index++;
    }
    return 0;
}*/

//Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.
/*#include <stdio.h>
int main(){
    int i,n=0;
    int arr[n];
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("The reverse array is:-\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}*/
//Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
/*#include <stdio.h>
int main(){
    int i,arr1[10],arr2[10];
    printf("Enter the elements of the array\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<10;i++){
        arr2[i] = arr1[i];
    }

    printf("The copied array is:\n");
    for(i=0;i<10;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    return 0;
}*/