#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH 6

int main(void)
{
    string names[ARRAY_LENGTH] = {"Tomas", "David", "Maggie", "Julia", "Peter", "Ruby"};

    string get_user_string = get_string("String: ");

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        // if (names[i] == get_user_string) would not work to compare strings
        // Have to use strcmp(str1, str2) from string.h
        // if Return value < 0 then it indicates str1 is less than str2.
        // if Return value > 0 then it indicates str2 is less than str1.
        // if Return value = 0 then it indicates str1 is equal to str2.
       
        if (strcmp(names[i], get_user_string) == 0)
        {
            printf ("Found!\n");
            return 0;
        }
    }

    printf ("Not found!\n");
    return 1;
}