int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    const char *VAR5;
    int64_t VAR6;
    struct tm VAR7 = {0};
    int VAR8;
    static const char *const VAR9[] = {
        "",
        "",
    };
    static const char *const VAR10[] = {
        "",
        "",
    };
    const char *VAR11;
    int VAR12, VAR13;
    char VAR14;
    int VAR15 = 0;
    time_t VAR16 = FUN2(0);
    VAR13 = strlen(VAR3);
    if (VAR13 > 0)
        VAR14 = VAR3[VAR13 - 1];
    else
        VAR14 = '';
    VAR12 = (VAR14 == '' || VAR14 == '');
    VAR5 = VAR3;
    VAR11 = NULL;
    if (!VAR4)
    {
        if (!FUN3(VAR3, "", VAR13))
        {
            *VAR2 = (VAR1)VAR16 * 1000000;
            return 0;
        }
        for (VAR8 = 0; VAR8 < FUN4(VAR9); VAR8++)
        {
            VAR11 = FUN5(VAR5, VAR9[VAR8], &VAR7);
            if (VAR11)
            {
                break;
            }
        }
        if (!VAR11)
        {
            if (VAR12)
            {
                VAR7 = *FUN6(&VAR16);
            }
            else
            {
                VAR7 = *FUN7(&VAR16);
            }
            VAR7.VAR17 = VAR7.VAR18 = VAR7.VAR19 = 0;
        }
        else
        {
            VAR5 = VAR11;
        }
        if (*VAR5 == '' || *VAR5 == '' || *VAR5 == '')
            VAR5++;
        for (VAR8 = 0; VAR8 < FUN4(VAR10); VAR8++)
        {
            VAR11 = FUN5(VAR5, VAR10[VAR8], &VAR7);
            if (VAR11)
            {
                break;
            }
        }
    }
    else
    {
        if (VAR5[0] == '')
        {
            VAR15 = 1;
            ++VAR5;
        }
        VAR11 = FUN5(VAR5, VAR10[0], &VAR7);
        if (!VAR11)
        {
            VAR7.VAR19 = FUN8(VAR5, (void *)&VAR11, 10);
            if (VAR11 == VAR5)
            {
                *VAR2 = VAR20;
                return FUN9(VAR21);
            }
            VAR7.VAR18 = 0;
            VAR7.VAR17 = 0;
        }
    }
    if (!VAR11)
    {
        *VAR2 = VAR20;
        return FUN9(VAR21);
    }
    if (VAR4)
    {
        VAR6 = VAR7.VAR17 * 3600 + VAR7.VAR18 * 60 + VAR7.VAR19;
    }
    else
    {
        VAR7.VAR22 = -1;
        if (VAR12)
        {
            VAR6 = FUN10(&VAR7);
        }
        else
        {
            VAR6 = FUN11(&VAR7);
        }
    }
    VAR6 *= 1000000;
    if (*VAR11 == '')
    {
        int VAR23, VAR24;
        VAR11++;
        for (VAR23 = 0, VAR24 = 100000; VAR24 >= 1; VAR24 /= 10, VAR11++)
        {
            if (!FUN12(*VAR11))
                break;
            VAR23 += VAR24 * (*VAR11 - '');
        }
        VAR6 += VAR23;
    }
    *VAR2 = VAR15 ? -VAR6 : VAR6;
    return 0;
}