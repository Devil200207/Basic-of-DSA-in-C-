
int allIndexes(int input[], int size, int x, int output[]) {     
    if(size==0)
    {
        return 0;
    }               //  9 8 10 8 8
     int ans=allIndexes(input+1,size-1,x,output); //3
    
    
    if (input[0] == x) {
        for (int i =ans - 1; i >= 0; i--) {                        //1 3 4
            output[i + 1] = output[i] + 1;
        }
 
      
        output[0] = 0;
        ans++;
    }
    else {
         
                             
        for (int i =ans - 1; i >= 0; i--) {
            output[i] = output[i] + 1;
        }
    }
    return ans;   
       
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */

}
// 5
// 9 8 10 8 8
// 8