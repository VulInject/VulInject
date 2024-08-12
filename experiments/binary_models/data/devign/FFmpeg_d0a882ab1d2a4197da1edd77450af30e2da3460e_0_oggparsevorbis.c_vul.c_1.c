FUN1(VAR1 *VAR2, VAR3 **VAR4, const VAR5 *VAR6, int VAR7)
{
    const VAR5 *VAR8 = VAR6;
    const VAR5 *VAR9 = VAR6 + VAR7;
    unsigned VAR10, VAR11;
    int VAR12;
    if (VAR7 < 8)
        return -1;
    VAR12 = FUN2(&VAR8);
    if (VAR9 - VAR8 - 4 < VAR12 || VAR12 < 0)
        return -1;
    VAR8 += VAR12;
    VAR10 = FUN2(&VAR8);
    while (VAR9 - VAR8 >= 4 && VAR10 > 0)
    {
        const char *VAR13, *VAR14;
        int VAR15, VAR16;
        VAR12 = FUN2(&VAR8);
        if (VAR9 - VAR8 < VAR12 || VAR12 < 0)
            break;
        VAR13 = VAR8;
        VAR8 += VAR12;
        VAR10--;
        VAR14 = memchr(VAR13, '', VAR12);
        if (!VAR14)
            continue;
        VAR15 = VAR14 - VAR13;
        VAR16 = VAR12 - VAR15 - 1;
        VAR14++;
        if (VAR15 && VAR16)
        {
            char *VAR17, *VAR18;
            VAR17 = FUN3(VAR15 + 1);
            VAR18 = FUN3(VAR16 + 1);
            if (!VAR17 || !VAR18)
            {
                FUN4(&VAR17);
                FUN5(VAR2, VAR19, "");
                continue;
            }
            for (VAR11 = 0; VAR11 < VAR15; VAR11++)
                VAR17[VAR11] = FUN6(VAR13[VAR11]);
            VAR17[VAR15] = 0;
            memcpy(VAR18, VAR14, VAR16);
            VAR18[VAR16] = 0;
            if (!strcmp(VAR17, ""))
            {
                int VAR20;
                char *VAR21 = FUN3(VAR16);
                if (!VAR21)
                {
                    FUN5(VAR2, VAR19, "");
                    continue;
                }
                if ((VAR20 = FUN7(VAR21, VAR18, VAR16)) > 0)
                    VAR20 = FUN8(VAR2, VAR21, VAR20);
                FUN4(&VAR21);
                if (VAR20 < 0)
                {
                    FUN5(VAR2, VAR19, "");
                    continue;
                }
            }
            else if (!FUN9(VAR2, VAR17, VAR18))
                FUN10(VAR4, VAR17, VAR18, VAR22 | VAR23);
        }
    }
    if (VAR8 != VAR9)
        FUN5(VAR2, VAR24, "", VAR9 - VAR8);
    if (VAR10 > 0)
        FUN5(VAR2, VAR24, "", VAR10);
    FUN11(VAR4, NULL, VAR25);
    return 0;