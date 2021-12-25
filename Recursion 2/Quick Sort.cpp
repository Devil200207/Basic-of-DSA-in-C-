/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/                           
int particion(int input[],int start,int end) 
{           
    int x=input[end];  
    int i=(start-1); 
         
             
    for(int j=start;j<=end-1;j++)
    {          
        if(input[j]<=x)
        {
            i++;
            int c=input[j];
            input[j]=input[i]; 
            input[i]=c; 
        }
    }
                
    int g=input[end];
    input[end]=input[i+1];  
    input[i+1]=g; 
    return (i+1); 
    
}
void quickSort(int input[], int start, int end)        
	{
    		if(start>=end)
            {
                return;
            }
    int c=particion(input,start,end);
    quickSort(input,start,c-1);
    quickSort(input,c+1,end);
    
	}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort(input, 0, size - 1);

}