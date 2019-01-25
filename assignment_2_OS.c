#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,tot_mem=20,sum_mem=0,flg=0,j;
    printf("How many processes\n");   //No of process
    scanf("%d", &n);
    p = (int*) malloc(n * sizeof(int));     //dynamically allocated memory to array
    
    printf("Enter the memory of each process\n");
    
    for(i=0;i<n;i++)
    {
        printf("Process P%d : ", i);
        scanf("%d", &p[i]);                 // Accept memory of each process
    }
    	for(i=0;i<n;i++)
    	{
    	    if((sum_mem<=tot_mem) && (sum_mem+p[i]<=tot_mem))   //compare the process memory to total memory
    	    {
    	        sum_mem=sum_mem+p[i];
    	    }
    	    else
    	    {
    	        printf("Memory is full\n\n");       //if memory is full
    	        flg=1;                                          //make flag 1
    	        j=i;                                            //maintain he stored process count
    	        i=n;                                           //break the loop make i=nm
    	    }
    	}
    	  	
    	if(flg==0)              //flkag is zero means memory is free
    	{
    	    printf("Total Free Memory Is = %d", (tot_mem-sum_mem));  // count the free memory and print
    	}
    	else
    	{
    	    printf("Stored Processess in memory \n");       // here flag is 1 that means the memory is full.
    	    for(i=0;i<j;i++)
    	    {
    	        printf("P%d ",i);                       //printed the processes which is stored in memory
    	    }		
    	}
    return 0;
}
