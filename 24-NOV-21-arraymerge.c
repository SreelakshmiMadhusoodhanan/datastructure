#include<stdio.h>
void main()
{
    int array1[10],array2[10],array3[20],i,j,n1,n2,n3;
    printf("enter the no:of elements in array1 :\n");
    scanf("%d",&n1);
    printf("enter the no:of elements in array2 :\n");
    scanf("%d",&n2);
    n3=n1+n2;
    printf("enter the values of first array :\n");
    for(i=0;i<n1;i++)
    {
         scanf("%d",&array1[i]);
         array3[i]=array1[i];
    }

    int k=n1;
    printf("enter the values of second array:\n");
     for(i=0;i<n2;i++)
     {
        scanf("%d",&array2[i]);
        array3[k]=array2[i];
        k++;
     }

 printf("merged array :\n");
 for(i=0;i<n3;i++)
 {
     printf("%d\t",array3[i]);

 }
 printf("\nAfter sorting...\n");
    for( i=0;i<n3;i++)
    {
        int temp;
        for( j=i+1; j<n3 ;j++)
        {
            if(array3[i]<array3[j])
            {
                temp=array3[i];
                array3[i]=array3[j];
                array3[j]=temp;
            }
        }
    }

    for(i=n3-1 ; i>=0 ; i--)
    {
        printf(" %d ",array3[i]);
    }
    return 0;
}

