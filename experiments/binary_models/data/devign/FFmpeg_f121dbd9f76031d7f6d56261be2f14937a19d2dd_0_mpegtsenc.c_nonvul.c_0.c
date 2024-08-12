static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11, *VAR12 = NULL;
    VAR13 *VAR14, *VAR15;
    int VAR16, VAR17;
    const char *VAR18;
    const char *VAR19;
    int *VAR20;
    int VAR21;
    if (VAR2->VAR22 < 0)
        VAR2->VAR22 = 0;
    VAR4->VAR23 = (VAR4->VAR23 + 14 + 183) / 184 * 184 - 14;
    VAR4->VAR24 = VAR4->VAR25;
    VAR4->VAR26 = VAR4->VAR27;
    VAR14 = FUN2(VAR2->VAR28, "", NULL, 0);
    if (!VAR14)
        VAR14 = FUN2(VAR2->VAR28, "", NULL, 0);
    VAR18 = VAR14 ? VAR14->VAR29 : VAR30;
    VAR15 = FUN2(VAR2->VAR28, "", NULL, 0);
    VAR19 = VAR15 ? VAR15->VAR29 : VAR31;
    VAR9 = FUN3(VAR4, VAR4->VAR32, VAR19, VAR18);
    VAR9->VAR33.VAR34 = VAR35;
    VAR9->VAR33.VAR36 = VAR2;
    VAR9->VAR33.VAR37 = 15;
    VAR4->VAR38.VAR39 = VAR40;
    VAR4->VAR38.VAR37 = 15;
    VAR4->VAR38.VAR34 = VAR35;
    VAR4->VAR38.VAR36 = VAR2;
    VAR4->VAR41.VAR39 = VAR42;
    VAR4->VAR41.VAR37 = 15;
    VAR4->VAR41.VAR34 = VAR35;
    VAR4->VAR41.VAR36 = VAR2;
    VAR20 = FUN4(VAR2->VAR43 * sizeof(*VAR20));
    if (!VAR20)
        return FUN5(VAR44);
    for (VAR16 = 0; VAR16 < VAR2->VAR43; VAR16++)
    {
        VAR11 = VAR2->VAR45[VAR16];
        FUN6(VAR11, 33, 1, 90000);
        VAR7 = FUN7(sizeof(VAR6));
        if (!VAR7)
        {
            VAR21 = FUN5(VAR44);
            goto VAR46;
        }
        VAR11->VAR5 = VAR7;
        VAR7->VAR47 = FUN7(VAR4->VAR23);
        if (!VAR7->VAR47)
        {
            VAR21 = FUN5(VAR44);
            goto VAR46;
        }
        VAR7->VAR9 = VAR9;
        if (VAR11->VAR48 < 16)
        {
            VAR7->VAR39 = VAR4->VAR49 + VAR16;
        }
        else if (VAR11->VAR48 < 0x1FFF)
        {
            VAR7->VAR39 = VAR11->VAR48;
        }
        else
        {
            FUN8(VAR2, VAR50, "", VAR11->VAR48);
            VAR21 = FUN5(VAR51);
            goto VAR46;
        }
        if (VAR7->VAR39 == VAR9->VAR33.VAR39)
        {
            FUN8(VAR2, VAR50, "", VAR7->VAR39);
            VAR21 = FUN5(VAR51);
            goto VAR46;
        }
        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
            if (VAR20[VAR17] == VAR7->VAR39)
            {
                FUN8(VAR2, VAR50, "", VAR7->VAR39);
                VAR21 = FUN5(VAR51);
                goto VAR46;
            }
        VAR20[VAR16] = VAR7->VAR39;
        VAR7->VAR52 = VAR53;
        VAR7->VAR54 = VAR53;
        VAR7->VAR55 = 1;
        VAR7->VAR37 = 15;
        if (VAR11->VAR56->VAR57 == VAR58 && VAR9->VAR59 == 0x1fff)
        {
            VAR9->VAR59 = VAR7->VAR39;
            VAR12 = VAR11;
        }
        if (VAR11->VAR56->VAR60 == VAR61 && VAR11->VAR56->VAR62 > 0)
        {
            VAR10 *VAR63;
            VAR7->VAR64 = FUN9();
            if (!VAR7->VAR64)
            {
                VAR21 = FUN5(VAR44);
                goto VAR46;
            }
            VAR7->VAR64->VAR65 = FUN10((VAR4->VAR66 & VAR67) ? "" : "", NULL, NULL);
            if (!VAR7->VAR64->VAR65)
            {
                VAR21 = FUN5(VAR51);
                goto VAR46;
            }
            VAR63 = FUN11(VAR7->VAR64, NULL);
            VAR21 = FUN12(VAR63->VAR56, VAR11->VAR56);
            if (VAR21 != 0)
                goto VAR46;
            VAR21 = FUN13(VAR7->VAR64, NULL);
            if (VAR21 < 0)
                goto VAR46;
        }
    }
    FUN14(VAR20);
    if (VAR9->VAR59 == 0x1fff && VAR2->VAR43 > 0)
    {
        VAR12 = VAR2->VAR45[0];
        VAR7 = VAR12->VAR5;
        VAR9->VAR59 = VAR7->VAR39;
    }
    if (VAR4->VAR68 > 1)
    {
        VAR9->VAR69 = (VAR4->VAR68 * VAR4->VAR70) / (VAR71 * 8 * 1000);
        VAR4->VAR72 = (VAR4->VAR68 * VAR73) / (VAR71 * 8 * 1000);
        VAR4->VAR74 = (VAR4->VAR68 * VAR75) / (VAR71 * 8 * 1000);
        VAR4->VAR76 = FUN15(VAR2->VAR22, VAR77, VAR78);
    }
    else
    {
        VAR4->VAR72 = 200;
        VAR4->VAR74 = 40;
        if (VAR12->VAR56->VAR57 == VAR79)
        {
            if (!VAR12->VAR56->VAR80)
            {
                FUN8(VAR2, VAR81, "");
                VAR9->VAR69 = VAR12->VAR56->VAR82 / (10 * 512);
            }
            else
            {
                VAR9->VAR69 = VAR12->VAR56->VAR82 / (10 * VAR12->VAR56->VAR80);
            }
        }
        else
        {
            VAR9->VAR69 = VAR12->VAR56->VAR83.VAR84 / (10 * VAR12->VAR56->VAR83.VAR85);
        }
    }
    VAR9->VAR86 = VAR9->VAR69;
    VAR4->VAR87 = VAR4->VAR74 - 1;
    VAR4->VAR88 = VAR4->VAR72 - 1;
    if (VAR4->VAR68 == 1)
        FUN8(VAR2, VAR89, "");
    else
        FUN8(VAR2, VAR89, "", VAR4->VAR68);
    FUN8(VAR2, VAR89, ""
                              "",
           VAR9->VAR69, VAR4->VAR72, VAR4->VAR74);
    FUN16(VAR2->VAR90);
    return 0;
VAR46:
    FUN14(VAR20);
    for (VAR16 = 0; VAR16 < VAR2->VAR43; VAR16++)
    {
        VAR6 *VAR7;
        VAR11 = VAR2->VAR45[VAR16];
        VAR7 = VAR11->VAR5;
        if (VAR7)
        {
            FUN17(&VAR7->VAR47);
            if (VAR7->VAR64)
            {
                FUN18(VAR7->VAR64);
                VAR7->VAR64 = NULL;
            }
        }
        FUN17(&VAR11->VAR5);
    }
    return VAR21;
}