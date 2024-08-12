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
    if (!VAR2->VAR28)
    {
        VAR14 = FUN2(VAR2->VAR29, "", NULL, 0);
        if (!VAR14)
            VAR14 = FUN2(VAR2->VAR29, "", NULL, 0);
        VAR18 = VAR14 ? VAR14->VAR30 : VAR31;
        VAR15 = FUN2(VAR2->VAR29, "", NULL, 0);
        VAR19 = VAR15 ? VAR15->VAR30 : VAR32;
        VAR9 = FUN3(VAR4, VAR4->VAR33, VAR19, VAR18);
        if (!VAR9)
            return FUN4(VAR34);
        VAR9->VAR35.VAR36 = VAR37;
        VAR9->VAR35.VAR38 = VAR2;
        VAR9->VAR35.VAR39 = 15;
        VAR9->VAR35.VAR40 = VAR4->VAR41 & VAR42;
    }
    else
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR28; VAR16++)
        {
            VAR43 *VAR44 = VAR2->VAR45[VAR16];
            VAR14 = FUN2(VAR44->VAR29, "", NULL, 0);
            if (!VAR14)
                VAR14 = FUN2(VAR44->VAR29, "", NULL, 0);
            VAR18 = VAR14 ? VAR14->VAR30 : VAR31;
            VAR15 = FUN2(VAR44->VAR29, "", NULL, 0);
            VAR19 = VAR15 ? VAR15->VAR30 : VAR32;
            VAR9 = FUN3(VAR4, VAR44->VAR46, VAR19, VAR18);
            if (!VAR9)
                return FUN4(VAR34);
            VAR9->VAR35.VAR36 = VAR37;
            VAR9->VAR35.VAR38 = VAR2;
            VAR9->VAR35.VAR39 = 15;
            VAR9->VAR35.VAR40 = VAR4->VAR41 & VAR42;
            VAR9->VAR44 = VAR44;
        }
    }
    VAR4->VAR47.VAR48 = VAR49;
    VAR4->VAR47.VAR39 = 15;
    VAR4->VAR47.VAR40 = VAR4->VAR41 & VAR42;
    VAR4->VAR47.VAR36 = VAR37;
    VAR4->VAR47.VAR38 = VAR2;
    VAR4->VAR50.VAR48 = VAR51;
    VAR4->VAR50.VAR39 = 15;
    VAR4->VAR50.VAR40 = VAR4->VAR41 & VAR42;
    VAR4->VAR50.VAR36 = VAR37;
    VAR4->VAR50.VAR38 = VAR2;
    VAR20 = FUN5(VAR2->VAR52, sizeof(*VAR20));
    if (!VAR20)
    {
        VAR21 = FUN4(VAR34);
        goto VAR53;
    }
    for (VAR16 = 0; VAR16 < VAR2->VAR52; VAR16++)
    {
        VAR43 *VAR44;
        VAR11 = VAR2->VAR54[VAR16];
        VAR7 = FUN6(sizeof(VAR6));
        if (!VAR7)
        {
            VAR21 = FUN4(VAR34);
            goto VAR53;
        }
        VAR11->VAR5 = VAR7;
        VAR7->VAR55 = VAR11->VAR56;
        FUN7(VAR11, 33, 1, 90000);
        VAR7->VAR57 = FUN6(VAR4->VAR23);
        if (!VAR7->VAR57)
        {
            VAR21 = FUN4(VAR34);
            goto VAR53;
        }
        VAR44 = FUN8(VAR2, NULL, VAR16);
        if (VAR44)
        {
            for (VAR17 = 0; VAR17 < VAR4->VAR58; VAR17++)
            {
                if (VAR4->VAR59[VAR17]->VAR44 == VAR44)
                {
                    VAR9 = VAR4->VAR59[VAR17];
                    break;
                }
            }
        }
        VAR7->VAR9 = VAR9;
        if (VAR11->VAR46 < 16)
        {
            VAR7->VAR48 = VAR4->VAR60 + VAR16;
        }
        else if (VAR11->VAR46 < 0x1FFF)
        {
            VAR7->VAR48 = VAR11->VAR46;
        }
        else
        {
            FUN9(VAR2, VAR61, "", VAR11->VAR46);
            VAR21 = FUN4(VAR62);
            goto VAR53;
        }
        if (VAR7->VAR48 == VAR9->VAR35.VAR48)
        {
            FUN9(VAR2, VAR61, "", VAR7->VAR48);
            VAR21 = FUN4(VAR62);
            goto VAR53;
        }
        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
        {
            if (VAR20[VAR17] == VAR7->VAR48)
            {
                FUN9(VAR2, VAR61, "", VAR7->VAR48);
                VAR21 = FUN4(VAR62);
                goto VAR53;
            }
        }
        VAR20[VAR16] = VAR7->VAR48;
        VAR7->VAR63 = VAR64;
        VAR7->VAR65 = VAR64;
        VAR7->VAR66 = 1;
        VAR7->VAR39 = 15;
        if (VAR11->VAR67->VAR68 == VAR69 && VAR9->VAR70 == 0x1fff)
        {
            VAR9->VAR70 = VAR7->VAR48;
            VAR12 = VAR11;
        }
        if (VAR11->VAR67->VAR71 == VAR72 && VAR11->VAR67->VAR73 > 0)
        {
            VAR10 *VAR74;
            VAR7->VAR75 = FUN10();
            if (!VAR7->VAR75)
            {
                VAR21 = FUN4(VAR34);
                goto VAR53;
            }
            VAR7->VAR75->VAR76 = FUN11((VAR4->VAR41 & VAR77) ? "" : "", NULL, NULL);
            if (!VAR7->VAR75->VAR76)
            {
                VAR21 = FUN4(VAR62);
                goto VAR53;
            }
            if (!(VAR74 = FUN12(VAR7->VAR75, NULL)))
            {
                VAR21 = FUN4(VAR34);
                goto VAR53;
            }
            VAR21 = FUN13(VAR74->VAR67, VAR11->VAR67);
            if (VAR21 != 0)
                goto VAR53;
            VAR74->VAR56 = VAR11->VAR56;
            VAR21 = FUN14(VAR7->VAR75, NULL);
            if (VAR21 < 0)
                goto VAR53;
        }
        if (VAR11->VAR67->VAR71 == VAR78)
        {
            VAR7->VAR79 = VAR11->VAR67->VAR80 * 48000 / VAR11->VAR67->VAR81;
        }
    }
    FUN15(&VAR20);
    if (VAR9->VAR70 == 0x1fff && VAR2->VAR52 > 0)
    {
        VAR12 = VAR2->VAR54[0];
        VAR7 = VAR12->VAR5;
        VAR9->VAR70 = VAR7->VAR48;
    }
    else
        VAR7 = VAR12->VAR5;
    if (VAR4->VAR82 > 1)
    {
        VAR9->VAR83 = (VAR84)VAR4->VAR82 * VAR4->VAR85 / (VAR86 * 8 * 1000);
        VAR4->VAR87 = (VAR84)VAR4->VAR82 * VAR88 / (VAR86 * 8 * 1000);
        VAR4->VAR89 = (VAR84)VAR4->VAR82 * VAR90 / (VAR86 * 8 * 1000);
        if (VAR4->VAR91 < 1)
            VAR4->VAR92 = FUN16(VAR2->VAR22, VAR93, VAR94);
    }
    else
    {
        VAR4->VAR87 = 200;
        VAR4->VAR89 = 40;
        if (VAR12->VAR67->VAR68 == VAR95)
        {
            int VAR96 = FUN17(VAR12->VAR67, 0);
            if (!VAR96)
            {
                FUN9(VAR2, VAR97, "");
                VAR9->VAR83 = VAR12->VAR67->VAR81 / (10 * 512);
            }
            else
            {
                VAR9->VAR83 = VAR12->VAR67->VAR81 / (10 * VAR96);
            }
        }
        else
        {
            VAR9->VAR83 = VAR7->VAR55.VAR98 / (10 * VAR7->VAR55.VAR99);
        }
        if (!VAR9->VAR83)
            VAR9->VAR83 = 1;
    }
    VAR4->VAR100 = VAR64;
    VAR4->VAR101 = VAR64;
    if (VAR4->VAR102 < VAR103 / 2)
    {
        VAR4->VAR89 = VAR103;
    }
    if (VAR4->VAR104 < VAR103 / 2)
    {
        VAR4->VAR87 = VAR103;
    }
    VAR9->VAR105 = VAR9->VAR83;
    VAR4->VAR106 = VAR4->VAR89 - 1;
    VAR4->VAR107 = VAR4->VAR87 - 1;
    if (VAR4->VAR82 == 1)
        FUN9(VAR2, VAR108, "");
    else
        FUN9(VAR2, VAR108, "", VAR4->VAR82);
    FUN9(VAR2, VAR108, "", VAR9->VAR83, VAR4->VAR87, VAR4->VAR89);
    if (VAR4->VAR109 == -1)
    {
        if (FUN18(VAR2->VAR110, ""))
        {
            VAR4->VAR109 = 1;
        }
        else
        {
            VAR4->VAR109 = 0;
        }
    }
    return 0;
VAR53:
    FUN15(&VAR20);
    return VAR21;