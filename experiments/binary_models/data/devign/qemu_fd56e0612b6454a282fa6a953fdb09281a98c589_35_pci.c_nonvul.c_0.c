static int FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, VAR5 **VAR6)
{
    uint16_t VAR7;
    uint8_t VAR8;
    VAR7 = FUN2(VAR2->VAR9.VAR10 + VAR3 + VAR11);
    VAR8 = (VAR7 & VAR12) >> 4;
    if (VAR8 != VAR13 && VAR8 != VAR14 && VAR8 != VAR15)
    {
        FUN3(VAR6, ""
                         "",
                   VAR8);
        return -VAR16;
    }
    if (!FUN4(FUN5(&VAR2->VAR9)))
    {
        VAR17 *VAR18 = FUN5(&VAR2->VAR9);
        VAR19 *VAR20;
        while (!FUN6(VAR18))
        {
            VAR20 = FUN7(VAR18);
            VAR18 = FUN5(VAR20);
        }
        if (FUN4(VAR18))
        {
            return 0;
        }
    }
    else if (FUN6(FUN5(&VAR2->VAR9)))
    {
        if (VAR8 == VAR13)
        {
            FUN8(VAR2, VAR3 + VAR11, VAR15 << 4, VAR12);
            if (VAR4 > VAR21)
            {
                FUN9(VAR2, VAR3 + VAR22, 0, ~0);
                FUN8(VAR2, VAR3 + VAR21, 0, ~0);
                FUN8(VAR2, VAR3 + VAR23, 0, ~0);
                if (VAR4 > VAR24)
                {
                    FUN9(VAR2, VAR3 + VAR24, 0, ~0);
                    FUN8(VAR2, VAR3 + VAR25, 0, ~0);
                    FUN8(VAR2, VAR3 + VAR26, 0, ~0);
                }
            }
        }
        else if (VAR8 == VAR14)
        {
            return 0;
        }
    }
    else
    {
        if (VAR8 == VAR15)
        {
            FUN8(VAR2, VAR3 + VAR11, VAR13 << 4, VAR12);
            FUN9(VAR2, VAR3 + VAR22, VAR27 | VAR28, ~0);
            FUN8(VAR2, VAR3 + VAR21, 0, ~0);
        }
        FUN8(VAR2, VAR3 + VAR23, FUN2(VAR2->VAR9.VAR10 + VAR3 + VAR23), VAR29 | VAR30);
    }
    if ((VAR7 & VAR31) == 0)
    {
        FUN8(VAR2, VAR3 + VAR11, 1, VAR31);
    }
    VAR3 = FUN10(&VAR2->VAR9, VAR32, VAR3, VAR4, VAR6);
    if (VAR3 < 0)
    {
        return VAR3;
    }
    VAR2->VAR9.VAR33.VAR34 = VAR3;
    return VAR3;
}