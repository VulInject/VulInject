void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, bool VAR5, const char *VAR6, bool VAR7, const char *VAR8, enum MirrorSyncMode VAR9, bool VAR10, enum NewImageMode VAR11, bool VAR12, int64_t VAR13, bool VAR14, uint32_t VAR15, bool VAR16, int64_t VAR17, bool VAR18, BlockdevOnError VAR19, bool VAR20, BlockdevOnError VAR21, bool VAR22, bool VAR23, VAR24 **VAR25)
{
    VAR26 *VAR27;
    VAR28 *VAR29;
    VAR28 *VAR30, *VAR31;
    VAR32 *VAR33;
    VAR34 *VAR35 = NULL;
    VAR24 *VAR36 = NULL;
    VAR37 *VAR38 = NULL;
    int VAR39;
    int64_t VAR40;
    int VAR41;
    if (!VAR12)
    {
        VAR13 = 0;
    }
    if (!VAR18)
    {
        VAR19 = VAR42;
    }
    if (!VAR20)
    {
        VAR21 = VAR42;
    }
    if (!VAR10)
    {
        VAR11 = VAR43;
    }
    if (!VAR14)
    {
        VAR15 = 0;
    }
    if (!VAR16)
    {
        VAR17 = 0;
    }
    if (!VAR22)
    {
        VAR23 = true;
    }
    if (VAR15 != 0 && (VAR15 < 512 || VAR15 > 1048576 * 64))
    {
        FUN2(VAR25, VAR44, "", "");
        return;
    }
    if (VAR15 & (VAR15 - 1))
    {
        FUN2(VAR25, VAR44, "", "");
        return;
    }
    VAR27 = FUN3(VAR1);
    if (!VAR27)
    {
        FUN4(VAR25, VAR45, "", VAR1);
        return;
    }
    VAR29 = FUN5(VAR27);
    VAR33 = FUN6(VAR29);
    FUN7(VAR33);
    if (!FUN8(VAR29))
    {
        FUN2(VAR25, VAR46, VAR1);
        goto VAR47;
    }
    if (!VAR3)
    {
        VAR4 = VAR11 == VAR48 ? NULL : VAR29->VAR35->VAR49;
    }
    if (VAR4)
    {
        VAR35 = FUN9(VAR4);
        if (!VAR35)
        {
            FUN2(VAR25, VAR50, VAR4);
            goto VAR47;
        }
    }
    if (FUN10(VAR29, VAR51, VAR25))
    {
        goto VAR47;
    }
    VAR39 = VAR29->VAR52 | VAR53;
    VAR30 = VAR29->VAR54;
    if (!VAR30 && VAR9 == VAR55)
    {
        VAR9 = VAR56;
    }
    if (VAR9 == VAR57)
    {
        VAR30 = VAR29;
    }
    VAR40 = FUN11(VAR29);
    if (VAR40 < 0)
    {
        FUN12(VAR25, -VAR40, "");
        goto VAR47;
    }
    if (VAR7)
    {
        VAR28 *VAR58;
        VAR32 *VAR59;
        int64_t VAR60;
        if (!VAR5)
        {
            FUN2(VAR25, ""
                             "");
            goto VAR47;
        }
        VAR58 = FUN13(VAR29, VAR8, &VAR36);
        if (!VAR58)
        {
            FUN14(VAR25, VAR36);
            goto VAR47;
        }
        VAR59 = FUN6(VAR58);
        FUN7(VAR59);
        VAR60 = FUN11(VAR58);
        FUN15(VAR59);
        if (VAR40 != VAR60)
        {
            FUN2(VAR25, ""
                             "");
            goto VAR47;
        }
    }
    if ((VAR9 == VAR56 || !VAR30) && VAR11 != VAR48)
    {
        assert(VAR4 && VAR35);
        FUN16(VAR2, VAR4, NULL, NULL, NULL, VAR40, VAR39, &VAR36, false);
    }
    else
    {
        switch (VAR11)
        {
        case VAR48:
            break;
        case VAR43:
            FUN16(VAR2, VAR4, VAR30->VAR61, VAR30->VAR35->VAR49, NULL, VAR40, VAR39, &VAR36, false);
            break;
        default:
            FUN17();
        }
    }
    if (VAR36)
    {
        FUN14(VAR25, VAR36);
        goto VAR47;
    }
    if (VAR5)
    {
        VAR38 = FUN18();
        FUN19(VAR38, "", FUN20(VAR6));
    }
    VAR31 = NULL;
    VAR41 = FUN21(&VAR31, VAR2, NULL, VAR38, VAR39 | VAR62, VAR35, &VAR36);
    if (VAR41 < 0)
    {
        FUN14(VAR25, VAR36);
        goto VAR47;
    }
    FUN22(VAR31, VAR33);
    FUN23(VAR29, VAR31, VAR7 ? VAR8 : NULL, VAR13, VAR15, VAR17, VAR9, VAR19, VAR21, VAR23, VAR63, VAR29, &VAR36);
    if (VAR36 != NULL)
    {
        FUN24(VAR31);
        FUN14(VAR25, VAR36);
        goto VAR47;
    }
VAR47:
    FUN15(VAR33);
}