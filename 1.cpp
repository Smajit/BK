boolean isPallindrome(char str[])
{
  int i = 0;
  int j = strlen(str) - 1;
  
  while(j>i)
  {
    if(str[i++] != str[j--])
      return False;
   
  }
  return True;
}
