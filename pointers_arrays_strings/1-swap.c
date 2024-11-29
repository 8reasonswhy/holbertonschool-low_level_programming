/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description:
 * This function takes two pointers to integers and swaps their values.
 * The value at the memory location pointed to by `a` is exchanged with
 * the value at the memory location pointed to by `b`. After the function
 * call, the values of `a` and `b` will be reversed.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
