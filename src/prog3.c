#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _AAAAAAAAAAAA, _AAAAAAAAAAA2, _BBBBBBBBBBBB, _XXXXXXXXXXXX, _CCCCCCCCCCC1, _CCCCCCCCCCC2;
   printf("Enter _AAAAAAAAAAAA:");
   scanf("%d", &_AAAAAAAAAAAA);
   printf("Enter _BBBBBBBBBBBB:");
   scanf("%d", &_BBBBBBBBBBBB);
   for (int _AAAAAAAAAAA2 = _AAAAAAAAAAAA; _AAAAAAAAAAA2 <= _BBBBBBBBBBBB; _AAAAAAAAAAA2++)
   printf("%d\n", _AAAAAAAAAAA2 * _AAAAAAAAAAA2);
   for (int _AAAAAAAAAAA2 = _BBBBBBBBBBBB; _AAAAAAAAAAA2 <= _AAAAAAAAAAAA; _AAAAAAAAAAA2++)
   printf("%d\n", _AAAAAAAAAAA2 * _AAAAAAAAAAA2);
   _XXXXXXXXXXXX = 0;
   _CCCCCCCCCCC1 = 0;
   while (_CCCCCCCCCCC1 < _AAAAAAAAAAAA)
   {
   {
   _CCCCCCCCCCC2 = 0;
   while (_CCCCCCCCCCC2 < _BBBBBBBBBBBB)
   {
   {
   _XXXXXXXXXXXX = _XXXXXXXXXXXX + 1;
   _CCCCCCCCCCC2 = _CCCCCCCCCCC2 + 1;
   }
   }
   _CCCCCCCCCCC1 = _CCCCCCCCCCC1 + 1;
   }
   }
   printf("%d\n", _XXXXXXXXXXXX);
   _XXXXXXXXXXXX = 0;
   _CCCCCCCCCCC1 = 1;
   do
   {
   _CCCCCCCCCCC2 = 1;
   do
   {
   _XXXXXXXXXXXX = _XXXXXXXXXXXX + 1;
   _CCCCCCCCCCC2 = _CCCCCCCCCCC2 + 1;
   }
   while (!(_CCCCCCCCCCC2 > _BBBBBBBBBBBB));
   _CCCCCCCCCCC1 = _CCCCCCCCCCC1 + 1;
   }
   while (!(_CCCCCCCCCCC1 > _AAAAAAAAAAAA));
   printf("%d\n", _XXXXXXXXXXXX);
   system("pause");
    return 0;
}
