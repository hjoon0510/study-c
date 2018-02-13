

#include <stdio.h>

int main() 

{

        int T = 0;

        scanf("%d", &T);

 

        for (int i = 1; i <= T; i++)

        {

 

               int shour = 0, sminutes = 0, ssecond = 0;

               int ehour = 0, eminutes = 0, esecond = 0;

               int 
rhour = 0, rminutes = 0, rsecond = 0;

 

               scanf("%d:%d:%d", &shour, &sminutes, &ssecond);

               scanf("%d:%d:%d", &ehour, &eminutes, &esecond);

 

               ehour += 24;

               rhour = ehour - shour;

               rminutes = eminutes - sminutes;

               rsecond = esecond - ssecond;

 

               if (rsecond < 0)

               {

                       rminutes--;

                       rsecond = rsecond + 60;

               }

               if (rminutes < 0)

               {

                       rhour--;

                       rminutes = rminutes + 60;

               }

               rhour %= 24;

               printf("#%d %02d:%02d:%02d", i, rhour, rminutes, rsecond);

        }

        return 0;

}

