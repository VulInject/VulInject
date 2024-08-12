VAR1 *FUN1(VAR2 *VAR3, int VAR4, int *VAR5)
{
    AVProbeData VAR6 = *VAR3;
    VAR1 *VAR7 = NULL, *VAR8;
    int VAR9, VAR10 = 0;
    if (VAR6.VAR11 > 10 && FUN2(VAR6.VAR12, VAR13))
    {
        int VAR14 = FUN3(VAR6.VAR12);
        if (VAR6.VAR11 > VAR14 + 16)
        {
            VAR6.VAR12 += VAR14;
            VAR6.VAR11 -= VAR14;
        }
        VAR10 = 1;
    }
    VAR8 = NULL;
    while ((VAR7 = FUN4(VAR7)))
    {
        if (!VAR4 == !(VAR7->VAR15 & VAR16))
            continue;
        VAR9 = 0;
        if (VAR7->VAR17)
        {
            VAR9 = VAR7->FUN5(&VAR6);
        }
        else if (VAR7->VAR18)
        {
            if (FUN6(VAR6.VAR19, VAR7->VAR18))
            {
                VAR9 = 50;
            }
        }
        if (VAR9 > *VAR5)
        {
            *VAR5 = VAR9;
            VAR8 = VAR7;
        }
        else if (VAR9 == *VAR5)
            VAR8 = NULL;
    }
    if (!VAR8 && VAR4 && *VAR5 < VAR20 / 4)
    {
        while ((VAR8 = FUN4(VAR8)))
            if (VAR8->VAR18 && FUN6(VAR6.VAR19, VAR8->VAR18))
            {
                *VAR5 = VAR20 / 4;
                break;
            }
    }
    return VAR8;
}