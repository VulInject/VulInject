int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR7->VAR10 & ~VAR3;
    int VAR11, VAR12;
    if (!VAR5)
    {
        return 0;
    }
    if (VAR9 & VAR13)
    {
        if (VAR4 < VAR7->VAR14)
        {
            return VAR13;
        }
    }
    VAR5 = FUN2(FUN3(VAR7, VAR4) + VAR5, VAR7->VAR14);
    VAR4 = FUN4(VAR7, VAR4);
    if ((VAR9 & VAR15) && VAR7->VAR16)
    {
        if (FUN5(VAR7->VAR17, VAR7->VAR16 * sizeof(VAR18)))
        {
            return VAR15;
        }
    }
    if ((VAR9 & VAR19) && VAR7->VAR20)
    {
        if (FUN5(VAR7->VAR21, VAR7->VAR20 * sizeof(VAR18)))
        {
            return VAR19;
        }
    }
    if ((VAR9 & VAR22) && VAR7->VAR23)
    {
        if (FUN5(VAR7->VAR24, VAR7->VAR23))
        {
            return VAR22;
        }
    }
    if ((VAR9 & VAR25) && VAR7->VAR26)
    {
        for (VAR11 = 0; VAR11 < VAR7->VAR27; VAR11++)
        {
            if (VAR7->VAR26[VAR11].VAR16 && FUN5(VAR7->VAR26[VAR11].VAR17, VAR7->VAR26[VAR11].VAR16 * sizeof(VAR18)))
            {
                return VAR25;
            }
        }
    }
    if ((VAR9 & VAR28) && VAR7->VAR29)
    {
        for (VAR11 = 0; VAR11 < VAR7->VAR16; VAR11++)
        {
            if ((VAR7->VAR29[VAR11] & VAR30) && FUN5(VAR7->VAR29[VAR11] & VAR30, VAR7->VAR14))
            {
                return VAR28;
            }
        }
    }
    if ((VAR9 & VAR31) && VAR7->VAR32)
    {
        for (VAR11 = 0; VAR11 < VAR7->VAR20; VAR11++)
        {
            if ((VAR7->VAR32[VAR11] & VAR33) && FUN5(VAR7->VAR32[VAR11] & VAR33, VAR7->VAR14))
            {
                return VAR31;
            }
        }
    }
    if ((VAR9 & VAR34) && VAR7->VAR26)
    {
        for (VAR11 = 0; VAR11 < VAR7->VAR27; VAR11++)
        {
            uint64_t VAR35 = VAR7->VAR26[VAR11].VAR17;
            uint32_t VAR36 = VAR7->VAR26[VAR11].VAR16;
            uint64_t VAR37 = VAR36 * sizeof(VAR18);
            VAR18 *VAR38 = FUN6(VAR37);
            int VAR39;
            VAR39 = FUN7(VAR2->VAR40, VAR35, VAR38, VAR37);
            if (VAR39 < 0)
            {
                FUN8(VAR38);
                return VAR39;
            }
            for (VAR12 = 0; VAR12 < VAR36; VAR12++)
            {
                uint64_t VAR41 = FUN9(VAR38[VAR12]) & VAR30;
                if (VAR41 && FUN5(VAR41, VAR7->VAR14))
                {
                    FUN8(VAR38);
                    return VAR34;
                }
            }
            FUN8(VAR38);
        }
    }
    return 0;
}