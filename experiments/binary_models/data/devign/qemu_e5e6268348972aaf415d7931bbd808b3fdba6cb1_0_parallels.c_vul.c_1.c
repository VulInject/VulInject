static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    ParallelsHeader VAR11;
    int VAR12, VAR13, VAR14;
    VAR15 *VAR16 = NULL;
    VAR6 *VAR17 = NULL;
    char *VAR18;
    VAR2->VAR19 = FUN2(NULL, VAR4, "", VAR2, &VAR20, false, VAR7);
    if (!VAR2->VAR19)
    {
        return -VAR21;
    }
    VAR12 = FUN3(VAR2->VAR19, 0, &VAR11, sizeof(VAR11));
    if (VAR12 < 0)
    {
        goto VAR22;
    }
    VAR2->VAR23 = FUN4(VAR11.VAR24);
    if (FUN5(VAR11.VAR25) != VAR26)
    {
        goto VAR27;
    }
    if (!memcmp(VAR11.VAR28, VAR29, 16))
    {
        VAR9->VAR30 = 1;
        VAR2->VAR23 = 0xffffffff & VAR2->VAR23;
    }
    else if (!memcmp(VAR11.VAR28, VAR31, 16))
    {
        VAR9->VAR30 = FUN5(VAR11.VAR32);
    }
    else
    {
        goto VAR27;
    }
    VAR9->VAR32 = FUN5(VAR11.VAR32);
    if (VAR9->VAR32 == 0)
    {
        FUN6(VAR7, "");
        VAR12 = -VAR21;
        goto VAR22;
    }
    if (VAR9->VAR32 > VAR33 / 513)
    {
        FUN6(VAR7, "");
        VAR12 = -VAR34;
        goto VAR22;
    }
    VAR9->VAR35 = FUN5(VAR11.VAR36);
    if (VAR9->VAR35 > VAR37 / sizeof(VAR38))
    {
        FUN6(VAR7, "");
        VAR12 = -VAR34;
        goto VAR22;
    }
    VAR13 = FUN7(VAR9->VAR35);
    VAR9->VAR39 = FUN8(VAR13, FUN9(VAR2->VAR19->VAR2));
    VAR9->VAR40 = FUN10(VAR2->VAR19->VAR2, VAR9->VAR39);
    if (VAR9->VAR40 == NULL)
    {
        VAR12 = -VAR41;
        goto VAR22;
    }
    VAR9->VAR42 = FUN5(VAR11.VAR43);
    if (VAR9->VAR42 == 0)
    {
        VAR9->VAR42 = FUN8(FUN7(VAR9->VAR35), VAR44);
    }
    if (VAR9->VAR42 < VAR9->VAR39)
    {
        VAR9->VAR39 = VAR13;
    }
    VAR12 = FUN3(VAR2->VAR19, 0, VAR9->VAR40, VAR9->VAR39);
    if (VAR12 < 0)
    {
        goto VAR22;
    }
    VAR9->VAR45 = (VAR38 *)(VAR9->VAR40 + 1);
    for (VAR14 = 0; VAR14 < VAR9->VAR35; VAR14++)
    {
        int64_t VAR46 = FUN11(VAR9, VAR14);
        if (VAR46 >= VAR9->VAR42)
        {
            VAR9->VAR42 = VAR46 + VAR9->VAR32;
        }
    }
    if (FUN5(VAR11.VAR47) == VAR48)
    {
        VAR9->VAR49 = true;
        if ((VAR5 & VAR50) && !(VAR5 & VAR51))
        {
            FUN6(VAR7, ""
                             "");
            VAR12 = -VAR52;
            goto VAR22;
        }
    }
    VAR16 = FUN12(&VAR53, NULL, 0, &VAR17);
    if (VAR17 != NULL)
    {
        goto VAR54;
    }
    FUN13(VAR16, VAR4, &VAR17);
    if (VAR17 != NULL)
    {
        goto VAR54;
    }
    VAR9->VAR55 = FUN14(VAR16, VAR56, 0);
    VAR9->VAR55 = FUN15(VAR9->VAR32, VAR9->VAR55 >> VAR57);
    VAR18 = FUN16(VAR16, VAR58);
    VAR9->VAR59 = FUN17(VAR60, VAR18, VAR61, VAR62, &VAR17);
    FUN18(VAR18);
    if (VAR17 != NULL)
    {
        goto VAR54;
    }
    if (!(VAR5 & VAR63) || !FUN19(VAR2->VAR19->VAR2) || FUN20(VAR2->VAR19, FUN21(VAR2->VAR19->VAR2), VAR64, NULL) != 0)
    {
        VAR9->VAR59 = VAR62;
    }
    if (VAR5 & VAR50)
    {
        VAR9->VAR40->VAR47 = FUN22(VAR48);
        VAR12 = FUN23(VAR2);
        if (VAR12 < 0)
        {
            goto VAR22;
        }
    }
    VAR9->VAR65 = 4 * FUN24();
    VAR9->VAR66 = FUN25(FUN26(VAR9->VAR39, VAR9->VAR65));
    FUN27(&VAR9->VAR67);
    return 0;
VAR27:
    FUN6(VAR7, "");
    VAR12 = -VAR21;
VAR22:
    FUN28(VAR9->VAR40);
    return VAR12;
VAR54:
    FUN29(VAR7, VAR17);
    VAR12 = -VAR21;
    goto VAR22;
}