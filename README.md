# Ft_Printf
A custom implementation of the C `printf` function, recreating its core functionality as required by the 42 School curriculum.
 ## Requirements
Implemented the basic version of printf supporting the following conversion specifiers:
- %c — Character
- %s — String
- %p — Pointer address
- %d and %i — Signed decimal integer
- %u — Unsigned decimal integer
- %x and %X — Unsigned hexadecimal integer (lowercase and uppercase)
- %% — Literal percent sign
No support for width, precision, or flags like `-, +, #, 0` beyond what's needed for basic functionality.
## Usage
Compile all files 
```
gcc -Wall -Wextra -Werror *.c -o ft_printf
```
