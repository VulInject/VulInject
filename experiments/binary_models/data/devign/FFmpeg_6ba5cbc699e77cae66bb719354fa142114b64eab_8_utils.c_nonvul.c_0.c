void FUN1(char *VAR1, int VAR2, char *VAR3, int VAR4, char *VAR5, int VAR6, int *VAR7, char *VAR8, int VAR9, const char *VAR10)
{
    const char *VAR11;
    char *VAR12;
    int VAR13;
    VAR13 = -1;
    VAR11 = VAR10;
    VAR12 = VAR1;
    while (*VAR11 != '' && *VAR11 != '')
    {
        if ((VAR12 - VAR1) < VAR2 - 1)
            *VAR12++ = *VAR11;
        VAR11++;
    }
    if (VAR2 > 0)
        *VAR12 = '';
    if (VAR4 > 0)
        VAR3[0] = '';
    if (*VAR11 == '')
    {
        if (VAR2 > 0)
            VAR1[0] = '';
        if (VAR6 > 0)
            VAR5[0] = '';
        VAR11 = VAR10;
    }
    else
    {
        char *VAR14, *VAR15;
        VAR11++;
        if (*VAR11 == '')
            VAR11++;
        if (*VAR11 == '')
            VAR11++;
        VAR14 = strchr(VAR11, '');
        VAR15 = strchr(VAR11, '');
        if (VAR14 && VAR15 && VAR14 > VAR15)
            VAR14 = NULL;
        VAR12 = VAR14 ? VAR3 : VAR5;
        while ((VAR14 || *VAR11 != '') && *VAR11 != '' && *VAR11 != '' && *VAR11 != '')
        {
            if (*VAR11 == '')
            {
                if (VAR4 > 0)
                    *VAR12 = '';
                VAR12 = VAR5;
                VAR14 = NULL;
            }
            else if (!VAR14)
            {
                if ((VAR12 - VAR5) < VAR6 - 1)
                    *VAR12++ = *VAR11;
            }
            else
            {
                if ((VAR12 - VAR3) < VAR4 - 1)
                    *VAR12++ = *VAR11;
            }
            VAR11++;
        }
        if (VAR6 > 0)
            *VAR12 = '';
        if (*VAR11 == '')
        {
            VAR11++;
            VAR13 = FUN2(VAR11, (char **)&VAR11, 10);
        }
    }
    if (VAR7)
        *VAR7 = VAR13;
    FUN3(VAR8, VAR9, VAR11);
}