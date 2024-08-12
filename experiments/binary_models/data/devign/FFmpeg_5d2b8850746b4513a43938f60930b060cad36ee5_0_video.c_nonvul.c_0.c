int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = VAR2->VAR8;
    VAR6 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    VAR13 *VAR14 = VAR2->VAR9->VAR15;
    int64_t VAR16;
    FUN2(NULL, VAR5);
    FUN3(NULL, VAR2, 0);
    FUN4(NULL, "");
    FUN5(NULL, VAR4, 1);
    if (strcmp(VAR2->VAR9->VAR17->VAR18, ""))
    {
        FUN6(VAR4->VAR19 == VAR2->VAR19);
        FUN6(VAR4->VAR20->VAR21 == VAR2->VAR21);
        FUN6(VAR4->VAR20->VAR22 == VAR2->VAR22);
    }
    if (VAR2->VAR23)
    {
        FUN7(VAR4);
        return VAR24;
    }
    if (!(VAR5 = VAR9->VAR5))
        VAR5 = VAR25;
    FUN6((VAR4->VAR12 & VAR7->VAR26) == VAR7->VAR26);
    VAR4->VAR12 &= ~VAR7->VAR27;
    VAR12 = VAR4->VAR12;
    if (VAR4->VAR28[0] < 0)
        VAR12 |= VAR29;
    if ((VAR9->VAR26 & VAR12) != VAR9->VAR26 || VAR9->VAR27 & VAR12)
    {
        FUN8(VAR2->VAR9, VAR30, "", VAR4->VAR12, VAR2->VAR10->VAR26, VAR2->VAR10->VAR27);
        VAR2->VAR31 = FUN9(VAR2, VAR9->VAR26, VAR2->VAR21, VAR2->VAR22);
        if (!VAR2->VAR31)
        {
            FUN10(&VAR4);
            return FUN11(VAR32);
        }
        VAR2->VAR33 = VAR4;
        FUN12(VAR2->VAR31, VAR2->VAR33);
        if (VAR34[VAR2->VAR19].VAR35 & VAR36)
            memcpy(VAR2->VAR31->VAR37[1], VAR2->VAR33->VAR37[1], VAR38);
    }
    else
        VAR2->VAR31 = VAR4;
    VAR2->VAR39 = VAR2->VAR31;
    while (VAR14 && VAR14->VAR40 <= VAR4->VAR16 * FUN13(VAR2->VAR41))
    {
        FUN8(VAR2->VAR9, VAR30, "", VAR14->VAR40, VAR14->VAR42, VAR14->VAR43);
        FUN14(VAR2->VAR9, VAR14->VAR42, VAR14->VAR43, 0, 0, VAR14->VAR35);
        FUN15(VAR2->VAR9);
        VAR14 = VAR2->VAR9->VAR15;
    }
    VAR16 = VAR2->VAR31->VAR16;
    VAR11 = FUN16(VAR2, VAR2->VAR31);
    FUN17(VAR2, VAR16);
    if (VAR11 < 0)
        FUN18(VAR2);
    else
        FUN6(VAR2->VAR39->VAR44->VAR45 > 0);
    return VAR11;
}