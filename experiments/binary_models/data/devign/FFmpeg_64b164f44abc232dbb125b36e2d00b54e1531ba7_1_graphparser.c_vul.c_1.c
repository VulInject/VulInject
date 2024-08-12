static VAR1 *FUN1(const char **VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    char *VAR8 = NULL;
    char *VAR9 = FUN2(VAR2);
    if (**VAR2 == '')
    {
        (*VAR2)++;
        VAR8 = FUN2(VAR2);
    }
    return FUN3(VAR4, VAR5, VAR9, VAR8, VAR7);
}