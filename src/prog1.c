#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _AAAAAAAAAAAA, _BBBBBBBBBBBB, _XXXXXXXXXXXX, _YYYYYYYYYYYY;
   printf("Enter _AAAAAAAAAAAA:");
   scanf("%d", &_AAAAAAAAAAAA);
   printf("Enter _BBBBBBBBBBBB:");
   scanf("%d", &_BBBBBBBBBBBB);
   printf("%d\n", _AAAAAAAAAAAA + _BBBBBBBBBBBB);
   printf("%d\n", _AAAAAAAAAAAA - _BBBBBBBBBBBB);
   printf("%d\n", _AAAAAAAAAAAA * _BBBBBBBBBBBB);
   printf("%d\n", _AAAAAAAAAAAA / _BBBBBBBBBBBB);
   printf("%d\n", _AAAAAAAAAAAA % _BBBBBBBBBBBB);
   _XXXXXXXXXXXX = (_AAAAAAAAAAAA - _BBBBBBBBBBBB) * 10 + (_AAAAAAAAAAAA + _BBBBBBBBBBBB) / 10;
   _YYYYYYYYYYYY = _XXXXXXXXXXXX + (_XXXXXXXXXXXX % 10);
   printf("%d\n", _XXXXXXXXXXXX);
   printf("%d\n", _YYYYYYYYYYYY);
   system("pause");
    return 0;
}
