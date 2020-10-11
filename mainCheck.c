#include<stdio.h>
#include<stdlib.h>
#include"pcheck.h"

int main(void)
{
  char *confirm;
  
  printf("What would you like to check?\n"); //Ask user for the string to be checked
  scanf("%s", confirm); //Stores string
  
  int answer;
  printf("Confirm: you want to check the string below?\n");//user confirms the string to be checked.
  printf("Press 1 - Yes or 2 - No");
  scanf("%d",&answer);
  
  if(answer==1)
  {
    if(checkPalindrome(confirm))//returns true 
    {
      printf("The string is a palindrome.\n");
    }
    else
    {
      printf("The string is NOT a palindrome.\n");
    }
  }
  
  printf("Thank you for your time.\n")
  return 0;
}
