void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(FUN4(VAR2->VAR5)));
    VAR6 *VAR7 = FUN5(VAR4);
    VAR8 *VAR9 = FUN6(VAR2->VAR5);
    int VAR10;
    if (VAR9->VAR11 || VAR2->VAR12)
    {
        return;
    }
    VAR2->VAR12 = true;
    VAR2->VAR13 = FUN7(VAR2->VAR5, 0);
    VAR10 = VAR7->FUN8(VAR4->VAR14, 1, true);
    if (VAR10 != 0)
    {
        fprintf(VAR15, ""
                        "",
                VAR10);
        goto VAR16;
    }
    VAR2->VAR17 = FUN9(VAR2->VAR13);
    VAR10 = VAR7->FUN10(VAR4->VAR14, 0, true);
    if (VAR10 != 0)
    {
        fprintf(VAR15, "", VAR10);
        goto VAR18;
    }
    VAR2->VAR12 = false;
    VAR9->VAR11 = true;
    FUN11(VAR2);
    FUN12(VAR2->VAR19->VAR19.VAR20, VAR2->VAR21);
    FUN13(FUN14(VAR2->VAR13));
    FUN15(VAR2->VAR21);
    FUN16(VAR2->VAR13, VAR2->VAR21, true, true);
    FUN17(VAR2->VAR21);
    return;
VAR18:
    VAR7->FUN8(VAR4->VAR14, 1, false);
VAR16:
    VAR9->VAR22 = true;
    VAR2->VAR12 = false;
    VAR9->VAR11 = true;