#include<stdio.h>

    int main(){
     int n,i;
     int arr[100];

     printf("enter number of elements:");
     scanf("%d", &n);

     printf("enter %d elements:\n",n);
     for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
     }

     printf("elements are:\n");
     for(i=0;i<n;i++)
      printf("%d",arr[i]);
      }

      return 0;
}







        }
