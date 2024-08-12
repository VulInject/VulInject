static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = 0;
    VAR6 *VAR7 = NULL;
    VAR3 *VAR8 = NULL;
    const char *VAR9;
    const char *VAR10;
    const char *VAR11;
    const char *VAR12;
    VAR13 *VAR14 = FUN2(VAR13, VAR2, VAR2);
    VAR15 *VAR16 = VAR2->VAR16;
    switch (VAR16->VAR17)
    {
    case VAR18:
    {
        VAR19 *VAR20 = VAR16->VAR21.VAR22.VAR23;
        VAR9 = VAR20->VAR24;
        VAR10 = VAR20->VAR24;
        VAR12 = NULL;
        VAR11 = VAR20->VAR25;
    }
    break;
    case VAR26:
    {
        VAR27 *VAR20 = VAR16->VAR21.VAR28.VAR23;
        VAR9 = VAR20->VAR29 ? VAR20->VAR9 : NULL;
        VAR10 = VAR20->VAR30 ? VAR20->VAR10 : NULL;
        VAR12 = VAR20->VAR31;
        VAR11 = NULL;
    }
    break;
    default:
        FUN3();
    }
    if (FUN4(VAR2, VAR4) < 0)
    {
        return;
    }
    VAR14->VAR32 = FUN5(VAR9, VAR10, VAR4);
    if (!VAR14->VAR32)
    {
        return;
    }
    VAR14->VAR33 = FUN6(VAR14->VAR32);
    FUN7(VAR14->VAR33);
    FUN8(VAR14->VAR32);
    if (!FUN9(VAR14->VAR32))
    {
        FUN10(VAR4, VAR34, VAR9);
        return;
    }
    if (FUN11(VAR14->VAR32, VAR35, VAR4))
    {
        return;
    }
    if (!FUN12(VAR14->VAR32))
    {
        if (FUN13(VAR14->VAR32))
        {
            FUN10(VAR4, VAR36);
            return;
        }
    }
    if (!FUN14(VAR14->VAR32))
    {
        FUN10(VAR4, VAR37, "");
        return;
    }
    if (VAR16->VAR17 == VAR26)
    {
        VAR27 *VAR20 = VAR16->VAR21.VAR28.VAR23;
        const char *VAR38 = VAR20->VAR39 ? VAR20->VAR38 : "";
        enum NewImageMode VAR40;
        const char *VAR41 = VAR20->VAR42 ? VAR20->VAR41 : NULL;
        if (VAR10 && !VAR41)
        {
            FUN10(VAR4, "");
            return;
        }
        if (VAR41 && FUN5(VAR41, VAR41, NULL))
        {
            FUN10(VAR4, "");
            return;
        }
        VAR5 = VAR14->VAR32->VAR43;
        VAR5 &= ~(VAR44 | VAR45 | VAR46);
        VAR40 = VAR20->VAR47 ? VAR20->VAR40 : VAR48;
        if (VAR40 != VAR49)
        {
            int64_t VAR50 = FUN15(VAR14->VAR32);
            if (VAR50 < 0)
            {
                FUN16(VAR4, -VAR50, "");
                return;
            }
            FUN17(VAR12, VAR38, VAR14->VAR32->VAR51, VAR14->VAR32->VAR52->VAR53, NULL, VAR50, VAR5, false, &VAR8);
            if (VAR8)
            {
                FUN18(VAR4, VAR8);
                return;
            }
        }
        VAR7 = FUN19();
        if (VAR20->VAR42)
        {
            FUN20(VAR7, "", VAR41);
        }
        FUN20(VAR7, "", VAR38);
        VAR5 |= VAR45;
    }
    VAR14->VAR54 = FUN21(VAR12, VAR11, VAR7, VAR5, VAR4);
    if (!VAR14->VAR54)
    {
        return;
    }
    if (FUN22(VAR14->VAR54))
    {
        FUN10(VAR4, "");
        return;
    }
    if (FUN11(VAR14->VAR54, VAR35, VAR4))
    {
        return;
    }
    if (VAR14->VAR54->VAR55 != NULL)
    {
        FUN10(VAR4, "");
        return;
    }
    if (!VAR14->VAR54->VAR52->VAR56)
    {
        FUN10(VAR4, "");
        return;
    }
    FUN23(VAR14->VAR54, VAR14->VAR33);
    FUN24(VAR14->VAR54);
    FUN25(VAR14->VAR54, VAR14->VAR32, &VAR8);
    if (VAR8)
    {
        FUN18(VAR4, VAR8);
        return;
    }
    VAR14->VAR57 = true;
}