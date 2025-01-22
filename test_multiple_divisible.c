#include<stdio.h>
int main()
{
  int num;
  printf("num: ");
  scanf("%d", &num);

  if(num%5==0 &&(num%7==0 && num%11!=0))
  {
    printf("\n %d is multiple of 5, divisible by 7 and not by 11.", num);
  }
  else if(num%5==0)
  {
  	if(num%7!=0)
  	{
  		printf("ooops not divisible by 7");
	  }
	  else if(num%11==0)
	  {
	  	printf("ooops number is divisible by 11");
	  }
  }
  else{
  printf("not multiple of 5");
}
  }
 

