## QUESTIONS 1

`int length = 0;` initate int with value of 0
`scanf("%d", &length);` read input as a int value and store the value in length variable

`int *vector = malloc(length * sizeof(int));` initate vector and allocate the memory for "length" amount of integers
`for (int i = 0; i < length; i++)` do following instructions for all "length" times
`   scanf("%d", &vector[i]);` get input as int and store in array

`free(vector);` deallocated the memory, I.E free up memory

## QUESTIONS 2

`someFunction` låter den inmatade funktionen f utföras i angivet millisekunder. Matar du in 100 kommer funktionen exikuveras i 100 millisekunder.

## QUESTIONS 3

Slumpmässigt plats i minnet välj och printas som int, sedan skrivs det värdet som användaren inmatar.

