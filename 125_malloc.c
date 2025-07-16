# include <stdio.h>
# include <stdlib.h>
void main()
{
    int *p,n,i;

    printf("Enter how many Numbers....:");
    scanf("%d",&n);

     p=(int *)malloc(sizeof(n)*n);

    for(i=0;i<n;i++)
      {
        printf("Enter %d no....:",i+1);
        scanf("%d",p+i);
       }

     printf("Dynamic Memory Allocation");
     printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for(i=0;i<n;i++)
	{
	printf("\n%u - %d",p+i,*(p+i));
	}

	int *q=realloc(p,sizeof(n)*(n+2));

	printf("\n\Realloc Memory Allocation");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	for(i=0;i<(n+2);i++)
	{
	printf("\n%u - %d",q+i,*(q+i));
	}

	free(p);
	free(q);

  printf("\n");
}
