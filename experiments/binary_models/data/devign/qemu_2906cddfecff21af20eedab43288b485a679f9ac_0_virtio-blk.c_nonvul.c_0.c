void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(FUN4(VAR2->VAR5)));
    VAR6 *VAR7 = FUN5(VAR4);
    VAR8 *VAR9 = FUN6(VAR2->VAR5);
    VAR10 *VAR11;
    int VAR12;
    if (VAR9->VAR13 || VAR2->VAR14)
    {
        return;
    }
    VAR2->VAR14 = true;
    VAR11 = FUN7(VAR2->VAR5, 0);
    if (!FUN8(&VAR2->VAR15, VAR2->VAR5, 0))
    {
        goto VAR16;
    }
    VAR12 = VAR7->FUN9(VAR4->VAR17, 1, true);
    if (VAR12 != 0)
    {
        fprintf(VAR18, ""
                        "",
                VAR12);
        goto VAR19;
    }
    VAR2->VAR20 = FUN10(VAR11);
    VAR12 = VAR7->FUN11(VAR4->VAR17, 0, true);
    if (VAR12 != 0)
    {
        fprintf(VAR18, "", VAR12);
        goto VAR21;
    }
    VAR2->VAR22 = *FUN12(VAR11);
    VAR2->VAR23 = VAR9->VAR24;
    VAR9->VAR24 = VAR25;
    VAR2->VAR14 = false;
    VAR9->VAR13 = true;
    FUN13(VAR2);
    FUN14(VAR2->VAR26->VAR26.VAR27, VAR2->VAR28);
    FUN15(FUN12(VAR11));
    FUN16(VAR2->VAR28);
    FUN17(VAR2->VAR28, &VAR2->VAR22, true, VAR29);
    FUN18(VAR2->VAR28);
    return;
VAR21:
    VAR7->FUN9(VAR4->VAR17, 1, false);
VAR19:
    FUN19(&VAR2->VAR15, VAR2->VAR5, 0);
VAR16:
    VAR2->VAR30 = true;
    VAR2->VAR14 = false;
    VAR9->VAR13 = true;
}