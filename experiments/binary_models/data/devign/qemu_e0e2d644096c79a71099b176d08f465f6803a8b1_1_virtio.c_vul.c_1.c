void FUN1(VAR1 *VAR2, unsigned int *VAR3, unsigned int *VAR4, unsigned VAR5, unsigned VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    unsigned int VAR9, VAR10;
    unsigned int VAR11, VAR12, VAR13;
    VAR14 *VAR15;
    MemoryRegionCache VAR16 = VAR17;
    int64_t VAR18 = 0;
    int VAR19;
    if (FUN2(!VAR2->VAR20.VAR21))
    {
        if (VAR3)
        {
            *VAR3 = 0;
        }
        if (VAR4)
        {
            *VAR4 = 0;
        }
        return;
    }
    FUN3();
    VAR10 = VAR2->VAR22;
    VAR11 = VAR12 = VAR13 = 0;
    VAR9 = VAR2->VAR20.VAR23;
    VAR15 = FUN4(&VAR2->VAR20.VAR15);
    if (VAR15->VAR21.VAR18 < VAR9 * sizeof(VAR24))
    {
        FUN5(VAR8, "");
        goto VAR25;
    }
    while ((VAR19 = FUN6(VAR2, VAR10)) > 0)
    {
        VAR26 *VAR27 = &VAR15->VAR21;
        unsigned int VAR28;
        VRingDesc VAR21;
        unsigned int VAR29;
        VAR28 = VAR11;
        if (!FUN7(VAR2, VAR10++, &VAR29))
        {
            goto VAR25;
        }
        FUN8(VAR8, &VAR21, VAR27, VAR29);
        if (VAR21.VAR30 & VAR31)
        {
            if (VAR21.VAR18 % sizeof(VAR24))
            {
                FUN5(VAR8, "");
                goto VAR25;
            }
            if (VAR28 >= VAR9)
            {
                FUN5(VAR8, "");
                goto VAR25;
            }
            VAR18 = FUN9(&VAR16, VAR8->VAR32, VAR21.VAR33, VAR21.VAR18, false);
            VAR27 = &VAR16;
            if (VAR18 < VAR21.VAR18)
            {
                FUN5(VAR8, "");
                goto VAR25;
            }
            VAR9 = VAR21.VAR18 / sizeof(VAR24);
            VAR28 = VAR29 = 0;
            FUN8(VAR8, &VAR21, VAR27, VAR29);
        }
        do
        {
            if (++VAR28 > VAR9)
            {
                FUN5(VAR8, "");
                goto VAR25;
            }
            if (VAR21.VAR30 & VAR34)
            {
                VAR12 += VAR21.VAR18;
            }
            else
            {
                VAR13 += VAR21.VAR18;
            }
            if (VAR12 >= VAR5 && VAR13 >= VAR6)
            {
                goto VAR35;
            }
            VAR19 = FUN10(VAR8, &VAR21, VAR27, VAR9, &VAR29);
        } while (VAR19 == VAR36);
        if (VAR19 == VAR37)
        {
            goto VAR25;
        }
        if (VAR27 == &VAR16)
        {
            FUN11(&VAR16);
            VAR11++;
        }
        else
        {
            VAR11 = VAR28;
        }
    }
    if (VAR19 < 0)
    {
        goto VAR25;
    }
VAR35:
    FUN11(&VAR16);
    if (VAR3)
    {
        *VAR3 = VAR12;
    }
    if (VAR4)
    {
        *VAR4 = VAR13;
    }
    FUN12();
    return;
VAR25:
    VAR12 = VAR13 = 0;
    goto VAR35;
}