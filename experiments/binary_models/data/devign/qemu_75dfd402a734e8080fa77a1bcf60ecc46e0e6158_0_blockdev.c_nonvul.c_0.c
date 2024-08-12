static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    const char *VAR6;
    const char *VAR7;
    VAR8 *VAR9;
    QEMUSnapshotInfo VAR10, *VAR11;
    bool VAR12;
    qemu_timeval VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    FUN2(VAR2->VAR19->VAR20 == VAR21);
    VAR15 = VAR2->VAR19->VAR22.VAR23.VAR24;
    VAR17 = FUN3(VAR16, VAR2, VAR2);
    VAR6 = VAR15->VAR6;
    VAR7 = VAR15->VAR7;
    if (FUN4(VAR2, VAR4) < 0)
    {
        return;
    }
    VAR9 = FUN5(VAR6, VAR4);
    if (!VAR9)
    {
        return;
    }
    VAR17->VAR25 = FUN6(VAR9);
    FUN7(VAR17->VAR25);
    VAR17->VAR9 = VAR9;
    FUN8(VAR9);
    if (FUN9(VAR9, VAR26, VAR4))
    {
        return;
    }
    if (FUN10(VAR9))
    {
        FUN11(VAR4, "", VAR6);
        return;
    }
    if (!FUN12(VAR9))
    {
        FUN11(VAR4, ""
                         "",
                   VAR9->VAR27->VAR28, VAR6);
        return;
    }
    if (!strlen(VAR7))
    {
        FUN11(VAR4, "");
        return;
    }
    VAR12 = FUN13(VAR9, NULL, VAR7, &VAR10, &VAR5);
    if (VAR5)
    {
        FUN14(VAR4, VAR5);
        return;
    }
    else if (VAR12)
    {
        FUN11(VAR4, "", VAR7, VAR6);
        return;
    }
    VAR11 = &VAR17->VAR11;
    FUN15(VAR11->VAR7, sizeof(VAR11->VAR7), VAR7);
    FUN16(&VAR13);
    VAR11->VAR29 = VAR13.VAR30;
    VAR11->VAR31 = VAR13.VAR32 * 1000;
    VAR11->VAR33 = FUN17(VAR34);
    VAR18 = FUN18(VAR9, VAR11);
    if (VAR18 < 0)
    {
        FUN19(VAR4, -VAR18, "", VAR7, VAR6);
        return;
    }
    VAR17->VAR35 = true;
}