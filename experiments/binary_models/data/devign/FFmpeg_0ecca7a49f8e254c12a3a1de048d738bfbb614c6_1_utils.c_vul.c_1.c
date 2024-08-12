void *FUN1(void *VAR1, unsigned int *VAR2, unsigned int VAR3)
{
    if (VAR3 < *VAR2)
        return VAR1;
    *VAR2 = 17 * VAR3 / 16 + 32;
    return FUN2(VAR1, *VAR2);
}