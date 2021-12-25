// Change in the given string itself. So no need to return or print the changed string.
int length(char arr[]){
	int len = 0;
	for(int i =0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}
void pairStar(char input[],int start)
{
	
	if(input[start]=='\0')
    {
		return;
	}   
	
	pairStar(input,start+1);
    
	if(input[start] == input[start+1])
    {
		int l = length(input);
	
		input[l+1] = '\0';
		int i;
		
		for(i = l-1;i>=start +1;i--)
        {
			input[i+1] = input[i];
		}
		
		input[start+1] = '*';
	}
}
void pairStar(char input[]) {
    // Write your code here
    pairStar(input,0);
    

}
