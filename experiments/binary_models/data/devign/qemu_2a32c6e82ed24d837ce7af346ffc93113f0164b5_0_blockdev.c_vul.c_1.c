void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR5 *VAR7, *VAR8;
    VAR9 *VAR10;
    BlockMirrorBackingMode VAR11;
    VAR3 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    int VAR15;
    int64_t VAR16;
    const char *VAR17 = VAR2->VAR17;
    VAR6 = FUN2(VAR2->VAR18, VAR4);
    if (!VAR6)
    {
        return;
    }
    VAR10 = FUN3(VAR6);
    FUN4(VAR10);
    if (!VAR2->VAR19)
    {
        VAR2->VAR20 = VAR21;
    }
    if (!VAR2->VAR22)
    {
        VAR17 = (VAR2->VAR20 == VAR23 ? NULL : VAR6->VAR24->VAR25);
    }
    VAR15 = VAR6->VAR26 | VAR27;
    VAR7 = FUN5(VAR6);
    if (!VAR7 && VAR2->VAR28 == VAR29)
    {
        VAR2->VAR28 = VAR30;
    }
    if (VAR2->VAR28 == VAR31)
    {
        VAR7 = VAR6;
    }
    VAR16 = FUN6(VAR6);
    if (VAR16 < 0)
    {
        FUN7(VAR4, -VAR16, "");
        goto VAR32;
    }
    if (VAR2->VAR33)
    {
        VAR5 *VAR34;
        VAR9 *VAR35;
        int64_t VAR36;
        if (!VAR2->VAR37)
        {
            FUN8(VAR4, ""
                             "");
            goto VAR32;
        }
        VAR34 = FUN9(VAR6, VAR2->VAR38, &VAR12);
        if (!VAR34)
        {
            FUN10(VAR4, VAR12);
            goto VAR32;
        }
        VAR35 = FUN3(VAR34);
        FUN4(VAR35);
        VAR36 = FUN6(VAR34);
        FUN11(VAR35);
        if (VAR16 != VAR36)
        {
            FUN8(VAR4, ""
                             "");
            goto VAR32;
        }
    }
    if (VAR2->VAR20 == VAR21)
    {
        VAR11 = VAR39;
    }
    else
    {
        VAR11 = VAR40;
    }
    if ((VAR2->VAR28 == VAR30 || !VAR7) && VAR2->VAR20 != VAR23)
    {
        assert(VAR17);
        FUN12(VAR2->VAR41, VAR17, NULL, NULL, NULL, VAR16, VAR15, false, &VAR12);
    }
    else
    {
        switch (VAR2->VAR20)
        {
        case VAR23:
            break;
        case VAR21:
            FUN12(VAR2->VAR41, VAR17, VAR7->VAR42, VAR7->VAR24->VAR25, NULL, VAR16, VAR15, false, &VAR12);
            break;
        default:
            FUN13();
        }
    }
    if (VAR12)
    {
        FUN10(VAR4, VAR12);
        goto VAR32;
    }
    VAR14 = FUN14();
    if (VAR2->VAR37)
    {
        FUN15(VAR14, "", VAR2->VAR43);
    }
    if (VAR17)
    {
        FUN15(VAR14, "", VAR17);
    }
    VAR8 = FUN16(VAR2->VAR41, NULL, VAR14, VAR15 | VAR44, VAR4);
    if (!VAR8)
    {
        goto VAR32;
    }
    FUN17(VAR8, VAR10);
    FUN18(VAR2->VAR45 ? VAR2->VAR46 : NULL, VAR6, VAR8, VAR2->VAR33, VAR2->VAR38, VAR2->VAR28, VAR11, VAR2->VAR47, VAR2->VAR48, VAR2->VAR49, VAR2->VAR50, VAR2->VAR51, VAR2->VAR52, VAR2->VAR53, VAR2->VAR54, VAR2->VAR55, VAR2->VAR56, VAR2->VAR57, VAR2->VAR58, false, NULL, &VAR12);
    FUN19(VAR8);
    FUN10(VAR4, VAR12);
VAR32:
    FUN11(VAR10);
}