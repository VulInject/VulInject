static const char *FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 **VAR6)
{
    const char *VAR7, *VAR8, *VAR9;
    size_t VAR10;
    char VAR11[128];
    VAR1 *VAR12;
    int VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR7 = VAR3;
    VAR10 = strcspn(VAR3, "");
    if (VAR4 && VAR10 && VAR7[VAR10] != '')
    {
        VAR7 = VAR4;
        VAR10 = strlen(VAR4);
    }
    VAR8 = VAR7 + VAR10;
    VAR12 = VAR2;
    VAR9 = VAR7;
    for (;;)
    {
        VAR13 = FUN2(VAR9, false);
        VAR10 = VAR13 < 0 ? 0 : VAR13;
        assert(VAR9 + VAR10 <= VAR8);
        if (!VAR10 || (VAR9 + VAR10 < VAR8 && VAR9[VAR10] != ''))
        {
            assert(VAR7 != VAR4);
            FUN3(VAR6, "", (int)(VAR8 - VAR7), VAR7);
            return NULL;
        }
        if (VAR10 >= sizeof(VAR11))
        {
            assert(VAR7 != VAR4);
            FUN3(VAR6, "", VAR9 != VAR7 || VAR9 + VAR10 != VAR8 ? "" : "", (int)VAR10, VAR9);
            return NULL;
        }
        if (VAR9 != VAR7)
        {
            VAR15 = FUN4(VAR12, VAR11, NULL, VAR7, VAR9 - 1, VAR6);
            if (!VAR15)
            {
                return NULL;
            }
            VAR12 = FUN5(VAR15);
            assert(VAR12);
        }
        memcpy(VAR11, VAR9, VAR10);
        VAR11[VAR10] = 0;
        VAR9 += VAR10;
        if (*VAR9 != '')
        {
            break;
        }
        VAR9++;
    }
    if (VAR7 == VAR4)
    {
        assert(!*VAR9);
        VAR9 = VAR3;
    }
    else
    {
        if (*VAR9 != '')
        {
            FUN3(VAR6, "", (int)(VAR9 - VAR7), VAR7);
            return NULL;
        }
        VAR9++;
    }
    VAR17 = FUN6();
    for (;;)
    {
        if (!*VAR9)
        {
            break;
        }
        else if (*VAR9 == '')
        {
            VAR9++;
            if (*VAR9 != '')
            {
                break;
            }
        }
        FUN7(VAR17, *VAR9++);
    }
    if (!FUN4(VAR12, VAR11, VAR17, VAR7, VAR8, VAR6))
    {
        return NULL;
    }
    return VAR9;
}