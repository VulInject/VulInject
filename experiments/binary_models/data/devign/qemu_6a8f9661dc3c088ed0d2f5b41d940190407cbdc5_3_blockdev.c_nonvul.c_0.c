static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    const char *VAR6;
    const char *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    QEMUSnapshotInfo VAR12, *VAR13;
    bool VAR14;
    qemu_timeval VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20;
    FUN2(VAR2->VAR21->VAR22 == VAR23);
    VAR17 = VAR2->VAR21->VAR24.VAR25;
    VAR19 = FUN3(VAR18, VAR2, VAR2);
    VAR6 = VAR17->VAR6;
    VAR7 = VAR17->VAR7;
    VAR9 = FUN4(VAR6);
    if (!VAR9)
    {
        FUN5(VAR4, VAR26, "", VAR6);
        return;
    }
    VAR19->VAR27 = FUN6(VAR9);
    FUN7(VAR19->VAR27);
    if (!FUN8(VAR9))
    {
        FUN9(VAR4, VAR28, VAR6);
        return;
    }
    VAR11 = FUN10(VAR9);
    VAR19->VAR11 = VAR11;
    FUN11(VAR11);
    if (FUN12(VAR11, VAR29, VAR4))
    {
        return;
    }
    if (FUN13(VAR11))
    {
        FUN9(VAR4, "", VAR6);
        return;
    }
    if (!FUN14(VAR11))
    {
        FUN9(VAR4, ""
                         "",
                   VAR11->VAR30->VAR31, VAR6);
        return;
    }
    if (!strlen(VAR7))
    {
        FUN9(VAR4, "");
        return;
    }
    VAR14 = FUN15(VAR11, NULL, VAR7, &VAR12, &VAR5);
    if (VAR5)
    {
        FUN16(VAR4, VAR5);
        return;
    }
    else if (VAR14)
    {
        FUN9(VAR4, "", VAR7, VAR6);
        return;
    }
    VAR13 = &VAR19->VAR13;
    FUN17(VAR13->VAR7, sizeof(VAR13->VAR7), VAR7);
    FUN18(&VAR15);
    VAR13->VAR32 = VAR15.VAR33;
    VAR13->VAR34 = VAR15.VAR35 * 1000;
    VAR13->VAR36 = FUN19(VAR37);
    VAR20 = FUN20(VAR11, VAR13);
    if (VAR20 < 0)
    {
        FUN21(VAR4, -VAR20, "", VAR7, VAR6);
        return;
    }
    VAR19->VAR38 = true;
}