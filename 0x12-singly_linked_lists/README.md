# Singly linked lists

| Author                                                                         | Website                                            | Image                                                                           |
|--------------------------------------------------------------------------------|----------------------------------------------------|---------------------------------------------------------------------------------|
| Edward Muss<br>University of Nairobi<br>Webmaster Assistant Daystar University | [Edward Muss](https://edwardmuss.cloudrebue.co.ke) | ![Alt Text](https://cloudrebue.co.ke/assetsp/2021/07/MY-PIC-e1627547736345.jpg) |

![Alt Text](https://i2.wp.com/images.onwardstate.com/uploads/2015/05/oie_14175751vZSQRLEn.gif?fit=650%2C408&ssl=1) 

# Learning Objectives

* When and why using linked lists vs arrays
* How to build and use linked lists

# Requirements
## General

Allowed editors: `vi`, `vim`, `emacs`
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
All your files should end with a new line
A `README.md` file, at the root of the folder of the project is mandatory
Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
You are allowed to use `_putchar`
You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
Don’t forget to push your header file
All your header files should be include guarded

# More Info

Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

# Tasks

## Print list

Write a function that prints all the elements of a list_t list.

* Prototype: `size_t print_list(const list_t *h);`
* Return: the number of nodes
* Format: see example
* If `str` is `NULL`, print `[0] (nil)`
* You are allowed to use `printf`

**Solution:** [0-print_list.c](https://github.com/edwardmuss/alx-low_level_programming/blob/main/0x12-singly_linked_lists/0-print_list.c)

```
julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
```
