int FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5, *VAR6;
    QEMUSnapshotInfo VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = FUN2();
    if (!FUN3(&VAR5))
    {
        FUN4(VAR3, "", FUN5(VAR5));
        return -VAR15;
    }
    VAR10 = FUN6(VAR1, &VAR5);
    if (VAR10 < 0)
    {
        FUN4(VAR3, "", FUN5(VAR5), VAR1);
        return VAR10;
    }
    VAR6 = FUN7();
    if (!VAR6)
    {
        FUN4(VAR3, "");
        return -VAR15;
    }
    VAR12 = FUN8(VAR6);
    FUN9(VAR12);
    VAR10 = FUN10(VAR6, &VAR7, VAR1);
    FUN11(VAR12);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    else if (VAR7.VAR16 == 0)
    {
        FUN4(VAR3, ""
                         "");
        return -VAR17;
    }
    FUN12();
    VAR10 = FUN13(VAR1, &VAR5);
    if (VAR10 < 0)
    {
        FUN4(VAR3, "", VAR10, VAR1, FUN5(VAR5));
        return VAR10;
    }
    VAR9 = FUN14(VAR6, 0);
    if (!VAR9)
    {
        FUN4(VAR3, "");
        return -VAR17;
    }
    FUN15(VAR18);
    VAR14->VAR19 = VAR9;
    FUN9(VAR12);
    VAR10 = FUN16(VAR9);
    FUN17(VAR9);
    FUN11(VAR12);
    FUN18();
    if (VAR10 < 0)
    {
        FUN4(VAR3, "", VAR10);
        return VAR10;
    }
    return 0;
}