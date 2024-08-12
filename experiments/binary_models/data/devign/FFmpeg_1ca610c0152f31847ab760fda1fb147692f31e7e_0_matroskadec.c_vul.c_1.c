static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10;
    VAR11 *VAR12;
    VAR8 *VAR13 = &VAR6->VAR14;
    VAR15 *VAR14;
    VAR16 *VAR17;
    VAR8 *VAR18;
    VAR19 *VAR20;
    int VAR21 = 1;
    Ebml VAR22 = {0};
    VAR23 *VAR24;
    int VAR25, VAR26;
    VAR6->VAR27 = VAR2;
    if (FUN2(VAR6, VAR28, &VAR22) || VAR22.VAR29 > VAR30 || VAR22.VAR31 > sizeof(VAR32) || VAR22.VAR33 > sizeof(VAR34) || strcmp(VAR22.VAR35, "") || VAR22.VAR36 > 2)
    {
        FUN3(VAR6->VAR27, VAR37, ""
                                            "" VAR38 "" VAR38 "",
               VAR22.VAR29, VAR22.VAR35, VAR22.VAR36);
        return VAR39;
    }
    FUN4(VAR28, &VAR22);
    if (FUN2(VAR6, VAR40, VAR6) < 0)
        return -1;
    FUN5(VAR6);
    if (VAR6->VAR41)
        VAR6->VAR27->VAR41 = VAR6->VAR41 * VAR6->VAR42 * 1000 / VAR43;
    if (VAR6->VAR44)
        strncpy(VAR6->VAR27->VAR44, VAR6->VAR44, sizeof(VAR6->VAR27->VAR44) - 1);
    FUN6(VAR2, &VAR6->VAR45);
    VAR17 = VAR6->VAR17.VAR46;
    for (VAR25 = 0; VAR25 < VAR6->VAR17.VAR47; VAR25++)
    {
        VAR16 *VAR48 = &VAR17[VAR25];
        enum CodecID VAR49 = VAR50;
        VAR8 *VAR51 = &VAR17->VAR52;
        VAR53 *VAR52 = VAR51->VAR46;
        VAR54 *VAR55 = NULL;
        int VAR56 = 0;
        int VAR57 = 0;
        if (VAR48->VAR58 != VAR59 && VAR48->VAR58 != VAR60 && VAR48->VAR58 != VAR61)
        {
            FUN3(VAR6->VAR27, VAR62, "" VAR38 "", VAR48->VAR58);
            continue;
        }
        if (VAR48->VAR49 == NULL)
            continue;
        if (VAR48->VAR58 == VAR59)
        {
            if (!VAR48->VAR63)
                VAR48->VAR63 = 1000000000 / VAR48->VAR64.VAR65;
            if (!VAR48->VAR64.VAR66)
                VAR48->VAR64.VAR66 = VAR48->VAR64.VAR67;
            if (!VAR48->VAR64.VAR68)
                VAR48->VAR64.VAR68 = VAR48->VAR64.VAR69;
        }
        else if (VAR48->VAR58 == VAR60)
        {
            if (!VAR48->VAR70.VAR71)
                VAR48->VAR70.VAR71 = VAR48->VAR70.VAR72;
        }
        if (VAR51->VAR47 > 1)
        {
            FUN3(VAR6->VAR27, VAR37, "");
        }
        else if (VAR51->VAR47 == 1)
        {
            if (VAR52[0].VAR58 || (VAR52[0].VAR73.VAR74 != VAR75 && VAR52[0].VAR73.VAR74 != VAR76 && VAR52[0].VAR73.VAR74 != VAR77 && VAR52[0].VAR73.VAR74 != VAR78))
            {
                VAR52[0].VAR79 = 0;
                FUN3(VAR6->VAR27, VAR37, "");
            }
            else if (VAR48->VAR80.VAR81 && VAR52[0].VAR79 & 2)
            {
                VAR54 *VAR80 = VAR48->VAR80.VAR82;
                int VAR83 = FUN7(&VAR48->VAR80.VAR82, &VAR48->VAR80.VAR81, VAR48);
                if (VAR83 < 0)
                {
                    VAR48->VAR80.VAR82 = NULL;
                    VAR48->VAR80.VAR81 = 0;
                    FUN3(VAR6->VAR27, VAR37, "");
                }
                else if (VAR83 > 0)
                {
                    VAR48->VAR80.VAR82 = FUN8(VAR48->VAR80.VAR81 + VAR83);
                    memcpy(VAR48->VAR80.VAR82, VAR52[0].VAR73.VAR84.VAR82, VAR83);
                    memcpy(VAR48->VAR80.VAR82 + VAR83, VAR80, VAR48->VAR80.VAR81);
                    VAR48->VAR80.VAR81 += VAR83;
                }
                if (VAR80 != VAR48->VAR80.VAR82)
                    FUN9(VAR80);
            }
        }
        for (VAR26 = 0; VAR85[VAR26].VAR86 != VAR50; VAR26++)
        {
            if (!FUN10(VAR85[VAR26].VAR87, VAR48->VAR49, strlen(VAR85[VAR26].VAR87)))
            {
                VAR49 = VAR85[VAR26].VAR86;
                break;
            }
        }
        VAR24 = VAR48->VAR88 = FUN11(VAR2, 0);
        if (VAR24 == NULL)
            return FUN12(VAR89);
        if (!strcmp(VAR48->VAR49, "") && VAR48->VAR80.VAR81 >= 40 && VAR48->VAR80.VAR82 != NULL)
        {
            VAR48->VAR64.VAR90 = FUN13(VAR48->VAR80.VAR82 + 16);
            VAR49 = FUN14(VAR91, VAR48->VAR64.VAR90);
        }
        else if (!strcmp(VAR48->VAR49, "") && VAR48->VAR80.VAR81 >= 18 && VAR48->VAR80.VAR82 != NULL)
        {
            uint16_t VAR92 = FUN15(VAR48->VAR80.VAR82);
            VAR49 = FUN14(VAR93, VAR92);
        }
        else if (!strcmp(VAR48->VAR49, "") && (VAR48->VAR80.VAR81 >= 86) && (VAR48->VAR80.VAR82 != NULL))
        {
            VAR48->VAR64.VAR90 = FUN13(VAR48->VAR80.VAR82);
            VAR49 = FUN14(VAR94, VAR48->VAR64.VAR90);
        }
        else if (VAR49 == VAR95)
        {
            switch (VAR48->VAR70.VAR96)
            {
            case 8:
                VAR49 = VAR97;
                break;
            case 24:
                VAR49 = VAR98;
                break;
            case 32:
                VAR49 = VAR99;
                break;
            }
        }
        else if (VAR49 == VAR100)
        {
            switch (VAR48->VAR70.VAR96)
            {
            case 8:
                VAR49 = VAR97;
                break;
            case 24:
                VAR49 = VAR101;
                break;
            case 32:
                VAR49 = VAR102;
                break;
            }
        }
        else if (VAR49 == VAR103 && VAR48->VAR70.VAR96 == 64)
        {
            VAR49 = VAR104;
        }
        else if (VAR49 == VAR105 && !VAR48->VAR80.VAR81)
        {
            int VAR106 = FUN16(VAR48->VAR49);
            int VAR107 = FUN17(VAR48->VAR70.VAR72);
            VAR55 = FUN8(5);
            if (VAR55 == NULL)
                return FUN12(VAR89);
            VAR55[0] = (VAR106 << 3) | ((VAR107 & 0x0E) >> 1);
            VAR55[1] = ((VAR107 & 0x01) << 7) | (VAR48->VAR70.VAR108 << 3);
            if (strstr(VAR48->VAR49, ""))
            {
                VAR107 = FUN17(VAR48->VAR70.VAR71);
                VAR55[2] = 0x56;
                VAR55[3] = 0xE5;
                VAR55[4] = 0x80 | (VAR107 << 3);
                VAR56 = 5;
            }
            else
                VAR56 = 2;
        }
        else if (VAR49 == VAR109)
        {
            ByteIOContext VAR110;
            VAR56 = 30;
            VAR55 = FUN18(VAR56);
            if (VAR55 == NULL)
                return FUN12(VAR89);
            FUN19(&VAR110, VAR55, VAR56, 1, NULL, NULL, NULL, NULL);
            FUN20(&VAR110, "", 4);
            FUN21(&VAR110, 1);
            FUN21(&VAR110, VAR48->VAR70.VAR108);
            FUN21(&VAR110, VAR48->VAR70.VAR96);
            FUN22(&VAR110, VAR48->VAR70.VAR71);
            FUN22(&VAR110, VAR6->VAR27->VAR41 * VAR48->VAR70.VAR71);
        }
        else if (VAR49 == VAR111 || VAR49 == VAR112 || VAR49 == VAR113 || VAR49 == VAR114)
        {
            VAR57 = 26;
            VAR48->VAR80.VAR81 -= VAR57;
        }
        else if (VAR49 == VAR115)
        {
            VAR48->VAR70.VAR71 = 8000;
            VAR48->VAR70.VAR108 = 1;
        }
        else if (VAR49 == VAR116 || VAR49 == VAR117 || VAR49 == VAR118)
        {
            ByteIOContext VAR110;
            FUN19(&VAR110, VAR48->VAR80.VAR82, VAR48->VAR80.VAR81, 0, NULL, NULL, NULL, NULL);
            FUN23(&VAR110, 24);
            VAR48->VAR70.VAR119 = FUN24(&VAR110);
            FUN23(&VAR110, 12);
            VAR48->VAR70.VAR120 = FUN25(&VAR110);
            VAR48->VAR70.VAR121 = FUN25(&VAR110);
            VAR48->VAR70.VAR122 = FUN25(&VAR110);
            VAR48->VAR70.VAR123 = FUN8(VAR48->VAR70.VAR121 * VAR48->VAR70.VAR120);
            if (VAR49 == VAR116)
            {
                VAR24->VAR124->VAR125 = VAR48->VAR70.VAR119;
                VAR48->VAR80.VAR81 = 0;
            }
            else
            {
                VAR24->VAR124->VAR125 = VAR48->VAR70.VAR122;
                VAR57 = 78;
                VAR48->VAR80.VAR81 -= VAR57;
            }
        }
        if (VAR49 == VAR50)
            FUN3(VAR6->VAR27, VAR62, "", VAR48->VAR49);
        if (VAR48->VAR42 < 0.01)
            VAR48->VAR42 = 1.0;
        FUN26(VAR24, 64, VAR6->VAR42 * VAR48->VAR42, 1000 * 1000 * 1000);
        VAR24->VAR124->VAR49 = VAR49;
        VAR24->VAR126 = 0;
        if (strcmp(VAR48->VAR127, ""))
            FUN27(VAR24->VAR127, VAR48->VAR127, 4);
        if (VAR48->VAR128)
            VAR24->VAR129 |= VAR130;
        if (VAR48->VAR63)
            FUN28(&VAR24->VAR124->VAR131.VAR132, &VAR24->VAR124->VAR131.VAR133, VAR48->VAR63, 1000000000, 30000);
        if (VAR55)
        {
            VAR24->VAR124->VAR55 = VAR55;
            VAR24->VAR124->VAR56 = VAR56;
        }
        else if (VAR48->VAR80.VAR82 && VAR48->VAR80.VAR81 > 0)
        {
            VAR24->VAR124->VAR55 = FUN8(VAR48->VAR80.VAR81);
            if (VAR24->VAR124->VAR55 == NULL)
                return FUN12(VAR89);
            VAR24->VAR124->VAR56 = VAR48->VAR80.VAR81;
            memcpy(VAR24->VAR124->VAR55, VAR48->VAR80.VAR82 + VAR57, VAR48->VAR80.VAR81);
        }
        if (VAR48->VAR58 == VAR59)
        {
            VAR24->VAR124->VAR134 = VAR135;
            VAR24->VAR124->VAR136 = VAR48->VAR64.VAR90;
            VAR24->VAR124->VAR137 = VAR48->VAR64.VAR67;
            VAR24->VAR124->VAR138 = VAR48->VAR64.VAR69;
            FUN28(&VAR24->VAR139.VAR132, &VAR24->VAR139.VAR133, VAR24->VAR124->VAR138 * VAR48->VAR64.VAR66, VAR24->VAR124->VAR137 * VAR48->VAR64.VAR68, 255);
            VAR24->VAR140 = VAR141;
        }
        else if (VAR48->VAR58 == VAR60)
        {
            VAR24->VAR124->VAR134 = VAR142;
            VAR24->VAR124->VAR143 = VAR48->VAR70.VAR71;
            VAR24->VAR124->VAR108 = VAR48->VAR70.VAR108;
        }
        else if (VAR48->VAR58 == VAR61)
        {
            VAR24->VAR124->VAR134 = VAR144;
        }
    }
    VAR12 = VAR9->VAR46;
    for (VAR26 = 0; VAR26 < VAR9->VAR47; VAR26++)
    {
        if (!(VAR12[VAR26].VAR145 && VAR12[VAR26].VAR146 && VAR12[VAR26].VAR147.VAR82 && VAR12[VAR26].VAR147.VAR81 > 0))
        {
            FUN3(VAR6->VAR27, VAR37, "");
        }
        else
        {
            VAR23 *VAR24 = FUN11(VAR2, 0);
            if (VAR24 == NULL)
                break;
            VAR24->VAR145 = FUN29(VAR12[VAR26].VAR145);
            VAR24->VAR124->VAR49 = VAR50;
            VAR24->VAR124->VAR134 = VAR148;
            VAR24->VAR124->VAR55 = FUN8(VAR12[VAR26].VAR147.VAR81);
            if (VAR24->VAR124->VAR55 == NULL)
                break;
            VAR24->VAR124->VAR56 = VAR12[VAR26].VAR147.VAR81;
            memcpy(VAR24->VAR124->VAR55, VAR12[VAR26].VAR147.VAR82, VAR12[VAR26].VAR147.VAR81);
            for (VAR25 = 0; VAR149[VAR25].VAR86 != VAR50; VAR25++)
            {
                if (!FUN10(VAR149[VAR25].VAR87, VAR12[VAR26].VAR146, strlen(VAR149[VAR25].VAR87)))
                {
                    VAR24->VAR124->VAR49 = VAR149[VAR25].VAR86;
                    break;
                }
            }
        }
    }
    VAR14 = VAR13->VAR46;
    for (VAR25 = 0; VAR25 < VAR13->VAR47; VAR25++)
        if (VAR14[VAR25].VAR150 != VAR151 && VAR14[VAR25].VAR152)
            FUN30(VAR2, VAR14[VAR25].VAR152, (VAR153){1, 1000000000}, VAR14[VAR25].VAR150, VAR14[VAR25].VAR154, VAR14[VAR25].VAR44);
    VAR18 = &VAR6->VAR20;
    VAR20 = VAR18->VAR46;
    if (VAR18->VAR47 && VAR20[0].VAR155 > 100000000000000 / VAR6->VAR42)
    {
        FUN3(VAR6->VAR27, VAR156, "");
        VAR21 = VAR6->VAR42;
    }
    for (VAR25 = 0; VAR25 < VAR18->VAR47; VAR25++)
    {
        VAR8 *VAR157 = &VAR20[VAR25].VAR158;
        VAR159 *VAR158 = VAR157->VAR46;
        for (VAR26 = 0; VAR26 < VAR157->VAR47; VAR26++)
        {
            VAR16 *VAR48 = FUN31(VAR6, VAR158[VAR26].VAR48);
            if (VAR48 && VAR48->VAR88)
                FUN32(VAR48->VAR88, VAR158[VAR26].VAR158 + VAR6->VAR160, VAR20[VAR25].VAR155 / VAR21, 0, 0, VAR161);
        }
    }
    return 0;
}