static int FUN1(const void *VAR1, const void *VAR2)
{
    int VAR3 = *(const int *)VAR1;
    int VAR4 = *(const int *)VAR2;
    return ((VAR3 > VAR4) - (VAR3 < VAR4));
}