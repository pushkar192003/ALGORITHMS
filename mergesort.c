#include<stdio.h>


void merge(int [],int,int,int);
void mergesort(int [] , int , int);
void merge(int a[], int p, int q, int r)
{ 


int n1,n2,i,j,k;
n1=q-p+1;//size of L
n2=r-q;//SIZE OF R
int L[n1+1],R[n2+1];
for (i=0;i<n1;i++)
    L[i]=a[p+i];
for(j=0;j<n2;j++)
    R[j]=a[q+j+1];
//sentinel to execute driver logic  correctly in case 1 of l or r got exhausted first ..we need to put whats left as it is in A for that we need sentinel
L[n1]=99999;
R[n2]=99999;
i=0;
j=0;
for (k=p; k<=r ;k++){
    if(L[i]<=R[j]){
        a[k]=L[i];
        i++;
    }
    else
    {
        a[k]=R[j];
        j++;
    }
}

}

void mergesort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=(p+r)/2;
mergesort(a,p,q);
mergesort(a,q+1,r);
merge(a, p,q,r);
}
}
int main()
{
int a[100],i,n;
printf("\n Enter the size of the elements to be sorted:");
scanf("%d",&n);
printf("\n Enter the elements to sort:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n The Elements before sorting are:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
mergesort(a, 0,n-1);
printf("\n The elements after sorting are:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
