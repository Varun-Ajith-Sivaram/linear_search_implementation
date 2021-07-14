#include<stdio.h>

#define size 10 //size of array is initialized to 10 

void main()
{
    int a[size],i,n,element,flag=0;

    printf("\tLinear Search Implementation\n");
    
    printf("\n Enter the no. of elements in the array: ");
    scanf("%d",&n);

    printf("\n Enter the elements: \n");

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    printf("\n Enter the element to be searched: ");
    scanf("%d",&element);

    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            flag=1;
            printf("    --> Searched element %d found at position %d",element,i+1);
            break;
        }
    }
    
    if(flag==0)
        printf("    --> Searched element not found");

}
