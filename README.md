<h1> Custom Printf </h1>

<p> This is a simple custom implementation of the printf function in C, named _printf. It can be used to print formatted output to the standard output. </p> 
<h2> Features </h2>
<p> Supports basic format specifiers like %c, %s, %d, %i, %b, and %%.
Handles NULL string inputs by printing (null).
Implements basic string manipulation functions.
<h2> Files </h2>
main.h: Header file containing function declarations, structures, and macro definitions.
<h2> Usage </h2>
Include the main.h header file in your C source file.
Call the _printf function with the format string and required arguments.
<h2> Functions </h2>
_printf(char *format, ...): Main function that takes a format string and variable arguments. Returns the number of characters printed, or -1 on failure.
replace(char *buffer, char *s, int print_len): Copies the source string s to the destination buffer buffer and returns the final position.
_strlen(char *s): Returns the length of the input string s.
_strcpy(char *dest, char *src): Copies the source string src to the destination string dest.
rev_str(char *s): Reverses the input string s.
get_cases_type(char *arg): Returns a pointer to the appropriate conversion function based on the format specifier found in arg.
_itoa(int num, char *s, unsigned int base): Converts an integer num to a string s in the specified base.
case_ch(va_list list, char *buff, int print_len): Handles the %c format specifier.
case_str(va_list list, char *buff, int print_len): Handles the %s format specifier.
perc_case(va_list list, char *buff, int print_len): Handles the %% format specifier.
case_dec(va_list list, char *buff, int print_len): Handles the %d and %i format specifiers.
bin_case(va_list list, char *buff, int print_len): Handles the %b format specifier.
#include "main.h"

int main() {
    int a = 42;
    char c = 'A';
    char *s = "Hello, World!";

    _printf("Integer: %d\nCharacter: %c\nString: %s\n", a, c, s);
    return 0;
}



<h2> The example will output </h2>
Integer: 42
Character: A
String: Hello, World!
