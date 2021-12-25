
 printSubsetsOfArray(int input[],int size,int output[],int m)
{
    if(size==0)
    {
        for(int i=0;i<m;i++)
            cout<<output[i]<<" ";  
        cout<<endl;
        return;
    }
    int newout[m+1];
    int i;
    for(i=0;i<m;i++)
    {
        newout[i]=output[i];
    }
    newout[i]=input[0];
    printSubsetsOfArray(input+1,size-1,newout,m+1);
    printSubsetsOfArray(input+1,size-1,output,m);
    
}

void printSubsetsOfArray(int input[], int size)
{
	// Write your code here
    int output[0];
    int m=0;
    printSubsetsOfArray(input,size,output,m);
}
