#include <stdio.h>
/**
 * reset_to_98 - Modifies the value of an integer to 98.
 * @n: A pointer to an integer that will be modified.
 *
 * Description:
 * This function takes a pointer to an integer and updates the value
 * of the integer to 98. It does so by dereferencing the pointer and
 * assigning the value 98 to the memory location it points to.
 */
void reset_to_98(int *n)
{
    *n = 98;
}
