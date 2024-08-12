int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7, *VAR8;
    QEMUSnapshotInfo VAR9;
    VAR10 *VAR11;
    int VAR12;
    VAR7 = FUN2();
    if (!VAR7)
    {
        FUN3(VAR2, "");
        return -VAR13;
    }
    FUN4();
    FUN5(VAR5, &VAR14, VAR15)
    {
        VAR8 = VAR5->VAR16;
        if (FUN6(VAR8))
        {
            VAR12 = FUN7(VAR8, VAR3);
            if (VAR12 < 0)
            {
                if (VAR7 != VAR8)
                    FUN3(VAR2, "");
                switch (VAR12)
                {
                case -VAR17:
                    FUN3(VAR2, "", FUN8(VAR8));
                    break;
                case -VAR18:
                    FUN3(VAR2, ""
                                        "",
                                   VAR3, FUN8(VAR8));
                    break;
                default:
                    FUN3(VAR2, ""
                                        "",
                                   VAR12, FUN8(VAR8));
                    break;
                }
                if (VAR7 == VAR8)
                    return 0;
            }
        }
    }
    VAR12 = FUN9(VAR7, &VAR9, VAR3);
    if ((VAR12 >= 0) && (VAR9.VAR19 == 0))
        return -VAR13;
    VAR11 = FUN10(VAR7, 0);
    if (!VAR11)
    {
        FUN3(VAR2, "");
        return -VAR13;
    }
    VAR12 = FUN11(VAR11);
    FUN12(VAR11);
    if (VAR12 < 0)
    {
        FUN3(VAR2, "", VAR12);
        return VAR12;
    }
    return 0;
}