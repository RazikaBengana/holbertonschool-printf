# _printf - A recreation of the eponymous C standard library function

*Prototype*

int _printf(const char *format, ...)

_printf produces output according to the *format* string that specifies how subsequent arguments are converted for output.

### Format
A string to print to stdout.

 - All characters except **%** are copied unchanged to stdout.
 - Using the **%** character introduces a conversion specification. It will fetch zero or more subsequent arguments "**...**". 
 Each conversion specification starts with a **%** followed by a conversion specifier.

### Example
 
    char *here = "world";
    
    _printf("Hello %s!\n", here);

*Output:*

    $ Hello world!

## Conversion specifiers
Here is a list of all supported conversion specifiers.
|Specifier| Meaning |
|--|--|
| c | A single character **char** |
| s | A string **char \*** |
| d or i | An **int** converted to decimal notation

## How to compile and run
Clone this repo

    git clone https://github.com/MoustaphaElPsyCongroo/holbertonschool-printf.git _printf
   
   Change your directory to _printf
   

    cd _printf

We provide a sample test file to try all *_printf* conversion specifiers and the majority of regular *printf* ones. Running it will print double lines of text. If two consecutive lines match, it means our _printf works :)

Compile it with

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c ./tests/main.c -o tryprint

([Install gcc](https://www.guru99.com/c-gcc-install.html) if you didn't already)

And run it

    ./tryprint

*First lines of output*

    Let's try to printf a simple sentence.
    Let's try to printf a simple sentence.
    Length:[39, 39]
    MAX MIN:[-2147483648, 2147483647]
    MAX MIN:[-2147483648, 2147483647]
    Length:[34, 34]
    Length:[34, 34]
    Length:[39, 39]
    Length:[39, 39]
    Negative:[-762534]
    Negative:[-762534]

 Consecutive lines can differ if we don't support the corresponding conversion specifier yet, for example:
 
 
    Unsigned:[%u]
    Unsigned:[4294967295]

 To run your own tests, just edit the main.c file in **tests** folder.

## Credits

### Authors
Moustapha "[MoustaphaElPsyCongroo](https://github.com/MoustaphaElPsyCongroo)" Tall (*[Linkedin](https://www.linkedin.com/in/moustapha-tall-b26960183/)*)

Razika "[Razika-Bengana](https://github.com/Razika-Bengana)" Bengana (*[Linkedin](https://www.linkedin.com/in/razika-bengana-065284243/)*)

*Thanks to the Linux man-pages project for their description of the regular printf function*
