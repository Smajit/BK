
#include <iostream>
#include <string.h>



bool isPallindrome(char[]);

int main()
{
    char str[100]="1881";
    std::cout<<isPallindrome(str)<<std::endl;
    strcpy(str,"Dad");
    std::cout<<isPallindrome(str)<<std::endl;
    strcpy(str,"Step on no pets");
    std::cout<<isPallindrome(str)<<std::endl;
    return 0;
}

bool isPallindrome(char str[])
{
  int i = 0;
  int j = strlen(str) - 1;
  
  while(j>i)
  {
    char LHS = toupper(str[i++]); 
    char RHS = toupper(str[j--]);
    if(LHS != RHS)
      return false;
   
  }
  return true;
}
