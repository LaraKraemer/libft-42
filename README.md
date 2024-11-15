# Libft (Library of Functions)

This project aims to make me a code library in C of functions that I will be able to reuse for upcoming projects as a student at 42. 


<details open>
  <summary style= "font-size:20px; font-weight:bold"> Functions from ctype.h </summary>
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
  <summary style= "font-size:20px; font-weight:bold"> Functions from string.h </summary>
<br>

- [`ft_memset`](ft_memset.c)	-  returns a pointer to the memory area filled with a constant byte.
- [`ft_strlen`](ft_strlen.c)	- returns the length of a string.
- [`ft_bzero`](ft_bzero.c)	- returns nothing, but zeroes out a byte string.
- [`ft_memcpy`](ft_memcpy.c)	- returns a pointer to the destination memory area after copying.
- [`ft_memmove`](ft_memmove.c)	- returns a pointer to the destination memory area after handling overlapping memory.
- [`ft_strlcpy`](ft_strlcpy.c)	- returns the total length of the string it tried to create, i.e., the length of the source string.
- [`ft_strlcat`](ft_strlcat.c)	-  returns the total length of the string it tried to create, i.e., the length of the destination string plus the length of the source.
- [`ft_strchr`](ft_strchr.c)	- returns a pointer to the first occurrence of the character in the string, or NULL if not found.
- [`ft_strrchr`](ft_strrchr.c)	- returns a pointer to the last occurrence of the character in the string, or NULL if not found.
- [`ft_strncmp`](ft_strncmp.c)	- returns an integer less than, equal to, or greater than zero if the first n characters of the strings are lexicographically less than, equal to, or greater than the second string.
- [`ft_memchr`](ft_memchr.c)	- returns a pointer to the first occurrence of the character in the memory area, or NULL if not found.

- [`ft_memcmp`](ft_memcmp.c)	- returns an integer less than, equal to, or greater than zero if the first n bytes of the memory areas are lexicographically less than, equal to, or greater than the second.
- [`ft_strnstr`](ft_strnstr.c)	- returns a pointer to the first occurrence of the substring within the string, or NULL if not found.
- [`ft_strdup`](ft_strdup.c)	- returns a newly allocated string that is a duplicate of the string passed as the parameter.

</details>

<br>

---

<br>

<details open>
<br>
  <summary style= "font-size:20px; font-weight:bold"> Functions from stdlib.h</summary>

- [`ft_atoi`](ft_atoi.c)	- returns an converted integer value of the string.
- [`ft_calloc`](ft_calloc.c)	-  returns a pointer to the allocated memory, with all its bytes set to 0.
</details>

<br>

---

<br>

<details open>
  <summary style= "font-size:20px; font-weight:bold"> Non-standard functions </summary>
<br>


- [`ft_substr`](ft_substr.c)	- returns a substring of the input string starting at a specified index and with a specified length.
- [`ft_strjoin`](ft_strjoin.c)	- returns a new string that concatenates two input strings.
- [`ft_strtrim`](ft_strtrim.c) - returns a new string with characters from the set removed from both ends of the input string.

</details>

<br>

---

<br>

<details open>
  <summary style= "font-size:20px; font-weight:bold"> Linked list functions </summary>
<br>

</details>
