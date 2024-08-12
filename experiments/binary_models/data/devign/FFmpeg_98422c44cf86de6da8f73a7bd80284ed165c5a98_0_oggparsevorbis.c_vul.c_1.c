FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const VAR3 *VAR6 = VAR4;
    const VAR3 *VAR7 = VAR4 + VAR5;
    unsigned VAR8, VAR9, VAR10;
    if (VAR5 < 8)
        return -1;
    VAR8 = FUN2(&VAR6);
    if (VAR7 - VAR6 < VAR8)
        return -1;
    VAR6 += VAR8;
    VAR9 = FUN2(&VAR6);
    while (VAR6 < VAR7 && VAR9 > 0)
    {
        const char *VAR11, *VAR12;
        int VAR13, VAR14;
        VAR8 = FUN2(&VAR6);
        if (VAR7 - VAR6 < VAR8)
            break;
        VAR11 = VAR6;
        VAR6 += VAR8;
        VAR9--;
        VAR12 = memchr(VAR11, '', VAR8);
        if (!VAR12)
            continue;
        VAR13 = VAR12 - VAR11;
        VAR14 = VAR8 - VAR13 - 1;
        VAR12++;
        if (VAR13 && VAR14)
        {
            char *VAR15, *VAR16;
            VAR15 = FUN3(VAR13 + 1);
            VAR16 = FUN3(VAR14 + 1);
            if (!VAR15 || !VAR16)
            {
                FUN4(&VAR15);
                FUN4(&VAR16);
                FUN5(VAR2, VAR17, "");
                continue;
            }
            for (VAR10 = 0; VAR10 < VAR13; VAR10++)
                VAR15[VAR10] = FUN6(VAR11[VAR10]);
            VAR15[VAR13] = 0;
            memcpy(VAR16, VAR12, VAR14);
            VAR16[VAR14] = 0;
            FUN7(&VAR2->VAR18, VAR15, VAR16);
            FUN4(&VAR15);
            FUN4(&VAR16);
        }
    }
    if (VAR6 != VAR7)
        FUN5(VAR2, VAR19, "", VAR7 - VAR6);
    if (VAR9 > 0)
        FUN5(VAR2, VAR19, "", VAR9);
    return 0;
}