static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5 = 0, VAR6;
    VAR7 *VAR8 = NULL;
    VAR3 *VAR9 = NULL;
    const char *VAR10;
    const char *VAR11;
    const char *VAR12;
    const char *VAR13;
    VAR14 *VAR15 = FUN2(VAR14, VAR2, VAR2);
    VAR16 *VAR17 = VAR2->VAR17;
    switch (VAR17->VAR18)
    {
    case VAR19:
    {
        VAR20 *VAR21 = VAR17->VAR22.VAR23.VAR24;
        VAR10 = VAR21->VAR25;
        VAR11 = VAR21->VAR25;
        VAR13 = NULL;
        VAR12 = VAR21->VAR26;
    }
    break;
    case VAR27:
    {
        VAR28 *VAR21 = VAR17->VAR22.VAR29.VAR24;
        VAR10 = VAR21->VAR30 ? VAR21->VAR10 : NULL;
        VAR11 = VAR21->VAR31 ? VAR21->VAR11 : NULL;
        VAR13 = VAR21->VAR32;
        VAR12 = NULL;
    }
    break;
    default:
        FUN3();
    }
    if (FUN4(VAR2, VAR4) < 0)
    {
        return;
    }
    VAR15->VAR33 = FUN5(VAR10, VAR11, VAR4);
    if (!VAR15->VAR33)
    {
        return;
    }
    VAR15->VAR34 = FUN6(VAR15->VAR33);
    FUN7(VAR15->VAR34);
    FUN8(VAR15->VAR33);
    if (!FUN9(VAR15->VAR33))
    {
        FUN10(VAR4, VAR35, VAR10);
        return;
    }
    if (FUN11(VAR15->VAR33, VAR36, VAR4))
    {
        return;
    }
    if (!FUN12(VAR15->VAR33))
    {
        if (FUN13(VAR15->VAR33))
        {
            FUN10(VAR4, VAR37);
            return;
        }
    }
    if (!FUN14(VAR15->VAR33))
    {
        FUN10(VAR4, VAR38, "");
        return;
    }
    if (VAR17->VAR18 == VAR27)
    {
        VAR28 *VAR21 = VAR17->VAR22.VAR29.VAR24;
        const char *VAR39 = VAR21->VAR40 ? VAR21->VAR39 : "";
        enum NewImageMode VAR41;
        const char *VAR42 = VAR21->VAR43 ? VAR21->VAR42 : NULL;
        if (VAR11 && !VAR42)
        {
            FUN10(VAR4, "");
            return;
        }
        if (VAR42 && FUN5(VAR42, VAR42, NULL))
        {
            FUN10(VAR4, "");
            return;
        }
        VAR5 = VAR15->VAR33->VAR44;
        VAR41 = VAR21->VAR45 ? VAR21->VAR41 : VAR46;
        if (VAR41 != VAR47)
        {
            int64_t VAR48 = FUN15(VAR15->VAR33);
            if (VAR48 < 0)
            {
                FUN16(VAR4, -VAR48, "");
                return;
            }
            FUN17(VAR13, VAR39, VAR15->VAR33->VAR49, VAR15->VAR33->VAR50->VAR51, NULL, VAR48, VAR5, &VAR9, false);
            if (VAR9)
            {
                FUN18(VAR4, VAR9);
                return;
            }
        }
        VAR8 = FUN19();
        if (VAR21->VAR43)
        {
            FUN20(VAR8, "", FUN21(VAR42));
        }
        FUN20(VAR8, "", FUN21(VAR39));
        VAR5 |= VAR52;
    }
    assert(VAR15->VAR53 == NULL);
    VAR6 = FUN22(&VAR15->VAR53, VAR13, VAR12, VAR8, VAR5, VAR4);
    if (VAR6 != 0)
    {
        return;
    }
    if (VAR15->VAR53->VAR54 != NULL)
    {
        FUN10(VAR4, "", FUN23(VAR15->VAR53->VAR54));
        return;
    }
    if (FUN11(VAR15->VAR53, VAR36, VAR4))
    {
        return;
    }
    if (VAR15->VAR53->VAR55 != NULL)
    {
        FUN10(VAR4, "");
        return;
    }
    if (!VAR15->VAR53->VAR50->VAR56)
    {
        FUN10(VAR4, "");
    }
}