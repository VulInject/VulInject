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
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR11 *VAR23 = NULL;
    int VAR24;
    VAR24 = FUN4(VAR1, VAR9, &VAR23);
    if (VAR24 < 0)
    {
        FUN5(VAR12, VAR23);
        return VAR24;
    }
    VAR18 = NULL;
    VAR24 = FUN6(&VAR18, VAR1, NULL, NULL, VAR25 | VAR26, NULL, &VAR23);
    if (VAR24 < 0)
    {
        FUN5(VAR12, VAR23);
        return VAR24;
    }
    FUN7((1 << VAR14) < sizeof(*VAR20));
    VAR20 = FUN8(VAR6);
    *VAR20 = (VAR19){
        .VAR27 = FUN9(VAR28),
        .VAR10 = FUN9(VAR10),
        .VAR13 = FUN9(VAR13),
        .VAR29 = FUN10(0),
        .VAR30 = FUN10(0),
        .VAR31 = FUN9(0),
        .VAR32 = FUN10(VAR6),
        .VAR33 = FUN9(1),
        .VAR34 = FUN9(3 + VAR35),
        .VAR36 = FUN9(sizeof(*VAR20)),
    };
    if (VAR5 & VAR37)
    {
        VAR20->VAR38 = FUN9(VAR39);
    }
    else
    {
        VAR20->VAR38 = FUN9(VAR40);
    }
    if (VAR5 & VAR41)
    {
        VAR20->VAR42 |= FUN10(VAR43);
    }
    VAR24 = FUN11(VAR18, 0, VAR20, VAR6);
    FUN12(VAR20);
    if (VAR24 < 0)
    {
        FUN13(VAR12, -VAR24, "");
        goto VAR44;
    }
    VAR22 = FUN8(VAR6);
    VAR24 = FUN11(VAR18, VAR6, VAR22, VAR6);
    FUN12(VAR22);
    if (VAR24 < 0)
    {
        FUN13(VAR12, -VAR24, "");
        goto VAR44;
    }
    FUN14(VAR18);
    VAR18 = NULL;
    VAR45 *VAR46 = FUN15("");
    assert(VAR46 != NULL);
    VAR24 = FUN6(&VAR18, VAR1, NULL, NULL, VAR25 | VAR47 | VAR48, VAR46, &VAR23);
    if (VAR24 < 0)
    {
        FUN5(VAR12, VAR23);
        goto VAR44;
    }
    VAR24 = FUN16(VAR18, 2 * VAR6);
    if (VAR24 < 0)
    {
        FUN13(VAR12, -VAR24, ""
                                     "");
        goto VAR44;
    }
    else if (VAR24 != 0)
    {
        FUN17("");
        FUN18();
    }
    VAR24 = FUN19(VAR18, VAR2 * VAR49);
    if (VAR24 < 0)
    {
        FUN13(VAR12, -VAR24, "");
        goto VAR44;
    }
    if (VAR3)
    {
        VAR24 = FUN20(VAR18, VAR3, VAR4);
        if (VAR24 < 0)
        {
            FUN13(VAR12, -VAR24, ""
                                         "",
                             VAR3, VAR4);
            goto VAR44;
        }
    }
    if (VAR7)
    {
        VAR50 *VAR51 = VAR18->VAR52;
        FUN21(&VAR51->VAR53);
        VAR24 = FUN22(VAR18);
        FUN23(&VAR51->VAR53);
        if (VAR24 < 0)
        {
            FUN13(VAR12, -VAR24, "");
            goto VAR44;
        }
    }
    FUN14(VAR18);
    VAR18 = NULL;
    VAR24 = FUN6(&VAR18, VAR1, NULL, NULL, VAR25 | VAR47 | VAR54, VAR46, &VAR23);
    if (VAR23)
    {
        FUN5(VAR12, VAR23);
        goto VAR44;
    }
    VAR24 = 0;
VAR44:
    if (VAR18)
    {
        FUN14(VAR18);
    }
    return VAR24;
}