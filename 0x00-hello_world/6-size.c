#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always 0(Success)
 */
int main(void)
{
printf("Size of a char:%ld byte(s)\n", (sizeofchar));
printf("Size of an int:%ld bytes(s)\n", (sizeofint));
printf("Size of a long int:%ld byte(s)\n", (sizeoflongint));
printf("Size of a long long int:%ld byte(s)\n", (sizeoflonglongint));
printf("Size of a float:%ld byte(s)\n", sizeof(float));
return (0);
}
