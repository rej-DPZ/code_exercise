/* 
1. monocarp move 
2. check
3. coin fall

1. we care only about Y and fall ratio
2. just brute force and check Y in for
3. count the distance


 */

#include <stdio.h>

int main()
{ 
   int numCoins = 0;
   
   typedef struct{
      int x;
      int y;
   }coin_t;

   coin_t player = {0, 0};
   coin_t coin;
   
   scanf("%d", &numCoins); 
   for (int i = 1; i <= numCoins; ++i)
   {
      scanf("%d", &coin.x);
      scanf("%d", &coin.y);
   // at init 
      if ((coin.y - player.y) < -1)
      {
         printf("NO\n");
      }
      else printf("YES\n");

   }





}

