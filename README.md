# Libft42 - Library of Functions

Goal of this Project: Build my own C library. I rebuild existing C functions as well as custom ones. The library I will reuse in future school projects at 42Berlin.  


<details open>
  <summary style= "font-size:20px; font-weight:bold"> Character Checks & Conversion</summary>
<br>

- [`ft_isalpha`](ft_isalpha.c)	-  returns 1 if the character is alphabetic, and 0 otherwise.
- [`ft_isdigit`](ft_isdigit.c)	- returns 1 if the character is a digit (0 through 9), and 0 otherwise
- [`ft_isalnum`](ft_isalnum.c)	- returns 1 if the character is alphanumeric, and 0 otherwise.
- [`ft_isascii`](ft_isascii.c)	- returns 1 if the character fits into the ASCII character set, and 0 otherwise.
- [`ft_isprint`](ft_isprint.c)	- returns 1 if the character is printable, and 0 otherwise.
- [`ft_toupper`](ft_toupper.c)	- returns the character converted to uppercase if it's a lowercase letter, or the original character if not.
- [`ft_tolower`](ft_tolower.c)	-  returns the character converted to lowercase if it's an uppercase letter, or the original character if not.
</details>

<br>

---

<br>

<details open>
  <summary style= "font-size:20px; font-weight:bold"> Memory Management </summary>
<br>

- [`ft_memset`](ft_memset.c)	-  returns a pointer to the memory area filled with a constant byte.
- [`ft_bzero`](ft_bzero.c)	- returns nothing, but zeroes out a byte string.
- [`ft_memcpy`](ft_memcpy.c)	- returns a pointer to the destination memory area after copying.
- [`ft_memmove`](ft_memmove.c)	- returns a pointer to the destination memory area after handling overlapping memory.
- [`ft_memchr`](ft_memchr.c)	- returns a pointer to the first occurrence of the character in the memory area, or NULL if not found.

- [`ft_memcmp`](ft_memcmp.c)	- returns an integer less than, equal to, or greater than zero if the first n bytes of the memory areas are lexicographically less than, equal to, or greater than the second.
- [`ft_calloc`](ft_calloc.c)	-  returns a pointer to the allocated memory, with all its bytes set to 0.
</details>

<br>

---

<br>

<details open>
<br>
  <summary style= "font-size:20px; font-weight:bold"> String to Integer Conversion
</summary>

- [`ft_atoi`](ft_atoi.c)	- returns an converted integer value of the string.
</details>

<br>

---

<br>

<details open>
  <summary style= "font-size:20px; font-weight:bold"> String Manipulation </summary>
<br>

- [`ft_substr`](ft_substr.c)	- returns a substring of the input string starting at a specified index and with a specified length.
- [`ft_strjoin`](ft_strjoin.c)	- returns a new string resulting from concatenation of two strings.
- [`ft_strtrim`](ft_strtrim.c) - returns a new string with specified characters trimmed from both ends.
- [`ft_split`](ft_split.c)	- returns an array of substrings split based on a given delimiter.
- [`ft_strmapi`](ft_strmapi.c)	- returns a new string by applying a function to each character of the input.
- [`ft_striteri`](ft_striteri.c)	- returns nothing; applies a given function to each character of a string while providing the character’s index as the first argument.
- [`ft_strdup`](ft_strdup.c)	- returns a newly allocated string that is a duplicate of the string passed as the parameter.
- [`ft_strlcpy`](ft_strlcpy.c)	- returns the total length of the string it tried to create, i.e., the length of the source string.
- [`ft_strlcat`](ft_strlcat.c)	-  returns the total length of the string it tried to create, i.e., the length of the destination string plus the length of the source.
- [`ft_strchr`](ft_strchr.c)	- returns a pointer to the first occurrence of the character in the string, or NULL if not found.
- [`ft_strrchr`](ft_strrchr.c)	- returns a pointer to the last occurrence of the character in the string, or NULL if not found.
- [`ft_strncmp`](ft_strncmp.c)	- returns an integer less than, equal to, or greater than zero if the first n characters of the strings are lexicographically less than, equal to, or greater than the second string.
- [`ft_strlen`](ft_strlen.c)	- returns the length of a string.
- [`ft_itoa`](ft_itoa.c)	- returns a string representation of an integer.
- [`ft_strnstr`](ft_strnstr.c)	- returns a pointer to the first occurrence of the substring within the string, or NULL if not found.

</details>

<br>
---
<br>

<details open>
  <summary style= "font-size:20px; font-weight:bold"> File Descriptor Output </summary>
<br>

- [`ft_putchar_fd`](ft_putchar_fd.c)	- returns nothing; writes a character to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c)	- returns nothing; writes a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- returns nothing; writes a string to a file descriptor with a newline.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- returns nothing; writes an integer to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- returns nothing; writes a string to a file descriptor followed by a newline (\n).

</details>

<br>
---

<br>

<details open>
  <summary style= "font-size:20px; font-weight:bold"> Linked list functions </summary>
<br>

- [`ft_lstnew`](ft_lstnew.c)	- returns a new list node initialized with content.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- returns nothing; adds a node to the front of a list.
- [`ft_lstsize`](ft_lstsize.c)	- returns the number of nodes in a list.
- [`ft_lstlast`](ft_lstlast.c)	- returns  the last node in a list.
- [`ft_lstadd_back`](ft_lstadd_back.c)	- returns nothing; adds a node to the back of a list.
- [`ft_lstdelone`](ft_lstdelone.c)	- returns nothing; frees a single node.
- [`ft_lstclear`](ft_lstclear.c)	- returns nothing; frees all nodes in a list.
- [`ft_lstiter`](ft_lstiter.c)	- returns nothing; iterates a function over all list nodes.
- [`ft_lstmap`](ft_lstmap.c)	- returns a new list by applying a function to each node's content.
</details>
