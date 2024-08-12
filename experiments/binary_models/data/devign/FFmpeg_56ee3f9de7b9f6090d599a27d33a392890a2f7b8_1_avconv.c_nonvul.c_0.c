static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5[VAR2->VAR6];
    VAR7 *VAR8 = NULL;
    int VAR9, VAR10;
    if (!VAR2->VAR8 && !(VAR2->VAR8 = FUN2()))
    {
        return FUN3(VAR11);
    }
    else
        FUN4(VAR2->VAR8);
    VAR8 = VAR2->VAR8;
    if (VAR2->VAR12->VAR13 == VAR14 && !(VAR2->VAR12->VAR15 & VAR16))
        VAR10 = FUN5(VAR2->VAR17->VAR17, VAR8, VAR2->VAR18->VAR19->VAR9);
    else
        VAR10 = FUN6(VAR2->VAR17->VAR17, VAR8);
    if (VAR10 < 0)
        return VAR10;
    if (VAR8->VAR20 != VAR21)
    {
        int64_t VAR22 = (VAR4->VAR22 == VAR21) ? 0 : VAR4->VAR22;
        VAR8->VAR20 = FUN7(VAR8->VAR20, VAR2->VAR17->VAR17->VAR23[0]->VAR24, VAR2->VAR18->VAR19->VAR24) - FUN7(VAR22, VAR25, VAR2->VAR18->VAR19->VAR24);
    }
    switch (VAR2->VAR17->VAR17->VAR23[0]->VAR13)
    {
    case VAR26:
        if (!VAR2->VAR27)
            VAR2->VAR18->VAR19->VAR28 = VAR8->VAR28;
        FUN8(VAR4->VAR29, VAR2, VAR8, &VAR9);
        if (VAR30 && VAR9)
            FUN9(VAR2, VAR9);
        break;
    case VAR14:
        FUN10(VAR4->VAR29, VAR2, VAR8);
        break;
    default:
        FUN11(0);
    }
    FUN12(VAR8);
    return 0;
}