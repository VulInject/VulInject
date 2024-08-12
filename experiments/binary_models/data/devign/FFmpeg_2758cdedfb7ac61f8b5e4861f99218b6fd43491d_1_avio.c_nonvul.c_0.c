const char *FUN1(void **VAR1, int VAR2)
{
    const VAR3 **VAR4 = *VAR1;
    VAR4 = VAR4 ? VAR4 + 1 : VAR5;
    *VAR1 = VAR4;
    if (!*VAR4)
    {
        *VAR1 = NULL;
        return NULL;
    }
    if ((VAR2 && (*VAR4)->VAR6) || (!VAR2 && (*VAR4)->VAR7))
        return (*VAR4)->VAR8;
    return FUN1(VAR1, VAR2);
}