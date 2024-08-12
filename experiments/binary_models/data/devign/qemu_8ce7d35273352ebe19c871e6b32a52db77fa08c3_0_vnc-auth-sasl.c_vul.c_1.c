static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    char *VAR6 = malloc(VAR5 + 1);
    if (!VAR6)
    {
        FUN2("");
        FUN3(VAR2);
    }
    strncpy(VAR6, (char *)VAR4, VAR5);
    VAR6[VAR5] = '';
    FUN2("", VAR6, VAR2->VAR7.VAR8);
    if (FUN4(VAR2->VAR7.VAR8, VAR6, VAR5) == 0)
    {
        if (VAR2->VAR7.VAR8[VAR5] != '' && VAR2->VAR7.VAR8[VAR5] != '')
        {
            FUN2("", VAR2->VAR7.VAR8[VAR5]);
            FUN3(VAR2);
            return -1;
        }
    }
    else
    {
        char *VAR9 = strstr(VAR2->VAR7.VAR8, VAR6);
        FUN2("", VAR9);
        if (!VAR9)
        {
            FUN3(VAR2);
            return -1;
        }
        FUN2("", VAR9);
        if (VAR9[-1] != '' || (VAR9[VAR5] != '' && VAR9[VAR5] != ''))
        {
            FUN3(VAR2);
            return -1;
        }
    }
    free(VAR2->VAR7.VAR8);
    VAR2->VAR7.VAR8 = VAR6;
    FUN2("", VAR6);
    FUN5(VAR2, VAR10, 4);
    return 0;
}