void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, bool VAR5, const char *VAR6, bool VAR7, const char *VAR8, enum MirrorSyncMode VAR9, bool VAR10, enum NewImageMode VAR11, bool VAR12, int64_t VAR13, bool VAR14, uint32_t VAR15, bool VAR16, int64_t VAR17, bool VAR18, BlockdevOnError VAR19, bool VAR20, BlockdevOnError VAR21, VAR22 **VAR23)
{
    VAR24 *VAR25;
    VAR24 *VAR26, *VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31 = NULL;
    VAR22 *VAR32 = NULL;
    VAR33 *VAR34 = NULL;
    int VAR35;
    int64_t VAR36;
    int VAR37;
    if (!VAR12)
    {
        VAR13 = 0;
    }
    if (!VAR18)
    {
        VAR19 = VAR38;
    }
    if (!VAR20)
    {
        VAR21 = VAR38;
    }
    if (!VAR10)
    {
        VAR11 = VAR39;
    }
    if (!VAR14)
    {
        VAR15 = 0;
    }
    if (!VAR16)
    {
        VAR17 = VAR40;
    }
    if (VAR15 != 0 && (VAR15 < 512 || VAR15 > 1048576 * 64))
    {
        FUN2(VAR23, VAR41, "", "");
        return;
    }
    if (VAR15 & (VAR15 - 1))
    {
        FUN2(VAR23, VAR41, "", "");
        return;
    }
    VAR25 = FUN3(VAR1);
    if (!VAR25)
    {
        FUN2(VAR23, VAR42, VAR1);
        return;
    }
    VAR29 = FUN4(VAR25);
    FUN5(VAR29);
    if (!FUN6(VAR25))
    {
        FUN2(VAR23, VAR43, VAR1);
        goto VAR44;
    }
    if (!VAR3)
    {
        VAR4 = VAR11 == VAR45 ? NULL : VAR25->VAR31->VAR46;
    }
    if (VAR4)
    {
        VAR31 = FUN7(VAR4);
        if (!VAR31)
        {
            FUN2(VAR23, VAR47, VAR4);
            goto VAR44;
        }
    }
    if (FUN8(VAR25, VAR48, VAR23))
    {
        goto VAR44;
    }
    VAR35 = VAR25->VAR49 | VAR50;
    VAR26 = VAR25->VAR51;
    if (!VAR26 && VAR9 == VAR52)
    {
        VAR9 = VAR53;
    }
    if (VAR9 == VAR54)
    {
        VAR26 = VAR25;
    }
    VAR36 = FUN9(VAR25);
    if (VAR36 < 0)
    {
        FUN10(VAR23, -VAR36, "");
        goto VAR44;
    }
    if (VAR7)
    {
        VAR24 *VAR55;
        VAR28 *VAR56;
        int64_t VAR57;
        if (!VAR5)
        {
            FUN11(VAR23, ""
                             "");
            goto VAR44;
        }
        VAR55 = FUN12(VAR8, &VAR32);
        if (!VAR55)
        {
            FUN13(VAR23, VAR32);
            goto VAR44;
        }
        VAR56 = FUN4(VAR55);
        FUN5(VAR56);
        VAR57 = FUN9(VAR55);
        FUN14(VAR56);
        if (VAR36 != VAR57)
        {
            FUN11(VAR23, ""
                             "");
            goto VAR44;
        }
    }
    if ((VAR9 == VAR53 || !VAR26) && VAR11 != VAR45)
    {
        assert(VAR4 && VAR31);
        FUN15(VAR2, VAR4, NULL, NULL, NULL, VAR36, VAR35, &VAR32, false);
    }
    else
    {
        switch (VAR11)
        {
        case VAR45:
            break;
        case VAR39:
            FUN15(VAR2, VAR4, VAR26->VAR58, VAR26->VAR31->VAR46, NULL, VAR36, VAR35, &VAR32, false);
            break;
        default:
            FUN16();
        }
    }
    if (VAR32)
    {
        FUN13(VAR23, VAR32);
        goto VAR44;
    }
    if (VAR5)
    {
        VAR34 = FUN17();
        FUN18(VAR34, "", FUN19(VAR6));
    }
    VAR27 = NULL;
    VAR37 = FUN20(&VAR27, VAR2, NULL, VAR34, VAR35 | VAR59, VAR31, &VAR32);
    if (VAR37 < 0)
    {
        FUN13(VAR23, VAR32);
        goto VAR44;
    }
    FUN21(VAR27, VAR29);
    FUN22(VAR25, VAR27, VAR7 ? VAR8 : NULL, VAR13, VAR15, VAR17, VAR9, VAR19, VAR21, VAR60, VAR25, &VAR32);
    if (VAR32 != NULL)
    {
        FUN23(VAR27);
        FUN13(VAR23, VAR32);
        goto VAR44;
    }
VAR44:
    FUN14(VAR29);
}