void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, enum MirrorSyncMode VAR5, bool VAR6, enum NewImageMode VAR7, bool VAR8, int64_t VAR9, bool VAR10, BlockdevOnError VAR11, bool VAR12, BlockdevOnError VAR13, VAR14 **VAR15)
{
    VAR16 *VAR17;
    VAR16 *VAR18;
    VAR16 *VAR19 = NULL;
    VAR20 *VAR21;
    VAR22 *VAR23 = NULL;
    VAR14 *VAR24 = NULL;
    int VAR25;
    int64_t VAR26;
    int VAR27;
    if (!VAR8)
    {
        VAR9 = 0;
    }
    if (!VAR10)
    {
        VAR11 = VAR28;
    }
    if (!VAR12)
    {
        VAR13 = VAR28;
    }
    if (!VAR6)
    {
        VAR7 = VAR29;
    }
    VAR17 = FUN2(VAR1);
    if (!VAR17)
    {
        FUN3(VAR15, VAR30, VAR1);
        return;
    }
    VAR21 = FUN4(VAR17);
    FUN5(VAR21);
    if (!FUN6(VAR17))
    {
        FUN3(VAR15, VAR31, VAR1);
        goto VAR32;
    }
    if (!VAR3)
    {
        VAR4 = VAR7 == VAR33 ? NULL : VAR17->VAR23->VAR34;
    }
    if (VAR4)
    {
        VAR23 = FUN7(VAR4);
        if (!VAR23)
        {
            FUN3(VAR15, VAR35, VAR4);
            goto VAR32;
        }
    }
    if (FUN8(VAR17, VAR36, VAR15))
    {
        goto VAR32;
    }
    VAR25 = VAR17->VAR37 | VAR38;
    if (VAR5 == VAR39)
    {
        VAR19 = VAR17->VAR40;
        if (!VAR19)
        {
            VAR5 = VAR41;
        }
    }
    if (VAR5 == VAR42)
    {
        VAR19 = VAR17;
    }
    VAR26 = FUN9(VAR17);
    if (VAR26 < 0)
    {
        FUN10(VAR15, -VAR26, "");
        goto VAR32;
    }
    if (VAR7 != VAR33)
    {
        assert(VAR4 && VAR23);
        if (VAR19)
        {
            FUN11(VAR2, VAR4, VAR19->VAR43, VAR19->VAR23->VAR34, NULL, VAR26, VAR25, &VAR24, false);
        }
        else
        {
            FUN11(VAR2, VAR4, NULL, NULL, NULL, VAR26, VAR25, &VAR24, false);
        }
    }
    if (VAR24)
    {
        FUN12(VAR15, VAR24);
        goto VAR32;
    }
    VAR18 = NULL;
    VAR27 = FUN13(&VAR18, VAR2, NULL, NULL, VAR25, VAR23, &VAR24);
    if (VAR27 < 0)
    {
        FUN12(VAR15, VAR24);
        goto VAR32;
    }
    FUN14(VAR18, VAR21);
    FUN15(VAR17, VAR18, VAR9, VAR5, VAR11, VAR13, VAR44, VAR17, &VAR24);
    if (VAR24 != NULL)
    {
        FUN16(VAR18);
        FUN12(VAR15, VAR24);
        goto VAR32;
    }
VAR32:
    FUN17(VAR21);
}