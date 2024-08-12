int FUN1(const char *VAR1)
{
    VAR2 *VAR3, *VAR4;
    QEMUSnapshotInfo VAR5;
    VAR6 *VAR7;
    int VAR8;
    if (!FUN2(&VAR3))
    {
        FUN3("", FUN4(VAR3));
        return -VAR9;
    }
    VAR8 = FUN5(VAR1, &VAR3);
    if (VAR8 < 0)
    {
        FUN3("", FUN4(VAR3), VAR1);
        return VAR8;
    }
    VAR4 = FUN6();
    if (!VAR4)
    {
        FUN3("");
        return -VAR9;
    }
    VAR8 = FUN7(VAR4, &VAR5, VAR1);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    else if (VAR5.VAR10 == 0)
    {
        FUN3(""
                     "");
        return -VAR11;
    }
    FUN8();
    VAR8 = FUN9(VAR1, &VAR3);
    if (VAR8 < 0)
    {
        FUN3("", VAR8, VAR1, FUN4(VAR3));
        return VAR8;
    }
    VAR7 = FUN10(VAR4, 0);
    if (!VAR7)
    {
        FUN3("");
        return -VAR11;
    }
    FUN11(VAR12);
    FUN12(VAR7);
    VAR8 = FUN13(VAR7);
    FUN14(VAR7);
    FUN15();
    if (VAR8 < 0)
    {
        FUN3("", VAR8);
        return VAR8;
    }
    return 0;
}