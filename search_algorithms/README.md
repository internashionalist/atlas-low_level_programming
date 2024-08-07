# C - Search Algorithms

## General
	Allowed editors: vi, vim, emacs
	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	All your files should end with a new line
	A README.md file, at the root of the folder of the project, is mandatory
	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	You are not allowed to use global variables
	No more than 5 functions per file
	You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
	In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	The prototypes of all your functions should be included in your header file called search_algos.h
	Don’t forget to push your header file
	All your header files should be include guarded
	More Info
	You will be asked to write files containing big O notations. Please use this format:

	O(1)
	O(n)
	O(n!)
	n*m -> O(nm)
	n square -> O(n^2)
	sqrt n -> O(sqrt(n))
	log(n) -> O(log(n))
	n * log(n) -> O(nlog(n))
	…


## Tasks


0. Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm

	Prototype : int linear_search(int *array, size_t size, int value);
	Where array is a pointer to the first element of the array to search in
	size is the number of elements in array
	And value is the value to search for
	Your function must return the first index where value is located
	If value is not present in array or if array is NULL, your function must return -1
	Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)



1. Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

	Prototype : int binary_search(int *array, size_t size, int value);
	Where array is a pointer to the first element of the array to search in
	size is the number of elements in array
	And value is the value to search for
	Your function must return the index where value is located
	You can assume that array will be sorted in ascending order
	You can assume that value won’t appear more than once in array
	If value is not present in array or if array is NULL, your function must return -1
	You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)



2. Big O #0

What is the time complexity (worst case) of a linear search in an array of size n?



3. Big O #1

What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?



4. Big O #2

What is the time complexity (worst case) of a binary search in an array of size n?



5. Big O #3

What is the space complexity (worst case) of a binary search in an array of size n?


6. Big O #4

What is the space complexity of this function / algorithm?
