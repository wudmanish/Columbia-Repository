#include <stdio.h>
int main(){
int array[100], n, c, d, swap, lower, counter = 0;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++){
    scanf("%d", &array[c]);

for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d-1]) 
      {
      if(array[d] < array [d+1]){

       array[d] = array[d] + 1;
       counter++;
      }
    }
  }
}}
printf("Assorted List:\n");
  for ( c = 0 ; c < n ; c++ )
printf("%d\n", array[c]);

printf("Counter: %d\n", counter);

return 0;

}
}
