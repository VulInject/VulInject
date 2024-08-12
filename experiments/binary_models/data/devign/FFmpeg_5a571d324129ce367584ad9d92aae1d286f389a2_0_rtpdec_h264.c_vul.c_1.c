static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    const char *VAR11 = VAR6;
    if (VAR3 < 0)
        return 0;
    VAR8 = VAR2->VAR12[VAR3];
    VAR10 = VAR8->VAR10;
    assert(VAR5->VAR13 == VAR14);
    if (FUN2(VAR11, "", &VAR11))
    {
        char VAR15[50];
        char *VAR16 = VAR15;
        while (*VAR11 && *VAR11 == '')
            VAR11++;
        while (*VAR11 && *VAR11 != '')
            VAR11++;
        while (*VAR11 && *VAR11 == '')
            VAR11++;
        while (*VAR11 && *VAR11 != '' && (VAR16 - VAR15) < sizeof(VAR15) - 1)
        {
            *VAR16++ = *VAR11++;
        }
        *VAR16 = '';
        VAR10->VAR17 = FUN3(VAR15);
        VAR10->VAR18 = FUN3(VAR11 + 1);
        VAR10->VAR19 = VAR20;
    }
    else if (FUN2(VAR11, "", &VAR11))
    {
        return FUN4(VAR8, VAR5, VAR11, VAR21);
    }
    else if (FUN2(VAR11, "", &VAR11))
    {
    }
    return 0;
}