void mergeSort(int input[],int start,int mid,int end)
{
    int n1=mid-start+1;   
    int n2=end-mid;   
    int a1[n1],a2[n2];
    
    for(int i=0;i<n1;i++)
    {                                           
        a1[i]=input[start+i];    
    }
    for(int i=0;i<n2;i++)
    {
        a2[i]=input[mid+1+i];
    }
    int i=0,j=0,k=start;
    
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            input[k]=a1[i];
            i++;
            k++;
        }
        else{
            input[k]=a2[j];
            j++;
            k++;
        }
    }
    
    while(i<n1)                     
    {
        input[k]=a1[i];
            k++;
            i++;

    }
    while(j<n2)
    {
        input[k]=a2[j];
            k++;
            j++;
    }
}
void mergeSort(int input[],int start,int end) 
{
    if(start>=end)
    {
        return;
    }                 
    
    int mid=(start+end)/2;
                                       
    mergeSort(input,start,mid);   
    mergeSort(input,mid+1,end);   
    mergeSort(input,start,mid,end); 
}
void mergeSort(int input[], int size){
	// Write your code here
    if(size==0||size==1)
    {
        return;
    }
    
  mergeSort(input,0,size-1);
    
        
}
