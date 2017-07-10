#include <stdio.h>
#include <time.h>
int main(int argc, char *argv[])
{
int right[8];
int i, a;
clock_t beg, end;
double cpu_time_used;

beg = clock();
for (i = 0; i < 8; i++){
right[i] = i + 0;
}
	for(a=1; a < 8; a++){
printf("Element[%d] = %d\n", i, right[a]);
}
end = clock();
printf("Time elapsed (per sec): %f\n", ((double)clock() - beg) / CLOCKS_PER_SEC);
}
