VAR1 *FUN1(VAR2 *VAR3, int VAR4, int *VAR5)
{
    AVProbeData VAR6 = *VAR3;
    VAR1 *VAR7 = NULL, *VAR8;
    int VAR9, VAR10 = 0, VAR11 = 0;
    if (VAR6.VAR12 > 10 && FUN2(VAR6.VAR13, VAR14))
    {
        int VAR15 = FUN3(VAR6.VAR13);
        if (VAR6.VAR12 > VAR15 + 16)
        {
            VAR6.VAR13 += VAR15;
            VAR6.VAR12 -= VAR15;
        }
        else
            VAR10 = 1;
    }
    VAR8 = NULL;
    while ((VAR7 = FUN4(VAR7)))
    {
        if (!VAR4 == !(VAR7->VAR16 & VAR17))
            continue;
        VAR9 = 0;
        if (VAR7->VAR18)
        {
            VAR9 = VAR7->FUN5(&VAR6);
            if (VAR7->VAR19 && FUN6(VAR6.VAR20, VAR7->VAR19))
                VAR9 = FUN7(VAR9, VAR10 ? VAR21 / 4 - 1 : 1);
        }
        else if (VAR7->VAR19)
        {
            if (FUN6(VAR6.VAR20, VAR7->VAR19))
            {
                VAR9 = 50;
            }
        }
        if (VAR9 > VAR11)
        {
            VAR11 = VAR9;
            VAR8 = VAR7;
        }
        else if (VAR9 == VAR11)
            VAR8 = NULL;
    }
    *VAR5 = VAR11;
    return VAR8;