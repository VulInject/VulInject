static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, PreallocMode VAR7, VAR8 *VAR9, int VAR10, int VAR11, const char *VAR12, VAR13 **VAR14)
{
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR13 *VAR23 = NULL;
    int VAR24;
    if (VAR7 == VAR25 || VAR7 == VAR26)
    {
        int64_t VAR27 = FUN2(VAR2, VAR6, VAR11);
        FUN3(VAR9, VAR28, VAR27, &VAR29);
        FUN4(VAR9, VAR30, VAR31[VAR7], &VAR29);
    }
    VAR24 = FUN5(VAR1, VAR9, &VAR23);
    if (VAR24 < 0)
    {
        FUN6(VAR14, VAR23);
        return VAR24;
    }
    VAR18 = FUN7(VAR1, NULL, NULL, VAR32 | VAR33 | VAR34, &VAR23);
    if (VAR18 == NULL)
    {
        FUN6(VAR14, VAR23);
        return -VAR35;
    }
    FUN8(VAR18, true);
    FUN9((1 << VAR36) < sizeof(*VAR20));
    VAR20 = FUN10(VAR6);
    *VAR20 = (VAR19){
        .VAR37 = FUN11(VAR38),
        .VAR10 = FUN11(VAR10),
        .VAR39 = FUN11(FUN12(VAR6)),
        .VAR40 = FUN13(0),
        .VAR41 = FUN13(0),
        .VAR42 = FUN11(0),
        .VAR43 = FUN13(VAR6),
        .VAR44 = FUN11(1),
        .VAR11 = FUN11(VAR11),
        .VAR45 = FUN11(sizeof(*VAR20)),
    };
    VAR20->VAR46 = FUN11(VAR47);
    if (VAR5 & VAR48)
    {
        VAR20->VAR49 |= FUN13(VAR50);
    }
    VAR24 = FUN14(VAR18, 0, VAR20, VAR6, 0);
    FUN15(VAR20);
    if (VAR24 < 0)
    {
        FUN16(VAR14, -VAR24, "");
        goto VAR51;
    }
    VAR22 = FUN10(2 * VAR6);
    VAR22[0] = FUN13(2 * VAR6);
    VAR24 = FUN14(VAR18, VAR6, VAR22, 2 * VAR6, 0);
    FUN15(VAR22);
    if (VAR24 < 0)
    {
        FUN16(VAR14, -VAR24, "");
        goto VAR51;
    }
    FUN17(VAR18);
    VAR18 = NULL;
    VAR16 = FUN18();
    FUN19(VAR16, "", "");
    VAR18 = FUN7(VAR1, NULL, VAR16, VAR32 | VAR33 | VAR52, &VAR23);
    if (VAR18 == NULL)
    {
        FUN6(VAR14, VAR23);
        VAR24 = -VAR35;
        goto VAR51;
    }
    VAR24 = FUN20(FUN21(VAR18), 3 * VAR6);
    if (VAR24 < 0)
    {
        FUN16(VAR14, -VAR24, ""
                                     "");
        goto VAR51;
    }
    else if (VAR24 != 0)
    {
        FUN22("");
        FUN23();
    }
    VAR24 = FUN24(FUN21(VAR18));
    if (VAR24 < 0)
    {
        FUN16(VAR14, -VAR24, "");
        goto VAR51;
    }
    VAR24 = FUN25(VAR18, VAR2, VAR14);
    if (VAR24 < 0)
    {
        FUN26(VAR14, "");
        goto VAR51;
    }
    if (VAR3)
    {
        VAR24 = FUN27(FUN21(VAR18), VAR3, VAR4);
        if (VAR24 < 0)
        {
            FUN16(VAR14, -VAR24, ""
                                         "",
                             VAR3, VAR4);
            goto VAR51;
        }
    }
    if (VAR12)
    {
        VAR24 = FUN28(FUN21(VAR18), VAR12, VAR9, VAR14);
        if (VAR24 < 0)
        {
            goto VAR51;
        }
    }
    if (VAR7 != VAR53)
    {
        VAR54 *VAR55 = FUN21(VAR18)->VAR56;
        FUN29(&VAR55->VAR57);
        VAR24 = FUN30(FUN21(VAR18));
        FUN31(&VAR55->VAR57);
        if (VAR24 < 0)
        {
            FUN16(VAR14, -VAR24, "");
            goto VAR51;
        }
    }
    FUN17(VAR18);
    VAR18 = NULL;
    VAR16 = FUN18();
    FUN19(VAR16, "", "");
    VAR18 = FUN7(VAR1, NULL, VAR16, VAR32 | VAR58 | VAR59, &VAR23);
    if (VAR18 == NULL)
    {
        FUN6(VAR14, VAR23);
        VAR24 = -VAR35;
        goto VAR51;
    }
    VAR24 = 0;
VAR51:
    if (VAR18)
    {
        FUN17(VAR18);
    }
    return VAR24;
}