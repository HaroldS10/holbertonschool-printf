<h1> Custom Printf </h1>

<p> This is a simple custom implementation of the printf function in C, named _printf. It can be used to print formatted output to the standard output. </p>

<h2> Features </h2>
<ul>
<li>Supports basic format specifiers like %c, %s, %d, %i, %b, and %%.</li>
<li>Handles NULL string inputs by printing (null).</li>
<li>Implements basic string manipulation functions.</li>
</ul>

<h2> Files </h2>
<ul>
<li>main.h: Header file containing function declarations, structures, and macro definitions.</li>
</ul>

<h2> Usage </h2>
<ul>
<li>Include the main.h header file in your C source file..</li>
<li>Call the _printf function with the format string and required arguments.</li>
</ul>

<h2> Functions </h2>
<ul>
<li>_printf(char *format, ...): Main function that takes a format string and variable arguments. Returns the number of characters printed, or -1 on failure.</li>
<li>replace(char *buffer, char *s, int print_len): Copies the source string s to the destination buffer buffer and returns the final position.</li>
<li>_strlen(char *s): Returns the length of the input string s.</li>
<li>_strcpy(char *dest, char *src): Copies the source string src to the destination string dest.</li>
<li>rev_str(char *s): Reverses the input string s. </li>
<li>get_cases_type(char *arg): Returns a pointer to the appropriate conversion function based on the format specifier found in arg.</li>
<li>_itoa(int num, char *s, unsigned int base): Converts an integer num to a string s in the specified base. </li>
<li>case_ch(va_list list, char *buff, int print_len): Handles the %c format specifier.</li>
<li>case_str(va_list list, char *buff, int print_len): Handles the %s format specifier.</li>
<li>perc_case(va_list list, char *buff, int print_len): Handles the %% format specifier.</li>
<li>case_dec(va_list list, char *buff, int print_len): Handles the %d and %i format specifiers.</li>
<li>bin_case(va_list list, char *buff, int print_len): Handles the %b format specifier.</li>
</ul>

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


<h2> Authors </h2>

Luis Gallo - <[lgallogomez](https://github.com/lgallogomez)>

Harold Suarez - <[HaroldS10](https://github.com/HaroldS10)>