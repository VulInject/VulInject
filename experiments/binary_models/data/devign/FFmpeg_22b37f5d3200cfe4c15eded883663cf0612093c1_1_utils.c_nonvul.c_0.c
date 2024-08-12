int FUN1(char *VAR1, int VAR2, const char *VAR3, int VAR4)
{
    const char *VAR5;
    char *VAR6, VAR7[20];
    int VAR8, VAR9, VAR10, VAR11;
    VAR6 = VAR1;
    VAR5 = VAR3;
    VAR11 = 0;
    for (;;)
    {
        VAR10 = *VAR5++;
        if (VAR10 == '')
            break;
        if (VAR10 == '')
        {
            do
            {
                VAR8 = 0;
                while (FUN2(*VAR5))
                {
                    VAR8 = VAR8 * 10 + *VAR5++ - '';
                }
                VAR10 = *VAR5++;
            } while (FUN2(VAR10));
            switch (VAR10)
            {
            case '':
                goto VAR12;
            case '':
                if (VAR11)
                    goto VAR13;
                VAR11 = 1;
                snprintf(VAR7, sizeof(VAR7), "", VAR8, VAR4);
                VAR9 = strlen(VAR7);
                if ((VAR6 - VAR1 + VAR9) > VAR2 - 1)
                    goto VAR13;
                memcpy(VAR6, VAR7, VAR9);
                VAR6 += VAR9;
                break;
            default:
                goto VAR13;
            }
        }
        else
        {
        VAR12:
            if ((VAR6 - VAR1) < VAR2 - 1)
                *VAR6++ = VAR10;
        }
    }
    if (!VAR11)
        goto VAR13;
    *VAR6 = '';
    return 0;
VAR13:
    *VAR6 = '';
    return -1;
}