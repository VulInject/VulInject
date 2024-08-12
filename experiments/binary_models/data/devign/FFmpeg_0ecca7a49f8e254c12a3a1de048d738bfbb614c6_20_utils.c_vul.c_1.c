int FUN1(const char *VAR1, const char *VAR2)
{
    const char *VAR3, *VAR4;
    char VAR5[32], *VAR6;
    if (!VAR1)
        return 0;
    VAR3 = strrchr(VAR1, '');
    if (VAR3)
    {
        VAR3++;
        VAR4 = VAR2;
        for (;;)
        {
            VAR6 = VAR5;
            while (*VAR4 != '' && *VAR4 != '')
                *VAR6++ = *VAR4++;
            *VAR6 = '';
            if (!FUN2(VAR5, VAR3))
                return 1;
            if (*VAR4 == '')
                break;
            VAR4++;
        }
    }
    return 0;
}