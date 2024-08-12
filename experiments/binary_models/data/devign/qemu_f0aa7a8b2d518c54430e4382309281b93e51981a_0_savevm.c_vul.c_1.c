int FUN1(const char *VAR1)
{
    VAR2 *VAR3, *VAR4;
    QEMUSnapshotInfo VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR3 = NULL;
    while ((VAR3 = FUN2(VAR3)))
    {
        if (FUN3(VAR3) || FUN4(VAR3))
        {
            continue;
        }
        if (!FUN5(VAR3))
        {
            FUN6("", FUN7(VAR3));
            return -VAR9;
        }
    }
    VAR3 = FUN8();
    if (!VAR3)
    {
        FUN6("");
        return -VAR10;
    }
    FUN9();
    VAR4 = NULL;
    while ((VAR4 = FUN2(VAR4)))
    {
        if (FUN5(VAR4))
        {
            VAR8 = FUN10(VAR4, VAR1);
            if (VAR8 < 0)
            {
                switch (VAR8)
                {
                case -VAR9:
                    FUN6("", VAR3 != VAR4 ? "" : "", FUN7(VAR4));
                    break;
                case -VAR11:
                    FUN6("", VAR3 != VAR4 ? "" : "", VAR1, FUN7(VAR4));
                    break;
                default:
                    FUN6("", VAR3 != VAR4 ? "" : "", VAR8, FUN7(VAR4));
                    break;
                }
                if (VAR3 == VAR4)
                    return 0;
            }
        }
    }
    VAR8 = FUN11(VAR3, &VAR5, VAR1);
    if ((VAR8 >= 0) && (VAR5.VAR12 == 0))
        return -VAR10;
    VAR7 = FUN12(VAR3, 0);
    if (!VAR7)
    {
        FUN6("");
        return -VAR10;
    }
    VAR8 = FUN13(VAR7);
    FUN14(VAR7);
    if (VAR8 < 0)
    {
        FUN6("", VAR8);
        return VAR8;
    }
    return 0;
}