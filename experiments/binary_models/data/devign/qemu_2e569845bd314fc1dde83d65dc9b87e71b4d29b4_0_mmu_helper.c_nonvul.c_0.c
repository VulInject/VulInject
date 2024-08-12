void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    uint32_t VAR5, VAR6;
    VAR7 *VAR8;
    uint32_t VAR9, VAR10;
    target_ulong VAR11;
    switch (VAR2->VAR12[VAR13] & VAR14)
    {
    case VAR15:
        break;
    case VAR16:
        if (0)
        {
            return;
        }
        break;
    case VAR17:
        return;
    default:
        return;
    }
    if (((VAR2->VAR12[VAR13] & VAR18) == VAR19) && !VAR20)
    {
        fprintf(VAR21, "");
        return;
    }
    VAR6 = (VAR2->VAR12[VAR13] & VAR22) >> VAR23;
    VAR5 = VAR2->VAR12[VAR24 + VAR6];
    VAR8 = FUN3(VAR2);
    if (!VAR8)
    {
        FUN4(VAR2, VAR25, VAR26 | VAR27, FUN5());
    }
    VAR9 = (VAR2->VAR12[VAR28] & VAR29) >> VAR30;
    VAR10 = FUN6(VAR2, VAR6);
    if ((VAR2->VAR12[VAR28] & VAR31) && (VAR5 & VAR32) && !(VAR10 & (1 << VAR9)))
    {
        FUN4(VAR2, VAR25, VAR26 | VAR27, FUN5());
    }
    if (VAR20)
    {
        FUN7(FUN8(VAR4), "");
    }
    if (VAR8->VAR33 & VAR31)
    {
        FUN9(VAR2, VAR8);
    }
    VAR8->VAR34 = ((VAR35)VAR2->VAR12[VAR36] << 32) | VAR2->VAR12[VAR37];
    VAR8->VAR33 = VAR2->VAR12[VAR28];
    if ((VAR2->VAR12[VAR38] & VAR39) == VAR40)
    {
        FUN10(VAR2, VAR6, VAR8);
    }
    else
    {
        if (!(VAR5 & VAR32))
        {
            VAR8->VAR33 &= ~VAR29;
            VAR8->VAR33 |= (VAR5 & VAR41) >> 12;
        }
    }
    VAR11 = ~(FUN11(VAR2, VAR8) - 1);
    VAR11 |= VAR42 | VAR43 | VAR44 | VAR45 | VAR46 | VAR47 | VAR48;
    if (!VAR49)
    {
        VAR11 &= 0xffffffff;
    }
    VAR8->VAR50 = VAR2->VAR12[VAR51] & VAR11;
    if (!(VAR5 & VAR52))
    {
        VAR8->VAR33 &= ~VAR53;
    }
    FUN9(VAR2, VAR8);
}