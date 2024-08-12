static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, int VAR7, VAR8 *VAR9, int VAR10, VAR11 **VAR12)
{
    int VAR13;
    VAR13 = FUN2(VAR6) - 1;
    if (VAR13 < VAR14 || VAR13 > VAR15 || (1 << VAR13) != VAR6)
    {
        FUN3(VAR12, ""
                         "",
                   1 << VAR14, 1 << (VAR15 - 10));
        return -VAR16;
    }
    VAR17 *VAR18;
    QCowHeader VAR19;
    VAR20 *VAR21;
    VAR11 *VAR22 = NULL;
    int VAR23;
    VAR23 = FUN4(VAR1, VAR9, &VAR22);
    if (VAR23 < 0)
    {
        FUN5(VAR12, VAR22);
        return VAR23;
    }
    VAR23 = FUN6(&VAR18, VAR1, NULL, VAR24, &VAR22);
    if (VAR23 < 0)
    {
        FUN5(VAR12, VAR22);
        return VAR23;
    }
    memset(&VAR19, 0, sizeof(VAR19));
    VAR19.VAR25 = FUN7(VAR26);
    VAR19.VAR10 = FUN7(VAR10);
    VAR19.VAR13 = FUN7(VAR13);
    VAR19.VAR27 = FUN8(0);
    VAR19.VAR28 = FUN8(0);
    VAR19.VAR29 = FUN7(0);
    VAR19.VAR30 = FUN8(VAR6);
    VAR19.VAR31 = FUN7(1);
    VAR19.VAR32 = FUN7(3 + VAR33);
    VAR19.VAR34 = FUN7(sizeof(VAR19));
    if (VAR5 & VAR35)
    {
        VAR19.VAR36 = FUN7(VAR37);
    }
    else
    {
        VAR19.VAR36 = FUN7(VAR38);
    }
    if (VAR5 & VAR39)
    {
        VAR19.VAR40 |= FUN8(VAR41);
    }
    VAR23 = FUN9(VAR18, 0, &VAR19, sizeof(VAR19));
    if (VAR23 < 0)
    {
        FUN10(VAR12, -VAR23, "");
        goto VAR42;
    }
    VAR21 = FUN11(VAR6);
    VAR23 = FUN9(VAR18, VAR6, VAR21, VAR6);
    FUN12(VAR21);
    if (VAR23 < 0)
    {
        FUN10(VAR12, -VAR23, "");
        goto VAR42;
    }
    FUN13(VAR18);
    VAR43 *VAR44 = FUN14("");
    assert(VAR44 != NULL);
    VAR23 = FUN15(VAR18, VAR1, NULL, VAR24 | VAR45 | VAR46, VAR44, &VAR22);
    if (VAR23 < 0)
    {
        FUN5(VAR12, VAR22);
        goto VAR42;
    }
    VAR23 = FUN16(VAR18, 2 * VAR6);
    if (VAR23 < 0)
    {
        FUN10(VAR12, -VAR23, ""
                                     "");
        goto VAR42;
    }
    else if (VAR23 != 0)
    {
        FUN17("");
        FUN18();
    }
    VAR23 = FUN19(VAR18, VAR2 * VAR47);
    if (VAR23 < 0)
    {
        FUN10(VAR12, -VAR23, "");
        goto VAR42;
    }
    if (VAR3)
    {
        VAR23 = FUN20(VAR18, VAR3, VAR4);
        if (VAR23 < 0)
        {
            FUN10(VAR12, -VAR23, ""
                                         "",
                             VAR3, VAR4);
            goto VAR42;
        }
    }
    if (VAR7)
    {
        VAR48 *VAR49 = VAR18->VAR50;
        FUN21(&VAR49->VAR51);
        VAR23 = FUN22(VAR18);
        FUN23(&VAR49->VAR51);
        if (VAR23 < 0)
        {
            FUN10(VAR12, -VAR23, "");
            goto VAR42;
        }
    }
    FUN13(VAR18);
    VAR23 = FUN15(VAR18, VAR1, NULL, VAR24 | VAR45 | VAR52, VAR44, &VAR22);
    if (FUN24(&VAR22))
    {
        FUN5(VAR12, VAR22);
        goto VAR42;
    }
    VAR23 = 0;
VAR42:
    FUN25(VAR18);
    return VAR23;
}