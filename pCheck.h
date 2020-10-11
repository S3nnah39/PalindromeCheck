//Given the string, check if it is a palindrome.

int length(char * inputString)
{
    int count=0;
    for(int i=0;inputString[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrome(char * inputString) {
    
    int size = length(inputString);
    size = size - 1;
    for(int j=0;inputString[j]!='\0';j++)
    {
        if(inputString[j]!=inputString[size])
        {
            return false;
        }
        size--;
    }
    return true;
}
