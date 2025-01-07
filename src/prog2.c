#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _AAAAAAAAAAAA, _BBBBBBBBBBBB, _CCCCCCCCCCCC;
   printf("Enter _AAAAAAAAAAAA:");
   scanf("%d", &_AAAAAAAAAAAA);
   printf("Enter _BBBBBBBBBBBB:");
   scanf("%d", &_BBBBBBBBBBBB);
   printf("Enter _CCCCCCCCCCCC:");
   scanf("%d", &_CCCCCCCCCCCC);
   if ((_AAAAAAAAAAAA > _BBBBBBBBBBBB))
   {
   if ((_AAAAAAAAAAAA > _CCCCCCCCCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _CCCCCCCCCCCC);
   goto OutofIF;
Abigger:
   printf("%d\n", _AAAAAAAAAAAA);
   goto OutofIF;
   }
   }
   if ((_BBBBBBBBBBBB < _CCCCCCCCCCCC))
   {
   printf("%d\n", _CCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", _BBBBBBBBBBBB);
   }
OutofIF:
   if (((_AAAAAAAAAAAA == _BBBBBBBBBBBB) && (_AAAAAAAAAAAA == _CCCCCCCCCCCC) && (_BBBBBBBBBBBB == _CCCCCCCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_AAAAAAAAAAAA < 0) || (_BBBBBBBBBBBB < 0) || (_CCCCCCCCCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_AAAAAAAAAAAA < (_BBBBBBBBBBBB + _CCCCCCCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
