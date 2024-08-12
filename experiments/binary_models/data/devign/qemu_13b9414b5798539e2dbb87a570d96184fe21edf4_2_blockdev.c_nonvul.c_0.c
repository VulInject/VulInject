static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR7 *VAR9;
    VAR7 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14;
    VAR15 *VAR16 = NULL;
    VAR5 *VAR17 = NULL;
    int VAR18;
    int64_t VAR19;
    if (!VAR2->VAR20)
    {
        VAR2->VAR21 = 0;
    }
    if (!VAR2->VAR22)
    {
        VAR2->VAR23 = VAR24;
    }
    if (!VAR2->VAR25)
    {
        VAR2->VAR26 = VAR24;
    }
    if (!VAR2->VAR27)
    {
        VAR2->VAR28 = VAR29;
    }
    if (!VAR2->VAR30)
    {
        VAR2->VAR31 = NULL;
    }
    if (!VAR2->VAR32)
    {
        VAR2->VAR33 = false;
    }
    VAR8 = FUN2(VAR2->VAR34, VAR6);
    if (!VAR8)
    {
        return;
    }
    VAR14 = FUN3(VAR8);
    FUN4(VAR14);
    if (!VAR2->VAR35)
    {
        VAR2->VAR36 = VAR2->VAR28 == VAR37 ? NULL : (char *)VAR8->VAR38->VAR39;
    }
    if (FUN5(VAR8, VAR40, VAR6))
    {
        goto VAR41;
    }
    VAR18 = VAR8->VAR42 | VAR43;
    if (VAR2->VAR44 == VAR45)
    {
        VAR10 = FUN6(VAR8);
        if (!VAR10)
        {
            VAR2->VAR44 = VAR46;
        }
    }
    if (VAR2->VAR44 == VAR47)
    {
        VAR10 = VAR8;
    }
    VAR19 = FUN7(VAR8);
    if (VAR19 < 0)
    {
        FUN8(VAR6, -VAR19, "");
        goto VAR41;
    }
    if (VAR2->VAR28 != VAR37)
    {
        assert(VAR2->VAR36);
        if (VAR10)
        {
            FUN9(VAR2->VAR48, VAR2->VAR36, VAR10->VAR49, VAR10->VAR38->VAR39, NULL, VAR19, VAR18, &VAR17, false);
        }
        else
        {
            FUN9(VAR2->VAR48, VAR2->VAR36, NULL, NULL, NULL, VAR19, VAR18, &VAR17, false);
        }
    }
    if (VAR17)
    {
        FUN10(VAR6, VAR17);
        goto VAR41;
    }
    if (VAR2->VAR36)
    {
        VAR16 = FUN11();
        FUN12(VAR16, "", FUN13(VAR2->VAR36));
    }
    VAR9 = FUN14(VAR2->VAR48, NULL, VAR16, VAR18, VAR6);
    if (!VAR9)
    {
        goto VAR41;
    }
    FUN15(VAR9, VAR14);
    if (VAR2->VAR50)
    {
        VAR12 = FUN16(VAR8, VAR2->VAR51);
        if (!VAR12)
        {
            FUN17(VAR6, "", VAR2->VAR51);
            FUN18(VAR9);
            goto VAR41;
        }
    }
    FUN19(VAR2->VAR31, VAR8, VAR9, VAR2->VAR21, VAR2->VAR44, VAR12, VAR2->VAR33, VAR2->VAR23, VAR2->VAR26, VAR52, VAR8, VAR4, &VAR17);
    FUN18(VAR9);
    if (VAR17 != NULL)
    {
        FUN10(VAR6, VAR17);
        goto VAR41;
    }
VAR41:
    FUN20(VAR14);
}