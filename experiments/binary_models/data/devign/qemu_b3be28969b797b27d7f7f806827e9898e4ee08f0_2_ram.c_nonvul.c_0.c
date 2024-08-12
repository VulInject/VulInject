static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, VAR6 *VAR7)
{
    int VAR8 = -1;
    uint64_t VAR9;
    VAR10 *VAR11;
    int VAR12;
    VAR13 *VAR14 = VAR4->VAR14;
    ram_addr_t VAR15 = VAR4->VAR15;
    VAR11 = VAR14->VAR16 + VAR15;
    VAR9 = 0;
    VAR12 = FUN2(VAR2, VAR14->VAR15, VAR15, VAR17, &VAR9);
    if (VAR9)
    {
        *VAR7 += VAR9;
        VAR8 = 1;
    }
    if (VAR14 == VAR18)
    {
        VAR15 |= VAR19;
    }
    if (VAR12 != VAR20)
    {
        if (VAR12 != VAR21)
        {
            if (VAR9 > 0)
            {
                VAR22.VAR23++;
            }
            else if (VAR9 == 0)
            {
                VAR22.VAR24++;
            }
        }
    }
    else
    {
        if (VAR14 != VAR18)
        {
            FUN3(VAR2);
            VAR8 = FUN4(VAR2, VAR14, VAR15, VAR11, VAR7);
            if (VAR8 == -1)
            {
                FUN5(&VAR25[0], VAR14, VAR15);
                VAR9 = FUN6(&VAR25[0]);
                if (VAR9 > 0)
                {
                    VAR22.VAR23++;
                    FUN7(VAR2, VAR25[0].VAR26);
                    *VAR7 += VAR9;
                    VAR8 = 1;
                }
            }
        }
        else
        {
            VAR8 = FUN4(VAR2, VAR14, VAR15, VAR11, VAR7);
            if (VAR8 == -1)
            {
                VAR8 = FUN8(VAR2, VAR14, VAR15, VAR7);
            }
        }
    }
    return VAR8;
}