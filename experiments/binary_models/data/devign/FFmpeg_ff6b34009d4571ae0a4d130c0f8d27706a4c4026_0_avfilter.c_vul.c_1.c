static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = VAR2->VAR8;
    VAR6 *VAR9 = VAR2->VAR10;
    VAR3 *VAR11;
    int VAR12, VAR13;
    VAR14 *VAR15 = VAR2->VAR9->VAR16;
    int64_t VAR17;
    if (VAR2->VAR18)
    {
        FUN2(VAR4);
        return VAR19;
    }
    if (!(VAR5 = VAR9->VAR5))
        VAR5 = VAR20;
    FUN3((VAR4->VAR12 & VAR7->VAR21) == VAR7->VAR21);
    VAR4->VAR12 &= ~VAR7->VAR22;
    VAR12 = VAR4->VAR12;
    if (VAR4->VAR23[0] < 0)
        VAR12 |= VAR24;
    if ((VAR9->VAR21 & VAR12) != VAR9->VAR21 || VAR9->VAR22 & VAR12)
    {
        FUN4(VAR2->VAR9, VAR25, "", VAR12, VAR2->VAR10->VAR21, VAR2->VAR10->VAR22);
        switch (VAR2->VAR26)
        {
        case VAR27:
            VAR11 = FUN5(VAR2, VAR9->VAR21, VAR2->VAR28, VAR2->VAR29);
            break;
        case VAR30:
            VAR11 = FUN6(VAR2, VAR9->VAR21, VAR4->VAR31->VAR32);
            break;
        default:
            return FUN7(VAR33);
        }
        if (!VAR11)
        {
            FUN2(VAR4);
            return FUN7(VAR34);
        }
        FUN8(VAR11, VAR4);
        switch (VAR2->VAR26)
        {
        case VAR27:
            FUN9(VAR11->VAR35, VAR11->VAR23, VAR4->VAR35, VAR4->VAR23, VAR4->VAR36, VAR4->VAR37->VAR28, VAR4->VAR37->VAR29);
            break;
        case VAR30:
            FUN10(VAR11->VAR38, VAR4->VAR38, 0, 0, VAR4->VAR31->VAR32, FUN11(VAR4->VAR31->VAR39), VAR4->VAR36);
            break;
        default:
            return FUN7(VAR33);
        }
        FUN2(VAR4);
    }
    else
        VAR11 = VAR4;
    while (VAR15 && VAR15->VAR40 <= VAR4->VAR17 * FUN12(VAR2->VAR41))
    {
        FUN4(VAR2->VAR9, VAR25, "", VAR15->VAR40, VAR15->VAR42, VAR15->VAR43);
        FUN13(VAR2->VAR9, VAR15->VAR42, VAR15->VAR43, 0, 0, VAR15->VAR44);
        FUN14(VAR2->VAR9);
        VAR15 = VAR2->VAR9->VAR16;
    }
    VAR17 = VAR11->VAR17;
    VAR13 = FUN15(VAR2, VAR11);
    FUN16(VAR2, VAR17);
    return VAR13;
}