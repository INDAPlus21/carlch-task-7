`int length = 0;`
`scanf("%d", &length);` 
``
`int *vector = malloc(length * sizeof(int));`
`for (int i = 0; i < length; i++) `
`   scanf("%d", &vector[i]);`
``
`free(vector);`

