static int FUN1(VAR1 *VAR2, CMVideoCodecType VAR3, CFStringRef VAR4, CFNumberRef VAR5, CFDictionaryRef VAR6, CFDictionaryRef VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    SInt32 VAR13 = VAR2->VAR13;
    CFNumberRef VAR14;
    int VAR15 = FUN2(VAR16, VAR2->VAR17, VAR2->VAR18, VAR3, VAR6, VAR7, VAR16, VAR19, VAR2, VAR9);
    if (VAR15 || !VAR11->VAR9)
    {
        FUN3(VAR2, VAR20, "", VAR15);
        if (!VAR11->VAR21)
        {
            FUN3(VAR2, VAR20, "");
        }
        return VAR22;
    }
    VAR14 = FUN4(VAR16, VAR23, &VAR13);
    if (!VAR14)
        return FUN5(VAR24);
    VAR15 = FUN6(VAR11->VAR9, VAR25, VAR14);
    FUN7(VAR14);
    if (VAR15)
    {
        FUN3(VAR2, VAR20, "", VAR15);
        return VAR22;
    }
    if (VAR4)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR26, VAR4);
        if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
        }
    }
    if (VAR2->VAR27 > 0)
    {
        CFNumberRef VAR28 = FUN4(VAR16, VAR29, &VAR2->VAR27);
        if (!VAR28)
        {
            return FUN5(VAR24);
        }
        VAR15 = FUN6(VAR11->VAR9, VAR30, VAR28);
        FUN7(VAR28);
        if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
            return VAR22;
        }
    }
    if (VAR11->VAR31)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR32, VAR33);
        if (VAR15 == VAR34)
        {
            FUN3(VAR2, VAR35, "");
        }
        else if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
        }
    }
    if (VAR11->VAR36)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR37, VAR33);
        if (VAR15 == VAR34)
        {
            FUN3(VAR2, VAR35, "");
        }
        else if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
        }
    }
    if (VAR2->VAR38.VAR39 != 0)
    {
        CFNumberRef VAR39;
        CFNumberRef VAR40;
        CFMutableDictionaryRef VAR41;
        VAR42 *VAR43 = &VAR2->VAR38;
        FUN8(&VAR43->VAR39, &VAR43->VAR40, VAR43->VAR39, VAR43->VAR40, 0xFFFFFFFF);
        VAR39 = FUN4(VAR16, VAR29, &VAR43->VAR39);
        VAR40 = FUN4(VAR16, VAR29, &VAR43->VAR40);
        VAR41 = FUN9(VAR16, 2, &VAR44, &VAR45);
        if (!VAR41 || !VAR39 || !VAR40)
        {
            if (VAR41)
                FUN7(VAR41);
            if (VAR39)
                FUN7(VAR39);
            if (VAR40)
                FUN7(VAR40);
            return FUN5(VAR24);
        }
        FUN10(VAR41, VAR46, VAR39);
        FUN10(VAR41, VAR47, VAR40);
        VAR15 = FUN6(VAR11->VAR9, VAR48, VAR41);
        FUN7(VAR41);
        FUN7(VAR39);
        FUN7(VAR40);
        if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR2->VAR38.VAR39, VAR2->VAR38.VAR40, VAR15);
            return VAR22;
        }
    }
    if (VAR11->VAR49)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR50, VAR11->VAR49);
        if (VAR15)
        {
            FUN3(VAR2, VAR35, "", VAR15);
        }
    }
    if (VAR11->VAR51)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR52, VAR11->VAR51);
        if (VAR15)
        {
            FUN3(VAR2, VAR35, "", VAR15);
        }
    }
    if (VAR11->VAR53)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR54, VAR11->VAR53);
        if (VAR15)
        {
            FUN3(VAR2, VAR35, "", VAR15);
        }
    }
    if (VAR5)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR55, VAR5);
        if (VAR15)
        {
            FUN3(VAR2, VAR35, "", VAR15);
        }
    }
    if (!VAR11->VAR56)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR57, VAR58);
        if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
            return VAR22;
        }
    }
    if (VAR11->VAR59 != VAR60)
    {
        CFStringRef VAR59 = VAR11->VAR59 == VAR61 ? VAR62.VAR63 : VAR62.VAR64;
        VAR15 = FUN6(VAR11->VAR9, VAR62.VAR65, VAR59);
        if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
        }
    }
    if (VAR11->VAR66)
    {
        VAR15 = FUN6(VAR11->VAR9, VAR62.VAR67, VAR33);
        if (VAR15)
        {
            FUN3(VAR2, VAR20, "", VAR15);
        }
    }
    VAR15 = FUN11(VAR11->VAR9);
    if (VAR15)
    {
        FUN3(VAR2, VAR20, "", VAR15);
        return VAR22;
    }
    return 0;
}