void FUN1(void *VAR1)
{
    if (VAR1)
        free((char *)VAR1 - ((char *)VAR1)[-1]);
    FUN2(VAR1);
    free(VAR1);
}