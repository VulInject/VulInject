static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    int VAR6 = -1;
    uint64_t VAR7 = 0;
    VAR8 *VAR9;
    int VAR10, VAR11;
    VAR12 *VAR13 = VAR4->VAR13;
    ram_addr_t VAR14 = VAR4->VAR15 << VAR16;
    VAR9 = VAR13->VAR17 + VAR14;
    VAR10 = FUN2(VAR2->VAR18, VAR13->VAR14, VAR14, VAR19, &VAR7);
    if (VAR7)
    {
        VAR2->VAR20 += VAR7;
        VAR6 = 1;
    }
    if (VAR10 != VAR21)
    {
        if (VAR10 != VAR22)
        {
            if (VAR7 > 0)
            {
                VAR2->VAR23++;
            }
            else if (VAR7 == 0)
            {
                VAR2->VAR24++;
            }
        }
    }
    else
    {
        if (VAR13 != VAR2->VAR25)
        {
            FUN3(VAR2);
            VAR6 = FUN4(VAR2, VAR13, VAR14, VAR9);
            if (VAR6 == -1)
            {
                VAR7 = FUN5(VAR2, VAR13, VAR14 | VAR26);
                VAR11 = FUN6(VAR2->VAR18, VAR9, VAR19, FUN7());
                if (VAR11 > 0)
                {
                    VAR2->VAR20 += VAR7 + VAR11;
                    VAR2->VAR23++;
                    VAR6 = 1;
                }
                else
                {
                    FUN8(VAR2->VAR18, VAR11);
                    FUN9("");
                }
            }
            if (VAR6 > 0)
            {
                FUN10(VAR13->VAR27, VAR14, VAR6);
            }
        }
        else
        {
            VAR6 = FUN4(VAR2, VAR13, VAR14, VAR9);
            if (VAR6 == -1)
            {
                VAR6 = FUN11(VAR2, VAR13, VAR14);
            }
            else
            {
                FUN10(VAR13->VAR27, VAR14, VAR6);
            }
        }
    }
    return VAR6;
}