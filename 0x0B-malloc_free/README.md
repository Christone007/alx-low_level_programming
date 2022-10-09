# DYNAMIC MEMORY ALLOCATION
Sometimes we need to manually allocate memory for a program
at runtime. This is because we may not know how much space to
reserve at Compile time.  

Dynamic memory allocation is achieved using the **malloc** function
from the standard library <stdlib.h>. When we allocate memory dynamically,
we must deallocate the memory manually too. Memory deallocation is achieved
with the help of the **free** function.

## Tasks  
0. Write a function that creates an array of chars, and initializes it with a specific char  
1. Write a function that returns a pointer to a newly allocated space in memory which contains a copy of the string given as a parameter
2. Write a function that concatenates two strings  
3. Write a function that returns a pointer to a 2-D array of integers
4. Write a function that frees a 2 D grid created in Task 3
5. Write a function that concatenates all the program's arguments  
6. Write a function that splits a string into words.

## Task Quotes  
0. Float like a butterfly, sting like a bee  
1. The woman who has no imagination has no wings
2. He who is not courageous enough to take risks will accomplish nothing in life  
3. If you even dream of beating me you'd better wake up and apologize
4. It's not bragging if you can back it up
5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe  
6. I will show you how great I am

## Extra
* Indeed, its the pebble in our shoes that wear us out. When dynamically
allocating memory for any program, we must ensure to account for every single byte.

* Big problems are solved using the divide and conquer strategy. Task 6 was one heck of a challenge. I took some time off, then returned, thought about the 
problem, solved it on paper using a divide and conquer approach... then I wrote the code... Debugged it and voila!

## New Learning
1. An **array of strings** is pointed to with a Double pointer 
