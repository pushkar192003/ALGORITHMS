#include<stdio.h> 
#include<conio.h> 
void bubblesort(int[],int);
 void display(int[],int); 
 int main() { int a[20],n,i; ;
 printf("\n Enter the number of elements in array are:");
  scanf("%d",&n); 
  printf("\n Enter %d elements in the array:",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
  bubblesort(a,n);
  printf("\n The sorted elements in the array are:"); 
  display(a,n); 
 return 0;
}
       void bubblesort(int a[],int n) { 
        int i,j,temp,excg=0; 
        
         for(i=0;i<n;i++)
          { excg=0;
           for(j=0;j<n-i-1;j++)
            { 
                if(a[j]>a[j+1]) 
                 {   temp=a[j]; 
                     a[j]=a[j+1]; 
                    a[j+1]=temp; 
            excg++; // track if there is  swap 
            } 
            } 
             } 

            if(excg==0)//if no swap
             return ; //decreases best case time complexity from O(n^2) to n!!
       }
       void display(int a[],int n) 
       { 
        int i; 
       for(i=0;i<n;i++) 
       printf("%d \t",a[i]);
        }