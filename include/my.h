/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#ifndef MY_H_
    #define MY_H_
    
    #define UNUSED __attribute__((unused))

    ////////////////////////////////////////////////////////////
    /// \brief Write a char in the standard output
    ///
    /// \param c char to write
    ///
    ////////////////////////////////////////////////////////////
    void my_putchar(char c);

    ////////////////////////////////////////////////////////////
    /// \brief Write an int array in the standard output
    ///
    /// \param tab  int array
    /// \param size size of the int array
    ///
    ////////////////////////////////////////////////////////////
    void my_sort_int_array(int *tab, int size);

    ////////////////////////////////////////////////////////////
    /// \brief Swap to int
    ///
    /// \param a  first int
    /// \param b  second int
    ///
    ////////////////////////////////////////////////////////////
    void my_swap(int *a, int *b);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a number is negative
    ///
    /// \param nb number to check
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int my_isneg(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Write a number in the standard output
    ///
    /// \param nb number to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int my_put_nbr(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Write a string in the standard output
    ///
    /// \param str string to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int my_putstr(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Get the lenth of a string
    ///
    /// \param str string to check
    ///
    /// \return Length of the string
    ///
    ////////////////////////////////////////////////////////////
    int my_strlen(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Get a number from a string
    ///
    /// \param str string to check
    ///
    /// \return Number from the string
    ///
    ////////////////////////////////////////////////////////////
    int my_getnbr(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Get a number at a given power recursively
    ///
    /// \param nb number
    /// \param power power
    ///
    /// \return Number at power given
    ///
    ////////////////////////////////////////////////////////////
    int my_compute_power_rec(int nb, int power);

    ////////////////////////////////////////////////////////////
    /// \brief Get lenth of an int
    ///
    /// \param x number to check
    ///
    /// \return Length of the int
    ///
    ////////////////////////////////////////////////////////////
    int my_intlen(int x);

    ////////////////////////////////////////////////////////////
    /// \brief Get the square root of an int
    ///
    /// \param nb number to check
    ///
    /// \return Square root of the argument
    ///
    ////////////////////////////////////////////////////////////
    int my_compute_square_root(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a number is prime
    ///
    /// \param nb number to check
    ///
    /// \return 1 if is prime, 0 otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_is_prime(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Get the first superior prime number
    ///
    /// \param nb number to check
    ///
    /// \return First prime number superior to the argument
    ///
    ////////////////////////////////////////////////////////////
    int my_find_prime_sup(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Compare two string
    ///
    /// \param s1 string to check
    /// \param s2 string to check
    ///
    /// \return 0 if equal, difference between otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_strcmp(char const *s1, char const *s2);

    ////////////////////////////////////////////////////////////
    /// \brief Compare firsts characters of two string
    ///
    /// \param s1 string to check
    /// \param s2 string to check
    /// \param n  number of characters to compare
    ///
    /// \return 0 if equal, difference between otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_strncmp(char const *s1, char const *s2, int n);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain only lower characters
    ///
    /// \param str string to check
    ///
    /// \return 0 if contains only lower characters, 1 otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_str_islower(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain only numbers
    ///
    /// \param str string to check
    ///
    /// \return 0 if contains only numbers, 1 otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_str_isnum(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain only printable characters
    ///
    /// \param str string to check
    ///
    /// \return 0 if contains only printable characters, 1 otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_str_isprintable(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain only upper characters
    ///
    /// \param str string to check
    ///
    /// \return 0 if contains only upper characters, 1 otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_str_isupper(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Show memory allocations
    ///
    /// \param str  string to check
    /// \param size number of place to check
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int my_showmem(char const *str, int size);

    ////////////////////////////////////////////////////////////
    /// \brief Write a string in the standard output
    ///
    /// \param str  string to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int my_showstr(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string contain only alphanumeric characters
    ///
    /// \param str string to check
    ///
    /// \return 0 if contains only alphanumeric characters, 1 otherwise
    ///
    ////////////////////////////////////////////////////////////
    int my_str_isalpha(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Write a string array in the standard output
    ///
    /// \param tab array to write
    ///
    /// \return 0
    ///
    ////////////////////////////////////////////////////////////
    int my_show_word_array(char * const *tab);

    ////////////////////////////////////////////////////////////
    /// \brief Get the size of a string array
    ///
    /// \param str array to check
    ///
    /// \return Length of the array given in argument
    ///
    ////////////////////////////////////////////////////////////
    int my_strarraylen(char **str);

    ////////////////////////////////////////////////////////////
    /// \brief Copy a string into an other string
    ///
    /// \param dest destination string
    /// \param src  source string
    ///
    /// \return Destination string with copied source string
    ///
    ////////////////////////////////////////////////////////////
    char *my_strcpy(char *dest, char const *src);

    ////////////////////////////////////////////////////////////
    /// \brief Copy firsts characters of a string into an other string
    ///
    /// \param dest destination string
    /// \param src  source string
    /// \param n    number of characters to copy
    ///
    /// \return Destination string with copied source string
    ///
    ////////////////////////////////////////////////////////////
    char *my_strncpy(char *dest, char const *src, int n);

    ////////////////////////////////////////////////////////////
    /// \brief Reverse a string
    ///
    /// \param str string to reverse
    ///
    /// \return String reverse
    ///
    ////////////////////////////////////////////////////////////
    char *my_revstr(char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Find a string into an other string
    ///
    /// \param str      base string
    /// \param to_find  string to find
    ///
    /// \return NULL if not found, string from to_find otherwise
    ///
    ////////////////////////////////////////////////////////////
    char *my_strstr(char *str, char const *to_find);

    ////////////////////////////////////////////////////////////
    /// \brief Set a string to upper case
    ///
    /// \param str base string
    ///
    /// \return String set to upper case
    ///
    ////////////////////////////////////////////////////////////
    char *my_strupcase(char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Set a string to lower case
    ///
    /// \param str base string
    ///
    /// \return String set to lower case
    ///
    ////////////////////////////////////////////////////////////
    char *my_strlowcase(char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Set a string to upper case
    ///
    /// \param str base string
    ///
    /// \return String set to upper case
    ///
    ////////////////////////////////////////////////////////////
    char *my_strcapitalize(char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Concat a string into an other string
    ///
    /// \param dest destination string
    /// \param src  source string
    ///
    /// \return Destination string with copied source string
    ///
    ////////////////////////////////////////////////////////////
    char *my_strcat(char *dest, char const *src);

    ////////////////////////////////////////////////////////////
    /// \brief Concat a string into an other string on n characters
    ///
    /// \param dest destination string
    /// \param src  source string
    /// \param nb   nb of characters to check
    ///
    /// \return Destination string with copied source string on n characters
    ///
    ////////////////////////////////////////////////////////////
    char *my_strncat(char *dest, char const *src, int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Make a copy of a string
    ///
    /// \param str Copy the string
    ///
    /// \return String copy
    ///
    ////////////////////////////////////////////////////////////
    char *my_strdup(char const *str);

    ////////////////////////////////////////////////////////////
    /// \brief Concat three strings
    ///
    /// \param before first string to concat
    /// \param mid    second string to concat
    /// \param after  third string to concat
    ///
    /// \return Concatenated string
    ///
    ////////////////////////////////////////////////////////////
    char *concat(char *before, char *mid, char *after);

    ////////////////////////////////////////////////////////////
    /// \brief Change a number into a strings
    //
    /// \param nb number to change
    ///
    /// \return String of the number
    ///
    ////////////////////////////////////////////////////////////
    char *inttochar(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Turn a string into an array
    ///
    /// \param str        string to transform
    /// \param separator  separtor of the string
    ///
    /// \return Array of string
    ///
    ////////////////////////////////////////////////////////////
    char **my_str_to_word_array(char *str, char separator);

#endif
