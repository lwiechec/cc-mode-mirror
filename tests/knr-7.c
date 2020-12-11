int foo (i, j, k)
    int i;
    int j, k;
{
    return i;
}
/* Check for mismatching params */
int foo (i, j, k)
    int i;
int j, kk;
{
    return i;
}
