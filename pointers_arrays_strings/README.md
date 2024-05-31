0. 98 Battery st.
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
	Prototype: void reset_to_98(int *n);

1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.
	Prototype: void swap_int(int *a, int *b);

2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.
	Prototype: int _strlen(char *s);

3. I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line, to stdout.
	Prototype: void _puts(char *str);

4. I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.
	Prototype: void print_rev(char *s);

5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.
	Prototype: void rev_string(char *s);

6. Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.
	Prototype: void puts2(char *str);

7. Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line.
	Prototype: void puts_half(char *str);
	The function should print the second half of the string
	If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

8. Arrays are not pointers
Write a function that prints n elements of an array of integers, followed by a new line.
	Prototype: void print_array(int *a, int n);
	where n is the number of elements of the array to be printed
	Numbers must be separated by comma, followed by a space
	The numbers should be displayed in the same order as they are stored in the array
	You are allowed to use printf

9. strcpy
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
	Prototype: char *_strcpy(char *dest, char *src);
	Return value: the pointer to dest

10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
Write a function that convert a string to an integer.
	Prototype: int _atoi(char *s);
	The number in the string can be preceded by an infinite number of characters
	You need to take into account all the - and + signs before the number
	If there are no numbers in the string, the function must return 0
	You are not allowed to use long
	You are not allowed to declare new variables of type array
	You are not allowed to hard-code special values
	We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

11. Don't hate the hacker, hate the code
#advanced
Create a program that generates random valid passwords for the program 101-crackme.
	You are allowed to use the standard library
	You dont have to pass the betty-style tests (you still need to pass the betty-doc tests)
	man srand, rand, time
	gdb and objdump can help








0. strcat
Write a function that concatenates two strings.
	Prototype: char *_strcat(char *dest, char *src);
	This function appends the src string to the dest string, 
		overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	Returns a pointer to the resulting string dest

1. strncat
Write a function that concatenates two strings.
	Prototype: char *_strncat(char *dest, char *src, int n);
	The _strncat function is similar to the _strcat function, except that
		it will use at most n bytes from src; and
		src does not need to be null-terminated if it contains n or more bytes
	Return a pointer to the resulting string dest

2. strncpy
Write a function that copies a string.
	Prototype: char *_strncpy(char *dest, char *src, int n);
	Your function should work exactly like strncpy

3. strcmp
Write a function that compares two strings.
	Prototype: int _strcmp(char *s1, char *s2);
	Your function should work exactly like strcmp

4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
Write a function that reverses the content of an array of integers.
	Prototype: void reverse_array(int *a, int n);
	Where n is the number of elements of the array

5. Always look up
Write a function that changes all lowercase letters of a string to uppercase.
	Prototype: char *string_toupper(char *);

6. Expect the best. Prepare for the worst. Capitalize on what comes
Write a function that capitalizes all words of a string.
	Prototype: char *cap_string(char *);
	Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7. Mozart composed his music not for the elite, but for everybody
Write a function that encodes a string into 1337.
	Letters a and A should be replaced by 4
	Letters e and E should be replaced by 3
	Letters o and O should be replaced by 0
	Letters t and T should be replaced by 7
	Letters l and L should be replaced by 1
	Prototype: char *leet(char *);
	You can only use one if in your code
	You can only use two loops in your code
	You are not allowed to use switch
	You are not allowed to use any ternary operation

8. rot13
#advanced
Write a function that encodes a string using rot13.
	Prototype: char *rot13(char *);
	You can only use if statement once in your code
	You can only use two loops in your code
	You are not allowed to use switch
	You are not allowed to use any ternary operation

9. Numbers have life; they're not just symbols on paper
#advanced
Write a function that prints an integer.

	Prototype: void print_number(int n);
	You can only use _putchar function to print
	You are not allowed to use long
	You are not allowed to use arrays or pointers
	You are not allowed to hard-code special values

10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
#advanced
Add one line to this code, so that the program prints a[2] = 98, followed by a new line.
	You are not allowed to use the variable a in your new line of code
	You are not allowed to modify the variable p
	You can only write one statement
	You are not allowed to use ,
	You are not allowed to code anything else than the line of expected line of code at the expected line
	Your code should be written at line 19, before the ;
	Do not remove anything from the initial code (not even the comments)
	and dont change anything but the line of code you are adding (dont change the spaces to tabs!)
	You are allowed to use the standard library




0. memset
Write a function that fills memory with a constant byte.
	Prototype: char *_memset(char *s, char b, unsigned int n);
	The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	Returns a pointer to the memory area s

1. memcpy
Write a function that copies memory area.
	Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
	The _memcpy() function copies n bytes from memory area src to memory area dest
	Returns a pointer to dest

2. strchr
Write a function that locates a character in a string.
	Prototype: char *_strchr(char *s, char c);
	Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

3. strspn
Write a function that gets the length of a prefix substring.
	Prototype: unsigned int _strspn(char *s, char *accept);
	Returns the number of bytes in the initial segment of s which consist only of bytes from accept

4. strpbrk
Write a function that searches a string for any of a set of bytes.
	Prototype: char *_strpbrk(char *s, char *accept);
	The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
	Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

5. strstr
Write a function that locates a substring.
	Prototype: char *_strstr(char *haystack, char *needle);
	The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
	Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

6. Chess is mental torture
Write a function that prints the chessboard.
	Prototype: void print_chessboard(char (*a)[8]);

7. The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers.
	Prototype: void print_diagsums(int *a, int size);
	Format: see example
	You are allowed to use the standard library
	Note that in the following example we are casting an int[][] into an int*. This is not something you should do.
		The goal here is to make sure you understand how an array of array is stored in memory.

8. Double pointer, double fun
#advanced
Write a function that sets the value of a pointer to a char.
	Prototype: void set_string(char **s, char *to);

9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
#advanced
Create a file that contains the password for the crackme2 executable.
	Your file should contain the exact password, no new line, no extra space
	ltrace, ldd, gdb and objdump can help
	You may need to install the openssl library to run the crakme2 program: sudo apt install libssl-dev
	Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main
		Then sudo apt update and sudo apt install libssl1.0.0
