int FUN1(VAR1 **VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6;
    const char *VAR7;
    char VAR8[128], *VAR9;
    VAR7 = VAR3;
    VAR9 = VAR8;
    while (*VAR7 != '' && *VAR7 != '')
    {
        if (!FUN2(*VAR7))
            goto VAR10;
        if ((VAR9 - VAR8) < sizeof(VAR8) - 1)
            *VAR9++ = *VAR7;
        VAR7++;
    }
    if (*VAR7 == '' || (VAR9 - VAR8) <= 1)
    {
    VAR10:
        strcpy(VAR8, "");
    }
    else
    {
        *VAR9 = '';
    }
    VAR6 = VAR11;
    while (VAR6 != NULL)
    {
        if (!strcmp(VAR8, VAR6->VAR12))
            return FUN3(VAR2, VAR6, VAR3, VAR4);
        VAR6 = VAR6->VAR13;
    }
    *VAR2 = NULL;
    return FUN4(VAR14);
}