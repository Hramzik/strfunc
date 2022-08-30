

#include "func.hpp"

size_t strlen (char *str) {

    assert (str != nullptr);

    size_t i = 0;

    while (str[i] != '\0') {

        i++;

    }

    return i;

}

char* strcpy (char *from, char *to) {

    assert (from != nullptr && to != nullptr);

    size_t len_from = strlen (from);
    for (size_t i = 0; i <= len_from; i++) {

        to[i] = from[i];
    }

    return to;
}

char* strchr (char *str, char chr) {

    assert (str != nullptr);

    size_t i  = 0;

    while (str[i] != '\0') {

        if (str[i] == chr) {

            return &str[i];
        }

        i++;
    }

    return nullptr;
}

char* strcat (char *mainstr, char *secondstr) {

    assert (mainstr != nullptr && secondstr != nullptr);

    char *mainstr_cpy = mainstr;
    mainstr_cpy += strlen (mainstr);
    
    while (*secondstr != '\0') {

        *mainstr_cpy++ = *secondstr++;
    }

    *mainstr_cpy = '\0';

    return mainstr;

}

size_t strcmp (char *str1, char *str2) {

    assert (str1 != nullptr && str2 != nullptr);

    size_t ind_str1 = 0;
    size_t ind_str2 = 0;

    while (str1[ind_str1] != '\0' && str2[ind_str2] != '\0' && str1[ind_str1] == str2[ind_str2]) {

        ind_str1++;
        ind_str2++;

    }

    if        (str1[ind_str1] == '\0' && str2[ind_str2] == '\0') { return 0 ; }
    else  if  (str1[ind_str1] > str2[ind_str2])                  { return 1 ; }
    else /*if (str1[ind_str1] < str2[ind_str2])*/                { return -1; }

}