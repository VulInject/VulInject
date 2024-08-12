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
    if (!VAR9)
        return FUN4(VAR33);
    VAR9->VAR34.VAR35 = VAR36;
    VAR9->VAR34.VAR37 = VAR2;
    VAR9->VAR34.VAR38 = 15;
    VAR4->VAR39.VAR40 = VAR41;
    VAR4->VAR39.VAR38 = 15;
    VAR4->VAR39.VAR35 = VAR36;
    VAR4->VAR39.VAR37 = VAR2;
    VAR4->VAR42.VAR40 = VAR43;
    VAR4->VAR42.VAR38 = 15;
    VAR4->VAR42.VAR35 = VAR36;
    VAR4->VAR42.VAR37 = VAR2;
    VAR20 = FUN5(VAR2->VAR44, sizeof(*VAR20));
    if (!VAR20)
    {
        VAR21 = FUN4(VAR33);
        goto VAR45;
    }
    for (VAR16 = 0; VAR16 < VAR2->VAR44; VAR16++)
    {
        VAR11 = VAR2->VAR46[VAR16];
        VAR7 = FUN6(sizeof(VAR6));
        if (!VAR7)
        {
            VAR21 = FUN4(VAR33);
            goto VAR45;
        }
        VAR11->VAR5 = VAR7;
        VAR7->VAR47 = VAR11->VAR48;
        FUN7(VAR11, 33, 1, 90000);
        VAR7->VAR49 = FUN6(VAR4->VAR23);
        if (!VAR7->VAR49)
        {
            VAR21 = FUN4(VAR33);
            goto VAR45;
        }
        VAR7->VAR9 = VAR9;
        if (VAR11->VAR50 < 16)
        {
            VAR7->VAR40 = VAR4->VAR51 + VAR16;
        }
        else if (VAR11->VAR50 < 0x1FFF)
        {
            VAR7->VAR40 = VAR11->VAR50;
        }
        else
        {
            FUN8(VAR2, VAR52, "", VAR11->VAR50);
            VAR21 = FUN4(VAR53);
            goto VAR45;
        }
        if (VAR7->VAR40 == VAR9->VAR34.VAR40)
        {
            FUN8(VAR2, VAR52, "", VAR7->VAR40);
            VAR21 = FUN4(VAR53);
            goto VAR45;
        }
        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
        {
            if (VAR20[VAR17] == VAR7->VAR40)
            {
                FUN8(VAR2, VAR52, "", VAR7->VAR40);
                VAR21 = FUN4(VAR53);
                goto VAR45;
            }
        }
        VAR20[VAR16] = VAR7->VAR40;
        VAR7->VAR54 = VAR55;
        VAR7->VAR56 = VAR55;
        VAR7->VAR57 = 1;
        VAR7->VAR38 = 15;
        if (VAR11->VAR58->VAR59 == VAR60 && VAR9->VAR61 == 0x1fff)
        {
            VAR9->VAR61 = VAR7->VAR40;
            VAR12 = VAR11;
        }
        if (VAR11->VAR58->VAR62 == VAR63 && VAR11->VAR58->VAR64 > 0)
        {
            VAR10 *VAR65;
            VAR7->VAR66 = FUN9();
            if (!VAR7->VAR66)
            {
                VAR21 = FUN4(VAR33);
                goto VAR45;
            }
            VAR7->VAR66->VAR67 = FUN10((VAR4->VAR68 & VAR69) ? "" : "", NULL, NULL);
            if (!VAR7->VAR66->VAR67)
            {
                VAR21 = FUN4(VAR53);
                goto VAR45;
            }
            if (!(VAR65 = FUN11(VAR7->VAR66, NULL)))
            {
                VAR21 = FUN4(VAR33);
                goto VAR45;
            }
            VAR21 = FUN12(VAR65->VAR58, VAR11->VAR58);
            if (VAR21 != 0)
                goto VAR45;
            VAR65->VAR48 = VAR11->VAR48;
            VAR21 = FUN13(VAR7->VAR66, NULL);
            if (VAR21 < 0)
                goto VAR45;
        }
        if (VAR11->VAR58->VAR62 == VAR70)
        {
            VAR7->VAR71 = VAR11->VAR58->VAR72 * 48000 / VAR11->VAR58->VAR73;
        }
    }
    FUN14(&VAR20);
    if (VAR9->VAR61 == 0x1fff && VAR2->VAR44 > 0)
    {
        VAR12 = VAR2->VAR46[0];
        VAR7 = VAR12->VAR5;
        VAR9->VAR61 = VAR7->VAR40;
    }
    else
        VAR7 = VAR12->VAR5;
    if (VAR4->VAR74 > 1)
    {
        VAR9->VAR75 = (VAR4->VAR74 * VAR4->VAR76) / (VAR77 * 8 * 1000);
        VAR4->VAR78 = (VAR4->VAR74 * VAR79) / (VAR77 * 8 * 1000);
        VAR4->VAR80 = (VAR4->VAR74 * VAR81) / (VAR77 * 8 * 1000);
        if (VAR4->VAR82 < 1)
            VAR4->VAR83 = FUN15(VAR2->VAR22, VAR84, VAR85);
    }
    else
    {
        VAR4->VAR78 = 200;
        VAR4->VAR80 = 40;
        if (VAR12->VAR58->VAR59 == VAR86)
        {
            if (!VAR12->VAR58->VAR87)
            {
                FUN8(VAR2, VAR88, "");
                VAR9->VAR75 = VAR12->VAR58->VAR73 / (10 * 512);
            }
            else
            {
                VAR9->VAR75 = VAR12->VAR58->VAR73 / (10 * VAR12->VAR58->VAR87);
            }
        }
        else
        {
            VAR9->VAR75 = VAR7->VAR47.VAR89 / (10 * VAR7->VAR47.VAR90);
        }
        if (!VAR9->VAR75)
            VAR9->VAR75 = 1;
    }
    VAR4->VAR91 = VAR55;
    VAR4->VAR92 = VAR55;
    if (VAR4->VAR93 < VAR94 / 2)
    {
        VAR4->VAR80 = VAR94;
    }
    if (VAR4->VAR95 < VAR94 / 2)
    {
        VAR4->VAR78 = VAR94;
    }
    VAR9->VAR96 = VAR9->VAR75;
    VAR4->VAR97 = VAR4->VAR80 - 1;
    VAR4->VAR98 = VAR4->VAR78 - 1;
    if (VAR4->VAR74 == 1)
        FUN8(VAR2, VAR99, "");
    else
        FUN8(VAR2, VAR99, "", VAR4->VAR74);
    FUN8(VAR2, VAR99, "", VAR9->VAR75, VAR4->VAR78, VAR4->VAR80);
    if (VAR4->VAR100 == -1)
    {
        if (FUN16(VAR2->VAR101, ""))
        {
            VAR4->VAR100 = 1;
        }
        else
        {
            VAR4->VAR100 = 0;
        }
    }
    return 0;
VAR45:
    FUN14(&VAR20);
    for (VAR16 = 0; VAR16 < VAR2->VAR44; VAR16++)
    {
        VAR11 = VAR2->VAR46[VAR16];
        VAR7 = VAR11->VAR5;
        if (VAR7)
        {
            FUN14(&VAR7->VAR49);
            if (VAR7->VAR66)
            {
                FUN17(VAR7->VAR66);
                VAR7->VAR66 = NULL;
            }
        }
        FUN14(&VAR11->VAR5);
    }
    for (VAR16 = 0; VAR16 < VAR4->VAR102; VAR16++)
    {
        VAR9 = VAR4->VAR103[VAR16];
        FUN14(&VAR9->VAR19);
        FUN14(&VAR9->VAR104);
        FUN14(&VAR9);
    }
    FUN14(&VAR4->VAR103);
    return VAR21;
}