#include<stdio.h> 
#include<conio.h> 
void insertionsort(int[],int);
 void display(int[],int); 
 int main() { int a[20],n,i; ;
 printf("\n Enter the number of elements in array are:");
  scanf("%d",&n); 
  printf("\n Enter %d elements in the array:",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
  insertionsort(a,n);
  printf("\n The sorted elements in the array are:"); 
  display(a,n); 
 return 0;
}
 void insertionsort(int a[],int n) { 
        int i,j,key; 
        
         for(i=1;i<n;i++)
          { 
           key =a[i];
            j=i-1;
           while(j>=0 && a[j]>key)

            { 
               a[j+1]=a[j];
               j--;
            } 
            a[j+1]=key;
          } 
} 

void display(int a[],int n) 
{ 
        int i; 
       for(i=0;i<n;i++) 
       printf("%d \t",a[i]);
}