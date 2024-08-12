int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR3 *VAR6 = NULL;
    VAR7 *VAR8;
    if (!VAR4)
        VAR4 = &VAR6;
    FUN2(!(VAR8 = FUN3(*VAR4, "", NULL, 0)) || (VAR2->VAR9 && !strcmp(VAR2->VAR9, VAR8->VAR10)));
    if (VAR2->VAR9 && FUN4(VAR2->VAR11->VAR12, VAR2->VAR9, '') <= 0)
    {
        FUN5(VAR2, VAR13, "", VAR2->VAR9);
        return FUN6(VAR14);
    }
    if (!VAR2->VAR9 && VAR2->VAR11->VAR15)
    {
        FUN5(VAR2, VAR16, "", VAR2->VAR11->VAR15);
        VAR2->VAR9 = FUN7(VAR2->VAR11->VAR15);
        if (!VAR2->VAR9)
        {
            return FUN6(VAR17);
        }
    }
    else if (!VAR2->VAR9)
        FUN5(VAR2, VAR16, "");
    if ((VAR5 = FUN8(VAR4, "", VAR2->VAR9, 0)) < 0)
        return VAR5;
    VAR5 = VAR2->VAR11->VAR18 ? VAR2->VAR11->FUN9(VAR2, VAR2->VAR19, VAR2->VAR20, VAR4) : VAR2->VAR11->FUN10(VAR2, VAR2->VAR19, VAR2->VAR20);
    FUN8(VAR4, "", NULL, 0);
    if (VAR5)
        return VAR5;
    VAR2->VAR21 = 1;
    if ((VAR2->VAR20 & VAR22) || !strcmp(VAR2->VAR11->VAR12, ""))
        if (!VAR2->VAR23 && FUN11(VAR2, 0, VAR24) < 0)
            VAR2->VAR23 = 1;
    return 0;
}