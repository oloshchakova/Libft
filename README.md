# Libft

===================================================================================
• isalpha 											
checks  for an alphabetic character; in the standard "C" locale,
              it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
              cales, there may be additional characters for which isalpha() is
              true—letters which are neither uppercase nor lowercase.

===================================================================================         
• isdigit 											
checks for a digit (0 through 9).

===================================================================================
• isalnum											
checks for an alphanumeric character; it is equivalent to (isal‐
              pha(c) || isdigit(c)).

===================================================================================            
• isascii											
checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.

===================================================================================
• isprint 											
checks for any printable character including space.

===================================================================================
• strlen 											
The strlen() function calculates the length of the string pointed to by
       s, excluding the terminating null byte ('\0').
       
===================================================================================
• memset											
NAME
       memset - fill memory with a constant byte

SYNOPSIS
       #include <string.h>

       void *memset(void *s, int c, size_t n);

DESCRIPTION
       The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.

===================================================================================
• bzero
NAME
       bzero, explicit_bzero - zero a byte string

SYNOPSIS
       #include <strings.h>

       void bzero(void *s, size_t n);

       #include <string.h>

       void explicit_bzero(void *s, size_t n);
DESCRIPTION
       The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.

       The  explicit_bzero()  function  performs the same task as bzero().  It
       differs from bzero() in that it guarantees that compiler  optimizations
       will  not  remove  the erase operation if the compiler deduces that the
       operation is "unnecessary".

RETURN VALUE
       None.

===================================================================================
• memcpy
NAME
       memcpy - copy memory area

SYNOPSIS
       #include <string.h>

       void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
       The  memcpy()  function  copies  n bytes from memory area src to memory
       area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
       memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.

===================================================================================
• memmove
NAME
       memmove - copy memory area

SYNOPSIS
       #include <string.h>

       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
       The  memmove()  function  copies n bytes from memory area src to memory
       area dest.  The memory areas may overlap: copying takes place as though
       the  bytes in src are first copied into a temporary array that does not
       overlap src or dest, and the bytes are then copied from  the  temporary
       array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.

===================================================================================
• strlcpy				C02_ex10						
NAME
     strlcpy, strlcat — size-bounded string copying and concatenation

LIBRARY
     Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
     #include <string.h>
     (See libbsd(7) for include usage.)

     size_t
     strlcpy(char *dst, const char *src, size_t size);

     size_t
     strlcat(char *dst, const char *src, size_t size);

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.  They are designed to be safer, more consistent, and less er‐
     ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.

     The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.

     Note, however, that if strlcat() traverses size characters without find‐
     ing a NUL, the length of the string is considered to be size and the des‐
     tination string will not be NUL-terminated (since there was no space for
     the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incor‐
     rect or that dst is not a proper “C” string).  The check exists to pre‐
     vent potential security problems in incorrect code.

===================================================================================
• strlcat			C03_ex05							
NAME
     strlcpy, strlcat — size-bounded string copying and concatenation

LIBRARY
     Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
     #include <string.h>
     (See libbsd(7) for include usage.)

     size_t
     strlcpy(char *dst, const char *src, size_t size);

     size_t
     strlcat(char *dst, const char *src, size_t size);

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.  They are designed to be safer, more consistent, and less er‐
     ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.

     The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.

     Note, however, that if strlcat() traverses size characters without find‐
     ing a NUL, the length of the string is considered to be size and the des‐
     tination string will not be NUL-terminated (since there was no space for
     the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incor‐
     rect or that dst is not a proper “C” string).  The check exists to pre‐
     vent potential security problems in incorrect code.
===================================================================================
• toupper +C02_ex07										
These functions convert lowercase letters to uppercase.

===================================================================================
• tolower +C02_ex08										
These functions convert uppercase letters to lowercase.

===================================================================================
• strchr											
• strrchr	
SYNOPSIS
       #include <string.h>

       char *strchr(const char *s, int c);

       char *strrchr(const char *s, int c);

DESCRIPTION
       The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.

       The strrchr() function returns a pointer to the last occurrence of  the
       character c in the string s.

       Here "character" means "byte"; these functions do not work with wide or
       multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character  or NULL if the character is not found.  The terminating null
       byte is considered part of the string, so that if  c  is  specified  as
       '\0', these functions return a pointer to the terminator.
===================================================================================
• strncmp +C03										

===================================================================================
• memchr

===================================================================================
• memcmp

===================================================================================
• strnstr											

===================================================================================
• atoi +C04_ex03										

===================================================================================
malloc():
• calloc											
• strdup											
===================================================================================
additional functions:
===================================================================================
ft_substr

Prototype            char *ft_substr(char const *s, unsigned int start, size_t len);
Turn in files        -
Parameters           s: The string from which to create the substring.
                     start: The start index of the substring in the string ’s’.
                     len: The maximum length of the substring.
Return value         The substring.
                     NULL if the allocation fails.
External functs.     malloc
Description          Allocates (with malloc(3)) and returns a substring from the string ’s’.
                     The substring begins at index ’start’ and is of maximum size ’len’.
===================================================================================
ft_strjoin

Prototype            char *ft_strjoin(char const *s1, char const *s2);
Turn in files        -
Parameters           s1: The prefix string.
                     s2: The suffix string.
Return value         The new string.
                     NULL if the allocation fails.
External functs.     malloc
Description          Allocates (with malloc(3)) and returns a new string, which is 
                     the result of the concatenation of ’s1’ and ’s2’.
===================================================================================
ft_strtrim

Prototype            char *ft_strtrim(char const *s1, char const *set);
Turn in files        -
Parameters           s1: The string to be trimmed.
                     set: The reference set of characters to trim.
Return value         The trimmed string. NULL if the allocation fails.
External functs.     malloc
Description          Allocates (with malloc(3)) and returns a copy of ’s1’ with 
                     the characters specified in ’set’ removed from the beginning 
                     and the end of the string.
===================================================================================
ft_split	

===================================================================================
ft_itoa

===================================================================================																	       
ft_strmapi
===================================================================================	
ft_striteri
===================================================================================	
ft_putchar_fd
===================================================================================	
ft_putstr_fd
===================================================================================	
ft_putendl_fd
===================================================================================	
ft_putnbr_fd
===================================================================================	
