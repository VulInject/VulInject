void *FUN1(size_t VAR1)
{
    char *VAR2;
    VAR1 += 16;
    VAR2 = FUN2(VAR1);
    *(VAR3 *)VAR2 = VAR1;
    return VAR2 + 16;
}