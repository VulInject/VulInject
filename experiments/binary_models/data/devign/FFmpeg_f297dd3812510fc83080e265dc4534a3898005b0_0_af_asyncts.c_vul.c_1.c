static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    int VAR13 = FUN2(VAR4->VAR14->VAR15);
    int64_t VAR16 = (VAR4->VAR16 == VAR17) ? VAR4->VAR16 : FUN3(VAR4->VAR16, VAR2->VAR18, VAR11->VAR18);
    int VAR19;
    int64_t VAR20;
    if (VAR9->VAR16 == VAR17)
    {
        if (VAR16 != VAR17)
        {
            VAR9->VAR16 = VAR16 - FUN4(VAR9);
        }
        FUN5(VAR9, VAR4);
        return;
    }
    if (VAR16 == VAR17)
    {
        FUN5(VAR9, VAR4);
        return;
    }
    VAR20 = VAR16 - VAR9->VAR16 - FUN4(VAR9);
    VAR19 = FUN6(VAR9->VAR21);
    if (FUN7(VAR20) > VAR9->VAR22)
    {
        FUN8(VAR6, VAR23, "" VAR24 "", VAR20);
        VAR19 += VAR20;
    }
    else if (VAR9->VAR25)
    {
        int VAR26 = FUN9(VAR20, -VAR9->VAR27, VAR9->VAR27);
        FUN8(VAR6, VAR23, "", VAR26);
        FUN10(VAR9->VAR21, VAR20, VAR2->VAR28);
    }
    if (VAR19 > 0)
    {
        VAR3 *VAR29 = FUN11(VAR11, VAR30, VAR19);
        if (!VAR29)
            return;
        FUN12(VAR9->VAR21, (void **)VAR29->VAR31, VAR19);
        VAR29->VAR16 = VAR9->VAR16;
        if (VAR20 > 0)
        {
            FUN13(VAR29->VAR31, VAR19 - VAR20, VAR20, VAR13, VAR4->VAR32);
        }
        FUN14(VAR11, VAR29);
    }
    else
    {
        FUN8(VAR6, VAR33, ""
                                    "");
    }
    FUN12(VAR9->VAR21, NULL, FUN6(VAR9->VAR21));
    VAR9->VAR16 = VAR16 - FUN15(VAR9->VAR21);
    FUN16(VAR9->VAR21, NULL, 0, 0, (void **)VAR4->VAR31, VAR4->VAR34[0], VAR4->VAR14->VAR35);
    FUN17(VAR4);
}