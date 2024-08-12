static int FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4)
{
    uint16_t VAR5;
    uint8_t VAR6;
    VAR5 = FUN2(VAR2->VAR7.VAR8 + VAR3 + VAR9);
    VAR6 = (VAR5 & VAR10) >> 4;
    if (VAR6 != VAR11 && VAR6 != VAR12 && VAR6 != VAR13)
    {
        FUN3(""
                     "",
                     VAR6);
        return -VAR14;
    }
    if (!FUN4(VAR2->VAR7.VAR15))
    {
        VAR16 *VAR15 = VAR2->VAR7.VAR15;
        VAR17 *VAR18;
        while (!FUN5(VAR15))
        {
            VAR18 = FUN6(VAR15);
            VAR15 = VAR18->VAR15;
        }
        if (FUN4(VAR15))
        {
            return 0;
        }
    }
    else if (FUN5(VAR2->VAR7.VAR15))
    {
        if (VAR6 == VAR11)
        {
            FUN7(VAR2, VAR3 + VAR9, VAR13 << 4, VAR10);
            if (VAR4 > VAR19)
            {
                FUN8(VAR2, VAR3 + VAR20, 0, ~0);
                FUN7(VAR2, VAR3 + VAR19, 0, ~0);
                FUN7(VAR2, VAR3 + VAR21, 0, ~0);
                if (VAR4 > VAR22)
                {
                    FUN8(VAR2, VAR3 + VAR22, 0, ~0);
                    FUN7(VAR2, VAR3 + VAR23, 0, ~0);
                    FUN7(VAR2, VAR3 + VAR24, 0, ~0);
                }
            }
        }
        else if (VAR6 == VAR12)
        {
            return 0;
        }
    }
    else
    {
        if (VAR6 == VAR13)
        {
            FUN7(VAR2, VAR3 + VAR9, VAR11 << 4, VAR10);
            FUN8(VAR2, VAR3 + VAR20, VAR25 | VAR26, ~0);
            FUN7(VAR2, VAR3 + VAR19, 0, ~0);
        }
        FUN7(VAR2, VAR3 + VAR21, FUN2(VAR2->VAR7.VAR8 + VAR3 + VAR21), VAR27 | VAR28);
    }
    VAR3 = FUN9(&VAR2->VAR7, VAR29, VAR3, VAR4);
    if (VAR3 >= 0)
    {
        VAR2->VAR7.VAR30.VAR31 = VAR3;
    }
    return VAR3;
}