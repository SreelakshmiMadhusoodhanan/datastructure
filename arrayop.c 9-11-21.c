#include<stdio.h>
void main()
{
    int array[100], pos, i, n, val,choice=1,ch,flag=0;
    printf("Enter number of elements in array\n");
                scanf("%d", &n);

                printf("Enter %d elements\n", n);

                for (i=0; i< n; i++)
                scanf("%d", &array[i]);


         while(choice>0&&choice<6)
         {
             printf("1:Insertion\n 2:Traversal\n 3:Deletion\n 4:Searching\n 5:Exit\n");
                printf("Enter your choice\n");
                scanf("%d",&choice);

                switch(choice)

                        {
                            case 1:printf("Enter the location to insert an element\n");
                                    scanf("%d", &pos);

                                        printf("Enter the value to insert\n");
                                        scanf("%d", &val);

                                        for (i= n-1; i>= pos- 1; i--)
                                        {


                                            array[i+1] = array[i];
                                        }

                                            array[pos-1] = val;
                                            printf("after insertion=\n");
                                            for(i=0;i<n+1;i++)
                                                printf("%d\t",array[i]);
                                            break;



                             case 2:  printf("Resultant array is\n");
                                            for (i=0; i<n; i++)
                                                {
                                                    printf("%d\n",array[i]);

                                                    }
                                                    break;

                             case 3: printf("Enter the location to delete element\n");
                                        scanf("%d", &pos);

                                        for (i=pos-1; i<n-1;i++)
                                            array[i] = array[i+1];
                                            printf("Resultant array:\n");

                                        for (i=0; i<n-1; i++)
                                            printf("%d\n", array[i]);
                                        break;

                             case 4: printf("Enter the element to be search\n");
                                        scanf("%d",&ch);

                                        for(i=0; i<n; i++)
                                                if(array[i]==ch)
                                                {

                                                flag=1;
                                                break;
                                                }
                                                if(flag==1)
                                                {


                                            printf("The value is at %d st position\n",i+1);
                                                }
                                                else
                                                {
                                                    printf("not");
                                                }
                                                break;
                             case 5: exit(0);
                                     break;


                             }
              }

}
