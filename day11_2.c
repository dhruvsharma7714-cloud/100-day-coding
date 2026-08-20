/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
  int selling,cost, profit, loss;
  printf("enter the selling price and cost price: ");
  scanf("%d %d" , &selling , &cost);

  if(selling>cost)
  {
    profit = (selling-cost)*100/cost;
    printf("profit  %d%%" ,profit);
  }

  else if (cost>selling)
  {
     loss =  (cost-selling) *100/selling;
     printf("loss  %d%%" , loss);
  }
  else 
  {
    printf("no profit no loss");
  }
return 0;
  }

