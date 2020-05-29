# 0x1A. C - Hash tables

## Resources:books:
Read or watch:
* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.hbtn.io/rltoken/uodWZz-2jyHReOeToaLNdQ)
* [Hash function](https://intranet.hbtn.io/rltoken/YiFi_oMjd9cZ4VepsS2RKQ)
* [Hash table](https://intranet.hbtn.io/rltoken/Kswyyb1f2JY3dn-3TEckUQ)

---
## Learning Objectives:bulb:
What you should learn from this project:

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

---

### [0. >>> ht = {}](./0-hash_table_create.c)
* Write a function that creates a hash table.


### [1. djb2](./1-djb2.c)
* Write a hash function implementing the djb2 algorithm.
julien@ubuntu:~/0x1A. Hash tables$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}


### [2. key -> index](./2-key_index.c)
* Write a function that gives you the index of a key.


### [3. >>> ht['betty'] = 'holberton'](./3-hash_table_set.c)
* Write a function that adds an element to the hash table.


### [4. >>> ht['betty']](./4-hash_table_get.c)
* Write a function that retrieves a value associated with a key.


### [5. >>> print(ht)](./5-hash_table_print.c)
* Write a function that prints a hash table.


### [6. >>> del ht](./6-hash_table_delete.c)
* Write a function that deletes a hash table.


### [7. $ht['Betty'] = 'Holberton'](./100-sorted_hash_table.c)
* In PHP, hash tables are ordered. Wait… WAT? How is this even possible?

---

## Author
* **Marlon Aurelio Garcia Morales** - [clasesucatmarlon](https://github.com/clasesucatmarlon)