# ft_printf

`ft_printf` is a simplified reimplementation of the standard C printf function. This project was completed as part of the 42 curriculum and focuses on handling formatted output in C, reinforcing knowledge of variadic functions, pointers, and string manipulation.

## Features

Handles conversion specifiers:
- `%c` — character
- `%s` — string
- `%p` — pointer address
- `%d / %i` — signed integers
- `%u` — unsigned integers
- `%x / %X` — hexadecimal
- `%%` — literal percent sign

Supports minimum field width and basic formatting.

## Usage

Clone the repository:
```C
gcc -Wall -Wextra -Werror -c *.c
ar rcs libftprintf.a *.o
```
Include header:
```C
#include "ft_printf.h"
```
`main.c` example:
```C
#include "ft_printf.h"

int main(void)
{
    int len;
    int len2;

    len = ft_printf("Hello %s! Number: %d\n", "World", 42);
    len2 = printf("Hello %s! Number: %d\n", "World", 42);

    ft_printf("Printed %d characters in len \n", len);
    printf("Printed %d characters in len\n", len);

    ft_printf("Printed %d characters in len2\n", len2);
    printf("Printed %d characters in len2\n", len2);

    return 0;
}
```

