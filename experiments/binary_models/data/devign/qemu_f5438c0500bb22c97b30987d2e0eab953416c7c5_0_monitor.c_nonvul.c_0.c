static int FUN1(char *VAR1, int VAR2, const char **VAR3)
{
    const char *VAR4;
    char *VAR5;
    int VAR6;
    VAR5 = VAR1;
    VAR4 = *VAR3;
    while (FUN2(*VAR4))
    {
        VAR4++;
    }
    if (*VAR4 == '')
    {
    VAR7:
        *VAR5 = '';
        *VAR3 = VAR4;
        return -1;
    }
    if (*VAR4 == '')
    {
        VAR4++;
        while (*VAR4 != '' && *VAR4 != '')
        {
            if (*VAR4 == '')
            {
                VAR4++;
                VAR6 = *VAR4++;
                switch (VAR6)
                {
                case '':
                    VAR6 = '';
                    break;
                case '':
                    VAR6 = '';
                    break;
                case '':
                case ''':
                case '':
                    break;
                default:
                    FUN3("", VAR6);
                    goto VAR7;
                }
                if ((VAR5 - VAR1) < VAR2 - 1)
                {
                    *VAR5++ = VAR6;
                }
            }
            else
            {
                if ((VAR5 - VAR1) < VAR2 - 1)
                {
                    *VAR5++ = *VAR4;
                }
                VAR4++;
            }
        }
        if (*VAR4 != '')
        {
            FUN3("");
            goto VAR7;
        }
        VAR4++;
    }
    else
    {
        while (*VAR4 != '' && !FUN2(*VAR4))
        {
            if ((VAR5 - VAR1) < VAR2 - 1)
            {
                *VAR5++ = *VAR4;
            }
            VAR4++;
        }
    }
    *VAR5 = '';
    *VAR3 = VAR4;
    return 0;
}