static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    VAR9 *VAR10;
    VAR6 *VAR11 = &VAR4->VAR12;
    VAR13 *VAR12;
    VAR14 *VAR15;
    uint64_t VAR16 = 0;
    int64_t VAR17;
    Ebml VAR18 = {0};
    VAR19 *VAR20;
    int VAR21, VAR22, VAR23, VAR24;
    VAR4->VAR25 = VAR2;
    if (FUN2(VAR4, VAR26, &VAR18) || VAR18.VAR27 > VAR28 || VAR18.VAR29 > sizeof(VAR30) || VAR18.VAR31 > sizeof(VAR32) || VAR18.VAR33 > 3)
    {
        FUN3(VAR4->VAR25, VAR34, ""
                                            "" VAR35 "" VAR35 "",
               VAR18.VAR27, VAR18.VAR36, VAR18.VAR33);
        FUN4(VAR26, &VAR18);
        return VAR37;
    }
    else if (VAR18.VAR33 == 3)
    {
        FUN3(VAR4->VAR25, VAR38, ""
                                              "" VAR35 "" VAR35 "",
               VAR18.VAR27, VAR18.VAR36, VAR18.VAR33);
    }
    for (VAR21 = 0; VAR21 < FUN5(VAR39); VAR21++)
        if (!strcmp(VAR18.VAR36, VAR39[VAR21]))
            break;
    if (VAR21 >= FUN5(VAR39))
    {
        FUN3(VAR2, VAR38, "", VAR18.VAR36);
    }
    FUN4(VAR26, &VAR18);
    VAR17 = FUN6(VAR4->VAR25->VAR40);
    VAR24 = FUN2(VAR4, VAR41, VAR4);
    while (VAR24 != 1)
    {
        VAR24 = FUN7(VAR4, VAR17);
        if (VAR24 < 0)
            return VAR24;
        VAR17 = FUN6(VAR4->VAR25->VAR40);
        VAR24 = FUN2(VAR4, VAR42, VAR4);
    }
    FUN8(VAR4);
    if (!VAR4->VAR43)
        VAR4->VAR43 = 1000000;
    if (VAR4->VAR44)
        VAR4->VAR25->VAR44 = VAR4->VAR44 * VAR4->VAR43 * 1000 / VAR45;
    FUN9(&VAR2->VAR46, "", VAR4->VAR47, 0);
    if (VAR4->VAR48.VAR49 == 8)
        FUN10(&VAR2->VAR46, FUN11(VAR4->VAR48.VAR50));
    VAR15 = VAR4->VAR15.VAR51;
    for (VAR21 = 0; VAR21 < VAR4->VAR15.VAR52; VAR21++)
    {
        VAR14 *VAR53 = &VAR15[VAR21];
        enum CodecID VAR54 = VAR55;
        VAR6 *VAR56 = &VAR53->VAR57;
        VAR58 *VAR57 = VAR56->VAR51;
        VAR59 *VAR60 = NULL;
        int VAR61 = 0;
        int VAR62 = 0;
        uint32_t VAR63 = 0;
        AVIOContext VAR64;
        if (VAR53->VAR65 != VAR66 && VAR53->VAR65 != VAR67 && VAR53->VAR65 != VAR68)
        {
            FUN3(VAR4->VAR25, VAR69, "" VAR35 "", VAR53->VAR65);
            continue;
        }
        if (VAR53->VAR54 == NULL)
            continue;
        if (VAR53->VAR65 == VAR66)
        {
            if (!VAR53->VAR70)
                VAR53->VAR70 = 1000000000 / VAR53->VAR71.VAR72;
            if (!VAR53->VAR71.VAR73)
                VAR53->VAR71.VAR73 = VAR53->VAR71.VAR74;
            if (!VAR53->VAR71.VAR75)
                VAR53->VAR71.VAR75 = VAR53->VAR71.VAR76;
            if (VAR53->VAR71.VAR77.VAR49 == 4)
                VAR63 = FUN12(VAR53->VAR71.VAR77.VAR50);
        }
        else if (VAR53->VAR65 == VAR67)
        {
            if (!VAR53->VAR78.VAR79)
                VAR53->VAR78.VAR79 = VAR53->VAR78.VAR80;
        }
        if (VAR56->VAR52 > 1)
        {
            FUN3(VAR4->VAR25, VAR34, "");
        }
        else if (VAR56->VAR52 == 1)
        {
            if (VAR57[0].VAR65 || (VAR57[0].VAR81.VAR82 != VAR83 && VAR57[0].VAR81.VAR82 != VAR84 && VAR57[0].VAR81.VAR82 != VAR85 && VAR57[0].VAR81.VAR82 != VAR86))
            {
                VAR57[0].VAR87 = 0;
                FUN3(VAR4->VAR25, VAR34, "");
            }
            else if (VAR53->VAR88.VAR49 && VAR57[0].VAR87 & 2)
            {
                VAR59 *VAR88 = VAR53->VAR88.VAR50;
                int VAR89 = FUN13(&VAR53->VAR88.VAR50, &VAR53->VAR88.VAR49, VAR53);
                if (VAR89 < 0)
                {
                    VAR53->VAR88.VAR50 = NULL;
                    VAR53->VAR88.VAR49 = 0;
                    FUN3(VAR4->VAR25, VAR34, "");
                }
                else if (VAR89 > 0)
                {
                    VAR53->VAR88.VAR50 = FUN14(VAR53->VAR88.VAR49 + VAR89);
                    memcpy(VAR53->VAR88.VAR50, VAR57[0].VAR81.VAR90.VAR50, VAR89);
                    memcpy(VAR53->VAR88.VAR50 + VAR89, VAR88, VAR53->VAR88.VAR49);
                    VAR53->VAR88.VAR49 += VAR89;
                }
                if (VAR88 != VAR53->VAR88.VAR50)
                    FUN15(VAR88);
            }
        }
        for (VAR22 = 0; VAR91[VAR22].VAR92 != VAR55; VAR22++)
        {
            if (!FUN16(VAR91[VAR22].VAR93, VAR53->VAR54, strlen(VAR91[VAR22].VAR93)))
            {
                VAR54 = VAR91[VAR22].VAR92;
                break;
            }
        }
        VAR20 = VAR53->VAR94 = FUN17(VAR2, NULL);
        if (VAR20 == NULL)
            return FUN18(VAR95);
        if (!strcmp(VAR53->VAR54, "") && VAR53->VAR88.VAR49 >= 40 && VAR53->VAR88.VAR50 != NULL)
        {
            VAR53->VAR96 = 1;
            VAR63 = FUN12(VAR53->VAR88.VAR50 + 16);
            VAR54 = FUN19(VAR97, VAR63);
            VAR62 = 40;
        }
        else if (!strcmp(VAR53->VAR54, "") && VAR53->VAR88.VAR49 >= 14 && VAR53->VAR88.VAR50 != NULL)
        {
            int VAR98;
            FUN20(&VAR64, VAR53->VAR88.VAR50, VAR53->VAR88.VAR49, VAR99, NULL, NULL, NULL, NULL);
            VAR98 = FUN21(&VAR64, VAR20->VAR100, VAR53->VAR88.VAR49);
            if (VAR98 < 0)
                return VAR98;
            VAR54 = VAR20->VAR100->VAR54;
            VAR62 = FUN22(VAR53->VAR88.VAR49, 18);
        }
        else if (!strcmp(VAR53->VAR54, "") && (VAR53->VAR88.VAR49 >= 86) && (VAR53->VAR88.VAR50 != NULL))
        {
            VAR63 = FUN12(VAR53->VAR88.VAR50);
            VAR54 = FUN19(VAR101, VAR63);
        }
        else if (VAR54 == VAR102)
        {
            switch (VAR53->VAR78.VAR103)
            {
            case 8:
                VAR54 = VAR104;
                break;
            case 24:
                VAR54 = VAR105;
                break;
            case 32:
                VAR54 = VAR106;
                break;
            }
        }
        else if (VAR54 == VAR107)
        {
            switch (VAR53->VAR78.VAR103)
            {
            case 8:
                VAR54 = VAR104;
                break;
            case 24:
                VAR54 = VAR108;
                break;
            case 32:
                VAR54 = VAR109;
                break;
            }
        }
        else if (VAR54 == VAR110 && VAR53->VAR78.VAR103 == 64)
        {
            VAR54 = VAR111;
        }
        else if (VAR54 == VAR112 && !VAR53->VAR88.VAR49)
        {
            int VAR113 = FUN23(VAR53->VAR54);
            int VAR114 = FUN24(VAR53->VAR78.VAR80);
            VAR60 = FUN25(5 + VAR115);
            if (VAR60 == NULL)
                return FUN18(VAR95);
            VAR60[0] = (VAR113 << 3) | ((VAR114 & 0x0E) >> 1);
            VAR60[1] = ((VAR114 & 0x01) << 7) | (VAR53->VAR78.VAR116 << 3);
            if (strstr(VAR53->VAR54, ""))
            {
                VAR114 = FUN24(VAR53->VAR78.VAR79);
                VAR60[2] = 0x56;
                VAR60[3] = 0xE5;
                VAR60[4] = 0x80 | (VAR114 << 3);
                VAR61 = 5;
            }
            else
                VAR61 = 2;
        }
        else if (VAR54 == VAR117)
        {
            VAR61 = 30;
            VAR60 = FUN25(VAR61 + VAR115);
            if (VAR60 == NULL)
                return FUN18(VAR95);
            FUN20(&VAR64, VAR60, VAR61, 1, NULL, NULL, NULL, NULL);
            FUN26(&VAR64, "", 4);
            FUN27(&VAR64, 1);
            FUN27(&VAR64, VAR53->VAR78.VAR116);
            FUN27(&VAR64, VAR53->VAR78.VAR103);
            FUN28(&VAR64, VAR53->VAR78.VAR79);
            FUN28(&VAR64, VAR4->VAR25->VAR44 * VAR53->VAR78.VAR79);
        }
        else if (VAR54 == VAR118 || VAR54 == VAR119 || VAR54 == VAR120 || VAR54 == VAR121)
        {
            VAR62 = 26;
        }
        else if (VAR54 == VAR122)
        {
            VAR53->VAR78.VAR79 = 8000;
            VAR53->VAR78.VAR116 = 1;
        }
        else if (VAR54 == VAR123 || VAR54 == VAR124 || VAR54 == VAR125 || VAR54 == VAR126)
        {
            int VAR127;
            FUN20(&VAR64, VAR53->VAR88.VAR50, VAR53->VAR88.VAR49, 0, NULL, NULL, NULL, NULL);
            FUN29(&VAR64, 22);
            VAR127 = FUN30(&VAR64);
            VAR53->VAR78.VAR128 = FUN31(&VAR64);
            FUN29(&VAR64, 12);
            VAR53->VAR78.VAR129 = FUN30(&VAR64);
            VAR53->VAR78.VAR130 = FUN30(&VAR64);
            VAR53->VAR78.VAR131 = FUN30(&VAR64);
            VAR53->VAR78.VAR132 = FUN14(VAR53->VAR78.VAR130 * VAR53->VAR78.VAR129);
            if (VAR54 == VAR123)
            {
                VAR20->VAR100->VAR133 = VAR53->VAR78.VAR128;
                VAR53->VAR88.VAR49 = 0;
            }
            else
            {
                if (VAR54 == VAR126 && VAR127 < 4)
                {
                    const int VAR134[4] = {6504, 8496, 5000, 16000};
                    VAR53->VAR78.VAR131 = VAR135[VAR127];
                    VAR20->VAR100->VAR136 = VAR134[VAR127];
                }
                VAR20->VAR100->VAR133 = VAR53->VAR78.VAR131;
                VAR62 = 78;
            }
        }
        VAR53->VAR88.VAR49 -= VAR62;
        if (VAR54 == VAR55)
            FUN3(VAR4->VAR25, VAR69, "", VAR53->VAR54);
        if (VAR53->VAR43 < 0.01)
            VAR53->VAR43 = 1.0;
        FUN32(VAR20, 64, VAR4->VAR43 * VAR53->VAR43, 1000 * 1000 * 1000);
        VAR20->VAR100->VAR54 = VAR54;
        VAR20->VAR137 = 0;
        if (strcmp(VAR53->VAR138, ""))
            FUN9(&VAR20->VAR46, "", VAR53->VAR138, 0);
        FUN9(&VAR20->VAR46, "", VAR53->VAR139, 0);
        if (VAR53->VAR140)
            VAR20->VAR141 |= VAR142;
        if (VAR53->VAR143)
            VAR20->VAR141 |= VAR144;
        if (!VAR20->VAR100->VAR60)
        {
            if (VAR60)
            {
                VAR20->VAR100->VAR60 = VAR60;
                VAR20->VAR100->VAR61 = VAR61;
            }
            else if (VAR53->VAR88.VAR50 && VAR53->VAR88.VAR49 > 0)
            {
                VAR20->VAR100->VAR60 = FUN25(VAR53->VAR88.VAR49 + VAR115);
                if (VAR20->VAR100->VAR60 == NULL)
                    return FUN18(VAR95);
                VAR20->VAR100->VAR61 = VAR53->VAR88.VAR49;
                memcpy(VAR20->VAR100->VAR60, VAR53->VAR88.VAR50 + VAR62, VAR53->VAR88.VAR49);
            }
        }
        if (VAR53->VAR65 == VAR66)
        {
            VAR145 *VAR146 = VAR53->VAR147.VAR148.VAR51;
            VAR20->VAR100->VAR149 = VAR150;
            VAR20->VAR100->VAR151 = VAR63;
            VAR20->VAR100->VAR152 = VAR53->VAR71.VAR74;
            VAR20->VAR100->VAR153 = VAR53->VAR71.VAR76;
            FUN33(&VAR20->VAR154.VAR155, &VAR20->VAR154.VAR156, VAR20->VAR100->VAR153 * VAR53->VAR71.VAR73, VAR20->VAR100->VAR152 * VAR53->VAR71.VAR75, 255);
            VAR20->VAR157 = VAR158;
            if (VAR53->VAR70)
                VAR20->VAR159 = FUN34(1000000000.0 / VAR53->VAR70, VAR160);
            if (VAR53->VAR71.VAR161 && VAR53->VAR71.VAR161 < VAR162)
                FUN9(&VAR20->VAR46, "", VAR163[VAR53->VAR71.VAR161], 0);
            for (VAR22 = 0; VAR22 < VAR53->VAR147.VAR148.VAR52; VAR22++)
            {
                char VAR132[32];
                if (VAR146[VAR22].VAR65 >= VAR164)
                    continue;
                snprintf(VAR132, sizeof(VAR132), "", VAR165[VAR146[VAR22].VAR65], VAR21);
                for (VAR23 = 0; VAR23 < VAR4->VAR15.VAR52; VAR23++)
                    if (VAR146[VAR22].VAR166 == VAR15[VAR23].VAR166)
                    {
                        FUN9(&VAR2->VAR167[VAR23]->VAR46, "", VAR132, 0);
                        break;
                    }
            }
        }
        else if (VAR53->VAR65 == VAR67)
        {
            VAR20->VAR100->VAR149 = VAR168;
            VAR20->VAR100->VAR169 = VAR53->VAR78.VAR79;
            VAR20->VAR100->VAR116 = VAR53->VAR78.VAR116;
            if (VAR20->VAR100->VAR54 != VAR112)
                VAR20->VAR157 = VAR158;
        }
        else if (VAR53->VAR65 == VAR68)
        {
            VAR20->VAR100->VAR149 = VAR170;
        }
    }
    VAR10 = VAR7->VAR51;
    for (VAR22 = 0; VAR22 < VAR7->VAR52; VAR22++)
    {
        if (!(VAR10[VAR22].VAR171 && VAR10[VAR22].VAR172 && VAR10[VAR22].VAR173.VAR50 && VAR10[VAR22].VAR173.VAR49 > 0))
        {
            FUN3(VAR4->VAR25, VAR34, "");
        }
        else
        {
            VAR19 *VAR20 = FUN17(VAR2, NULL);
            if (VAR20 == NULL)
                break;
            FUN9(&VAR20->VAR46, "", VAR10[VAR22].VAR171, 0);
            FUN9(&VAR20->VAR46, "", VAR10[VAR22].VAR172, 0);
            VAR20->VAR100->VAR54 = VAR55;
            VAR20->VAR100->VAR149 = VAR174;
            VAR20->VAR100->VAR60 = FUN14(VAR10[VAR22].VAR173.VAR49 + VAR115);
            if (VAR20->VAR100->VAR60 == NULL)
                break;
            VAR20->VAR100->VAR61 = VAR10[VAR22].VAR173.VAR49;
            memcpy(VAR20->VAR100->VAR60, VAR10[VAR22].VAR173.VAR50, VAR10[VAR22].VAR173.VAR49);
            for (VAR21 = 0; VAR175[VAR21].VAR92 != VAR55; VAR21++)
            {
                if (!FUN16(VAR175[VAR21].VAR93, VAR10[VAR22].VAR172, strlen(VAR175[VAR21].VAR93)))
                {
                    VAR20->VAR100->VAR54 = VAR175[VAR21].VAR92;
                    break;
                }
            }
            VAR10[VAR22].VAR94 = VAR20;
        }
    }
    VAR12 = VAR11->VAR51;
    for (VAR21 = 0; VAR21 < VAR11->VAR52; VAR21++)
        if (VAR12[VAR21].VAR176 != VAR177 && VAR12[VAR21].VAR166 && (VAR16 == 0 || VAR12[VAR21].VAR176 > VAR16))
        {
            VAR12[VAR21].VAR178 = FUN35(VAR2, VAR12[VAR21].VAR166, (VAR179){1, 1000000000}, VAR12[VAR21].VAR176, VAR12[VAR21].VAR180, VAR12[VAR21].VAR47);
            FUN9(&VAR12[VAR21].VAR178->VAR46, "", VAR12[VAR21].VAR47, 0);
            VAR16 = VAR12[VAR21].VAR176;
        }
    FUN36(VAR4);
    FUN37(VAR2);
    return 0;
}