#include <stdio.h>
#include <stdlib.h>

int compare_desc (const void *a, const void *b) {
    return *(int*)b - *(int*)a;                               
}

int main(void) {
  unsigned int length;
  scanf("%u", &length);

  unsigned int val[length];

  for(int i = 0; i < length; i++)
    scanf("%u", &val[i]);
  qsort(&val[0], length, sizeof(int), compare_desc); 
  /*
  for (int i = 0; i < length; ++i)
    for (int j = i + 1; j < length; ++j)
      if (val[i] < val[j])
         val[i] = val[i] + val[j] -(val[j]=val[i]);
  */  
  if(length % 2 == 1) length += 1;
  
  unsigned int i = length / 2;
  unsigned int sum = 0;
  while(i --> 0)
    sum += val[i];
  printf("%u", sum);
  return 0;
}
