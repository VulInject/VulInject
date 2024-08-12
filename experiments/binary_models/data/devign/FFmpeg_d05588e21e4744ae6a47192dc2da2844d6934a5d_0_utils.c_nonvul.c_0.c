VAR1 *FUN1(VAR2 *VAR3, int VAR4, int *VAR5)
{
    AVProbeData VAR6 = *VAR3;
    VAR1 *VAR7 = NULL, *VAR8;
    int VAR9, VAR10 = 0, VAR11 = 0;
    const static uint8_t VAR12[VAR13];
    if (!VAR6.VAR14)
        VAR6.VAR14 = VAR12;
    if (VAR6.VAR15 > 10 && FUN2(VAR6.VAR14, VAR16))
    {
        int VAR17 = FUN3(VAR6.VAR14);
        if (VAR6.VAR15 > VAR17 + 16)
        {
            VAR6.VAR14 += VAR17;
            VAR6.VAR15 -= VAR17;
        }
        else if (VAR17 >= VAR18)
        {
            VAR10 = 2;
        }
        else
            VAR10 = 1;
    }
    VAR8 = NULL;
    while ((VAR7 = FUN4(VAR7)))
    {
        if (!VAR4 == !(VAR7->VAR19 & VAR20))
            continue;
        VAR9 = 0;
        if (VAR7->VAR21)
        {
            VAR9 = VAR7->FUN5(&VAR6);
            if (VAR7->VAR22 && FUN6(VAR6.VAR23, VAR7->VAR22))
                VAR9 = FUN7(VAR9, VAR10 ? VAR24 / 2 - 1 : 1);
        }
        else if (VAR7->VAR22)
        {
            if (FUN6(VAR6.VAR23, VAR7->VAR22))
                VAR9 = VAR24;
        }
        if (VAR9 > VAR11)
        {
            VAR11 = VAR9;
            VAR8 = VAR7;
        }
        else if (VAR9 == VAR11)
            VAR8 = NULL;
    }
    if (VAR10 == 1)
        VAR11 = FUN8(VAR24 / 2 - 1, VAR11);
    *VAR5 = VAR11;
    return VAR8;
}