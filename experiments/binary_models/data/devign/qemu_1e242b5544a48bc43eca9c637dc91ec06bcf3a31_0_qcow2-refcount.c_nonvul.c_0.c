int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    if (!VAR5)
    {
        return 0;
    }
    if (VAR3 & VAR11)
    {
        if (VAR4 < VAR7->VAR12)
        {
            return VAR11;
        }
    }
    VAR5 = FUN2(FUN3(VAR7, VAR4) + VAR5, VAR7->VAR12);
    VAR4 = FUN4(VAR7, VAR4);
    if ((VAR3 & VAR13) && VAR7->VAR14)
    {
        if (FUN5(VAR7->VAR15, VAR7->VAR14 * sizeof(VAR16)))
        {
            return VAR13;
        }
    }
    if ((VAR3 & VAR17) && VAR7->VAR18)
    {
        if (FUN5(VAR7->VAR19, VAR7->VAR18 * sizeof(VAR16)))
        {
            return VAR17;
        }
    }
    if ((VAR3 & VAR20) && VAR7->VAR21)
    {
        if (FUN5(VAR7->VAR22, VAR7->VAR21))
        {
            return VAR20;
        }
    }
    if ((VAR3 & VAR23) && VAR7->VAR24)
    {
        for (VAR9 = 0; VAR9 < VAR7->VAR25; VAR9++)
        {
            if (VAR7->VAR24[VAR9].VAR14 && FUN5(VAR7->VAR24[VAR9].VAR15, VAR7->VAR24[VAR9].VAR14 * sizeof(VAR16)))
            {
                return VAR23;
            }
        }
    }
    if ((VAR3 & VAR26) && VAR7->VAR27)
    {
        for (VAR9 = 0; VAR9 < VAR7->VAR14; VAR9++)
        {
            if ((VAR7->VAR27[VAR9] & VAR28) && FUN5(VAR7->VAR27[VAR9] & VAR28, VAR7->VAR12))
            {
                return VAR26;
            }
        }
    }
    if ((VAR3 & VAR29) && VAR7->VAR30)
    {
        for (VAR9 = 0; VAR9 < VAR7->VAR18; VAR9++)
        {
            if ((VAR7->VAR30[VAR9] & VAR31) && FUN5(VAR7->VAR30[VAR9] & VAR31, VAR7->VAR12))
            {
                return VAR29;
            }
        }
    }
    if ((VAR3 & VAR32) && VAR7->VAR24)
    {
        for (VAR9 = 0; VAR9 < VAR7->VAR25; VAR9++)
        {
            uint64_t VAR33 = VAR7->VAR24[VAR9].VAR15;
            uint32_t VAR34 = VAR7->VAR24[VAR9].VAR14;
            VAR16 *VAR35 = FUN6(VAR34 * sizeof(VAR16));
            int VAR36;
            VAR36 = FUN7(VAR2->VAR37, VAR33 / VAR38, (VAR39 *)VAR35, VAR34 * sizeof(VAR16) / VAR38);
            if (VAR36 < 0)
            {
                FUN8(VAR35);
                return VAR36;
            }
            for (VAR10 = 0; VAR10 < VAR34; VAR10++)
            {
                uint64_t VAR40 = FUN9(VAR35[VAR10]) & VAR28;
                if (VAR40 && FUN5(VAR40, VAR7->VAR12))
                {
                    FUN8(VAR35);
                    return VAR32;
                }
            }
            FUN8(VAR35);
        }
    }
    return 0;
}