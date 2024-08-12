static bool FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, VAR8 *VAR9, int *VAR10, VAR11 *VAR12, VAR13 *VAR14, VAR15 *VAR16)
{
    if (VAR5 == VAR17 || VAR5 == VAR18)
    {
        if (FUN2(VAR2, VAR19))
        {
            hwaddr VAR20;
            int VAR21;
            int VAR22;
            VAR22 = FUN1(VAR2, VAR3, VAR4, FUN3(VAR5), &VAR20, VAR9, VAR10, VAR12, VAR14, VAR16);
            if (VAR22 || FUN4(VAR2, VAR23))
            {
                *VAR7 = VAR20;
                return VAR22;
            }
            VAR22 = FUN5(VAR2, VAR20, VAR4, VAR23, VAR7, VAR9, &VAR21, VAR12, VAR14, VAR16);
            VAR16->VAR24 = VAR20;
            *VAR10 &= VAR21;
            return VAR22;
        }
        else
        {
            VAR5 = FUN3(VAR5);
        }
    }
    VAR9->VAR25 = FUN6(VAR2, VAR5);
    VAR9->VAR26 = FUN7(VAR2, VAR5);
    if (VAR3 < 0x02000000 && VAR5 != VAR23 && !FUN2(VAR2, VAR27))
    {
        if (FUN8(VAR2, VAR5) == 3)
        {
            VAR3 += VAR2->VAR28.VAR29;
        }
        else
        {
            VAR3 += VAR2->VAR28.VAR30;
        }
    }
    if (FUN2(VAR2, VAR31) && FUN2(VAR2, VAR32))
    {
        bool VAR22;
        *VAR12 = VAR33;
        VAR22 = FUN9(VAR2, VAR3, VAR4, VAR5, VAR7, VAR10, VAR14);
        FUN10(VAR34, "" VAR35 "", VAR4 == 1 ? "" : (VAR4 == 2 ? "" : ""), (VAR13)VAR3, VAR5, VAR22 ? "" : "", *VAR10 & VAR36 ? '' : '', *VAR10 & VAR37 ? '' : '', *VAR10 & VAR38 ? '' : '');
        return VAR22;
    }
    if (FUN4(VAR2, VAR5))
    {
        *VAR7 = VAR3;
        *VAR10 = VAR36 | VAR37 | VAR38;
        *VAR12 = VAR33;
        return 0;
    }
    if (FUN2(VAR2, VAR31))
    {
        *VAR12 = VAR33;
        return FUN11(VAR2, VAR3, VAR4, VAR5, VAR7, VAR10, VAR14);
    }
    if (FUN12(VAR2, VAR5))
    {
        return FUN5(VAR2, VAR3, VAR4, VAR5, VAR7, VAR9, VAR10, VAR12, VAR14, VAR16);
    }
    else if (FUN13(VAR2, VAR5) & VAR39)
    {
        return FUN14(VAR2, VAR3, VAR4, VAR5, VAR7, VAR9, VAR10, VAR12, VAR14, VAR16);
    }
    else
    {
        return FUN15(VAR2, VAR3, VAR4, VAR5, VAR7, VAR10, VAR12, VAR14, VAR16);
    }
}