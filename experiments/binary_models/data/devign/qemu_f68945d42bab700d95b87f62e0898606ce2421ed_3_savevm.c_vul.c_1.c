void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    VAR6 *VAR7;
    int VAR8;
    FUN2();
    FUN3();
    FUN4(VAR7, &VAR9.VAR10, VAR11)
    {
        if (!VAR7->VAR12 || !VAR7->VAR12->VAR13)
        {
            continue;
        }
        if (VAR7->VAR12 && VAR7->VAR12->VAR14)
        {
            if (!VAR7->VAR12->FUN5(VAR7->VAR15))
            {
                continue;
            }
        }
        FUN6(VAR7->VAR16, VAR7->VAR17);
        FUN7(VAR2, VAR7, VAR18);
        VAR8 = VAR7->VAR12->FUN8(VAR2, VAR7->VAR15);
        FUN9(VAR7->VAR16, VAR7->VAR17, VAR8);
        if (VAR8 < 0)
        {
            FUN10(VAR2, VAR8);
            return;
        }
    }
    VAR4 = FUN11();
    FUN12(VAR4, "", VAR19);
    FUN13(VAR4, "");
    FUN4(VAR7, &VAR9.VAR10, VAR11)
    {
        if ((!VAR7->VAR12 || !VAR7->VAR12->VAR20) && !VAR7->VAR21)
        {
            continue;
        }
        FUN6(VAR7->VAR16, VAR7->VAR17);
        FUN14(VAR4, NULL);
        FUN15(VAR4, "", VAR7->VAR16);
        FUN12(VAR4, "", VAR7->VAR22);
        FUN7(VAR2, VAR7, VAR23);
        FUN16(VAR2, VAR7, VAR4);
        FUN17(VAR4);
        FUN9(VAR7->VAR16, VAR7->VAR17, 0);
    }
    FUN18(VAR2, VAR24);
    FUN19(VAR4);
    FUN20(VAR4);
    VAR5 = strlen(FUN21(VAR4));
    if (FUN22())
    {
        FUN18(VAR2, VAR25);
        FUN23(VAR2, VAR5);
        FUN24(VAR2, (VAR26 *)FUN21(VAR4), VAR5);
    }
    FUN25(FUN26(VAR4));
    FUN27(VAR2);