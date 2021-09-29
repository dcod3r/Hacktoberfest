#include <stdio.h>

void bubblesort(int *a,int n)
{
  int issorted=0;
  int i,j,c;
  for(i=0;i<n-1;i++)
  {
    printf("number of passes:%d\n",i+1);
    issorted=1;
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        c=a[j];
        a[j]=a[j+1];
        a[j+1]=c;
        issorted=0;
      }
    }
    if(issorted==1)
    return ;
  }
}

int main()
{
  int a[6],n,i;
  printf("enter no ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("element %d ",i);
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  printf("\n");

  bubblesort(a,n);

  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}
