int FUN1(const char *VAR1, int *VAR2, int *VAR3, unsigned int *VAR4, unsigned int *VAR5)
{
    const char *VAR6;
    char *VAR7;
    unsigned long VAR8;
    unsigned long VAR9 = 0, VAR10 = 0;
    unsigned int VAR11 = 0;
    unsigned int VAR12 = 0;
    VAR6 = VAR1;
    VAR8 = FUN2(VAR6, &VAR7, 16);
    if (VAR7 == VAR6)
        return -1;
    if (*VAR7 == '')
    {
        VAR10 = VAR8;
        VAR6 = VAR7 + 1;
        VAR8 = FUN2(VAR6, &VAR7, 16);
        if (VAR7 == VAR6)
            return -1;
        if (*VAR7 == '')
        {
            VAR9 = VAR10;
            VAR10 = VAR8;
            VAR6 = VAR7 + 1;
            VAR8 = FUN2(VAR6, &VAR7, 16);
            if (VAR7 == VAR6)
                return -1;
        }
    }
    VAR11 = VAR8;
    if (VAR5 != NULL)
    {
        if (*VAR7 != '')
            return -1;
        VAR6 = VAR7 + 1;
        VAR8 = FUN2(VAR6, &VAR7, 16);
        if (VAR7 == VAR6)
            return -1;
        VAR12 = VAR8;
    }
    if (VAR9 > 0xffff || VAR10 > 0xff || VAR11 > 0x1f || VAR12 > 7)
        return -1;
    if (*VAR7)
        return -1;
    *VAR2 = VAR9;
    *VAR3 = VAR10;
    *VAR4 = VAR11;
    if (VAR5 != NULL)
        *VAR5 = VAR12;
    return 0;
}