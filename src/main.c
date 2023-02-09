#include <stdio.h>
#include "sub.h"
#include "add.h"
/*
 *Main source file
 *
 */
char i=255;
int main(void)
{
printf("1 + 1 = %d\n", add(1,1));
printf("1 - 1 = %d\n", sub(1,1));
printf("hello world\n");

return 0;
}
