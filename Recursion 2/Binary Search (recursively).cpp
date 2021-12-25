// input - input array
// size - length of input array
// element - value to be searched

int binarySearch(int input[],int low,int high,int element)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    
    if(input[mid]==element)
    {
        return mid;
    }
    else if(element<input[mid])
    {
        return binarySearch(input,low,mid-1,element);
    }
    else
    {
        return binarySearch(input,mid+1,high,element);
    }
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
   int low=0;
    int high=size-1;
    int ans=binarySearch(input,low,high,element);
    return ans;
}
