#include <stdio.h>
 
void print_recursion(int n, int i)
{
    if (n == i)
    {
        return;
    }
    printf("I love Recursion\n");
    print_recursion(n, i + 1);
}
 
int main()
{
    int n;
    scanf("%d", &n);
 
    print_recursion(n, 0);
 
    return 0;
}