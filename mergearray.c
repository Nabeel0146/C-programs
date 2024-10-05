#include <stdio.h>
void main()
{
	int arr1[20], arr2[20], arr3[40];
	int n1,n2;
	void readarray(int[], int);
	void printarray(int[], int);
	void sortarray(int[], int);
	void merge(int[], int, int[], int, int[]);

	printf("Enter number of elements for first array: ");
	scanf("%d", &n1);
	printf("Enter %d digits for first array: ", n1);
	readarray(arr1,n1);

	printf("Enter number of elements for second array: ");
	scanf("%d", &n2);
	printf("Enter %d digits for second array: ", n2);
	readarray(arr2,n2);
	
	printf("First Array Sorted: ");
	sortarray(arr1, n1);
	printarray(arr1, n1);
	
	printf("Second Array Sorted: ");
	sortarray(arr2, n2);
	printarray(arr2,n2);
	

	printf("Merged array : ");
	merge(arr1,n1,arr2,n2,arr3);
	printarray(arr3,n1+n2);
}

void readarray(int a[], int n)
{
	int i;
	for (i=0; i<n ; i++)
	
		scanf("%d", &a[i]);
	
}

void printarray(int a[], int n)
{
	int i;
	for (i=0; i<n ; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void sortarray(int a[], int n)
{
	int i,j, temp;
	for(i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]= temp;
			}
		}
	}
}




void merge( int a[], int n1, int b[], int n2, int c[])
{
	int i,j,k,temp;
	i=j=k=0;
	while (i<n1 && j<n2)
	{
		if (a[i]< b[j])
		   c[k++]=a[i++];
		else 
		   c[k++]=b[j++];
	}	   
	while (i<n1)
     	c[k++]=a[i++];
	while (j<n2)
		c[k++]=b[j++];
}
		
		
		
	
