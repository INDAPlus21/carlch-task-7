#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Optimization of strlen
// Remove need to use and increase a counter
#undef strlen
size_t 
strlen(const char *s) {
  const char *anchor = s;
  while(*s)
   s++;
  return s - anchor;
}

// Optimized function to read input and parse to int
// scanf is slower than me, that ain't good aight?
unsigned int 
parseint(void) {
    unsigned int c, n;
    n = getchar_unlocked() - '0';
    while ((c = getchar_unlocked()) >= '0')
        n = 10*n + c-'0';
    return n;
}

// Fast division using bitwise (32-bit)
int32_t 
div10(int32_t dividend) {
    int64_t invDivisor = 0x1999999A;
    return (int32_t) ((invDivisor * dividend) >> 32);
}

// Function for qsort to call when sorting
// Compares two strings and sorts by alphabetical order
int 
compare(const void* val1, const void* val2) {
    return strcmp(val1, val2);
}

static char people[100000][43];

int 
main(void) {
  // Read length of list using parseint() method
  unsigned int length = parseint();
  // Initilize array of 100,000 chars arrays of length 43
  
  // Read names
  unsigned int i = 0;
  do { 
    // Read first names
    if (i < (length)) {
      people[i][0] = '0';
      gets(people[i] + 1);
      continue;
    } 
    // Read surnames
    int len = strlen(people[i - length]);
    people[i - length][len] = '_';
    gets(people[i - length] + len + 1);
    len = strlen(people[i - length]);
    // No name will be longer than 20,
    // Let the first character represent 
    // the second digit of thelength of the name
    people[i - length][0] = (len % 10)+'0';
  } while(++i < (length << 1));

  qsort(people, length, 43, compare);
  
  unsigned int unique = 1;
  for(int i = 0; i < length - 1; i++) { 
    // If second digit of the name length is different
    // the names will not be the same, hence they will be unique
    if((people[i][0]) != (people[i+1][0])) {
      unique++;
      continue;
    }
    // Else we use compare function to check if they are unique or not
    else if(strcmp(people[i], people[i+1]) != 0) unique++;
  }
  // for(int i = 0; i <length; i++)
  //   printf("%s\n", people[i]);

  printf("%u\n", unique);
  return 0;
}
