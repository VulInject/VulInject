static inline void FUN1(int VAR1, int VAR2, int VAR3)
{
    uint32_t VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13;
    uint32_t VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19, VAR20, VAR21;
    VAR22 *VAR23;
    VAR4 = VAR24;
    if (!(VAR25->VAR26[VAR27].VAR28 & VAR29))
        VAR4 &= 0xffff;
    VAR23 = VAR25->VAR26[VAR27].VAR30 + VAR4;
    if (VAR1 == 1)
    {
        if (VAR2)
            VAR7 = FUN2(VAR23 + 8);
        VAR5 = FUN2(VAR23 + 4) & 0xffff;
        VAR6 = FUN2(VAR23);
        if (VAR2 && (VAR7 & VAR31))
            goto VAR32;
    }
    else
    {
        if (VAR2)
            VAR7 = FUN3(VAR23 + 4);
        VAR5 = FUN3(VAR23 + 2);
        VAR6 = FUN3(VAR23);
    }
    if ((VAR5 & 0xfffc) == 0)
        FUN4(VAR33, VAR5 & 0xfffc);
    if (FUN5(&VAR14, &VAR15, VAR5) != 0)
        FUN4(VAR33, VAR5 & 0xfffc);
    if (!(VAR15 & VAR34) || !(VAR15 & VAR35))
        FUN4(VAR33, VAR5 & 0xfffc);
    VAR18 = VAR25->VAR36 & VAR37;
    VAR20 = VAR5 & 3;
    if (VAR20 < VAR18)
        FUN4(VAR33, VAR5 & 0xfffc);
    VAR19 = (VAR15 >> VAR38) & 3;
    if (VAR15 & VAR39)
    {
        if (VAR19 > VAR20)
            FUN4(VAR33, VAR5 & 0xfffc);
    }
    else
    {
        if (VAR19 != VAR20)
            FUN4(VAR33, VAR5 & 0xfffc);
    }
    if (!(VAR15 & VAR40))
        FUN4(VAR41, VAR5 & 0xfffc);
    if (VAR20 == VAR18)
    {
        FUN6(VAR25, VAR42, VAR5, FUN7(VAR14, VAR15), FUN8(VAR14, VAR15), VAR15);
        VAR8 = VAR4 + (4 << VAR1) + ((2 * VAR2) << VAR1) + VAR3;
    }
    else
    {
        VAR23 += (4 << VAR1) + ((2 * VAR2) << VAR1) + VAR3;
        if (VAR1 == 1)
        {
            VAR8 = FUN2(VAR23);
            VAR9 = FUN2(VAR23 + 4) & 0xffff;
        }
        else
        {
            VAR8 = FUN3(VAR23);
            VAR9 = FUN3(VAR23 + 2);
        }
        if ((VAR9 & 3) != VAR20)
            FUN4(VAR33, VAR9 & 0xfffc);
        if (FUN5(&VAR16, &VAR17, VAR9) != 0)
            FUN4(VAR33, VAR9 & 0xfffc);
        if (!(VAR17 & VAR34) || (VAR17 & VAR35) || !(VAR17 & VAR43))
            FUN4(VAR33, VAR9 & 0xfffc);
        VAR19 = (VAR17 >> VAR38) & 3;
        if (VAR19 != VAR20)
            FUN4(VAR33, VAR9 & 0xfffc);
        if (!(VAR17 & VAR40))
            FUN4(VAR41, VAR9 & 0xfffc);
        FUN6(VAR25, VAR42, VAR5, FUN7(VAR14, VAR15), FUN8(VAR14, VAR15), VAR15);
        FUN6(VAR25, VAR27, VAR9, FUN7(VAR16, VAR17), FUN8(VAR16, VAR17), VAR17);
        FUN9(VAR25, VAR20);
    }
    if (VAR25->VAR26[VAR27].VAR28 & VAR29)
        VAR24 = VAR8;
    else
        VAR24 = (VAR24 & 0xffff0000) | (VAR8 & 0xffff);
    VAR25->VAR44 = VAR6;
    if (VAR2)
    {
        if (VAR18 == 0)
            VAR21 = VAR45;
        else
            VAR21 = VAR46;
        if (VAR1 == 0)
            VAR21 &= 0xffff;
        FUN10(VAR7, VAR21);
    }
    return;
VAR32:
    VAR8 = FUN2(VAR23 + 12);
    VAR9 = FUN2(VAR23 + 16);
    VAR10 = FUN2(VAR23 + 20);
    VAR11 = FUN2(VAR23 + 24);
    VAR12 = FUN2(VAR23 + 28);
    VAR13 = FUN2(VAR23 + 32);
    FUN10(VAR7, VAR45 | VAR31 | VAR47 | VAR48);
    FUN11(VAR42, VAR5);
    FUN9(VAR25, 3);
    FUN11(VAR27, VAR9);
    FUN11(VAR49, VAR10);
    FUN11(VAR50, VAR11);
    FUN11(VAR51, VAR12);
    FUN11(VAR52, VAR13);
    VAR25->VAR44 = VAR6;
    VAR24 = VAR8;
}