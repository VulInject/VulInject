static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR5 *VAR9;
    enum AVMediaType VAR10 = VAR2->VAR11 && VAR2->VAR11[0] ? VAR2->VAR11[0]->VAR10 : VAR2->VAR12 && VAR2->VAR12[0] ? VAR2->VAR12[0]->VAR10
                                                                                                                   : VAR13;
    if ((VAR3 = VAR2->VAR14->FUN2(VAR2)) < 0)
    {
        if (VAR3 != FUN3(VAR15))
            FUN4(VAR2, VAR16, "", VAR2->VAR17, FUN5(VAR3));
        return VAR3;
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR18; VAR4++)
        FUN6(VAR2, VAR2->VAR11[VAR4]->VAR19);
    for (VAR4 = 0; VAR4 < VAR2->VAR20; VAR4++)
        FUN6(VAR2, VAR2->VAR12[VAR4]->VAR21);
    VAR6 = FUN7(VAR10);
    if (!VAR6)
        return FUN3(VAR22);
    FUN8(VAR2, VAR6);
    if (VAR10 == VAR23)
    {
        VAR9 = FUN9();
        if (!VAR9)
            return FUN3(VAR22);
        FUN10(VAR2, VAR9);
        VAR8 = FUN11();
        if (!VAR8)
            return FUN3(VAR22);
        FUN12(VAR2, VAR8);
    }
    return 0;
}