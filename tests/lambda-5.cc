#include <stdio.h>
#include <functional>

int main()
{
    PP A = { "Jim" };
    PP *a = &A;

    print(a->name, [=](const char *name) {
	printf("%s\n", name);
    });
    return 0;
}
