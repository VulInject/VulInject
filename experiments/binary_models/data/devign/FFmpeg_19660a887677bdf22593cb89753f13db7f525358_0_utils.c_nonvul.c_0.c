void FUN1(char *VAR1, int VAR2, char *VAR3, int VAR4, char *VAR5, int VAR6, int *VAR7, char *VAR8, int VAR9, const char *VAR10)
{
    const char *VAR11, *VAR12, *VAR13, *VAR14, *VAR15, *VAR16, *VAR17;
    if (VAR7)
        *VAR7 = -1;
    if (VAR2 > 0)
        VAR1[0] = 0;
    if (VAR4 > 0)
        VAR3[0] = 0;
    if (VAR6 > 0)
        VAR5[0] = 0;
    if (VAR9 > 0)
        VAR8[0] = 0;
    if ((VAR11 = strchr(VAR10, '')))
    {
        FUN2(VAR1, VAR10, FUN3(VAR2, VAR11 + 1 - VAR10));
        VAR11++;
        if (*VAR11 == '')
            VAR11++;
        if (*VAR11 == '')
            VAR11++;
    }
    else
    {
        FUN2(VAR8, VAR10, VAR9);
        return;
    }
    VAR12 = strchr(VAR11, '');
    VAR13 = strchr(VAR11, '');
    if (!VAR12)
        VAR12 = VAR13;
    else if (VAR12 && VAR13)
        VAR12 = FUN3(VAR12, VAR13);
    if (VAR12)
        FUN2(VAR8, VAR12, VAR9);
    else
        VAR12 = &VAR11[strlen(VAR11)];
    if (VAR12 != VAR11)
    {
        VAR15 = VAR11;
        while ((VAR14 = strchr(VAR11, '')) && VAR14 < VAR12)
        {
            FUN2(VAR3, VAR15, FUN3(VAR4, VAR14 + 1 - VAR15));
            VAR11 = VAR14 + 1;
        }
        if (*VAR11 == '' && (VAR17 = strchr(VAR11, '')) && VAR17 < VAR12)
        {
            FUN2(VAR5, VAR11 + 1, FUN3(VAR6, VAR17 - VAR11));
            if (VAR17[1] == '' && VAR7)
                *VAR7 = FUN4(VAR17 + 2);
        }
        else if ((VAR16 = strchr(VAR11, '')) && VAR16 < VAR12)
        {
            FUN2(VAR5, VAR11, FUN3(VAR16 + 1 - VAR11, VAR6));
            if (VAR7)
                *VAR7 = FUN4(VAR16 + 1);
        }
        else
            FUN2(VAR5, VAR11, FUN3(VAR12 + 1 - VAR11, VAR6));
    }
}