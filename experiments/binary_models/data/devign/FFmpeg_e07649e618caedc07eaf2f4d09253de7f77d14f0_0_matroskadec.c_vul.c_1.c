static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR7.VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14;
    for (VAR11 = 0; VAR11 < VAR4->VAR7.VAR15; VAR11++)
    {
        VAR6 *VAR16 = &VAR7[VAR11];
        enum AVCodecID VAR17 = VAR18;
        VAR19 *VAR20 = &VAR16->VAR21;
        VAR22 *VAR21 = VAR20->VAR8;
        VAR23 *VAR24 = NULL;
        int VAR25 = 0;
        int VAR26 = 0;
        uint32_t VAR27 = 0;
        AVIOContext VAR28;
        char *VAR29 = NULL;
        int VAR30 = -1;
        if (VAR16->VAR31 != VAR32 && VAR16->VAR31 != VAR33 && VAR16->VAR31 != VAR34 && VAR16->VAR31 != VAR35)
        {
            FUN2(VAR4->VAR36, VAR37, "" VAR38 "", VAR16->VAR31);
            continue;
        }
        if (!VAR16->VAR17)
            continue;
        if (VAR16->VAR39.VAR40 < 0 || VAR16->VAR39.VAR40 > VAR41 || FUN3(VAR16->VAR39.VAR40))
        {
            FUN2(VAR4->VAR36, VAR42, "", VAR16->VAR39.VAR40);
            VAR16->VAR39.VAR40 = 8000;
        }
        if (VAR16->VAR31 == VAR32)
        {
            if (!VAR16->VAR43 && VAR16->VAR44.VAR45 > 0)
                VAR16->VAR43 = 1000000000 / VAR16->VAR44.VAR45;
            if (VAR16->VAR44.VAR46 == -1)
                VAR16->VAR44.VAR46 = VAR16->VAR44.VAR47;
            if (VAR16->VAR44.VAR48 == -1)
                VAR16->VAR44.VAR48 = VAR16->VAR44.VAR49;
            if (VAR16->VAR44.VAR50.VAR51 == 4)
                VAR27 = FUN4(VAR16->VAR44.VAR50.VAR52);
        }
        else if (VAR16->VAR31 == VAR33)
        {
            if (!VAR16->VAR39.VAR53)
                VAR16->VAR39.VAR53 = VAR16->VAR39.VAR40;
        }
        if (VAR20->VAR15 > 1)
        {
            FUN2(VAR4->VAR36, VAR54, "");
        }
        else if (VAR20->VAR15 == 1)
        {
            if (VAR21[0].VAR31)
            {
                if (VAR21[0].VAR55.VAR56.VAR51 > 0)
                {
                    const int VAR57 = FUN5(VAR21[0].VAR55.VAR56.VAR51);
                    VAR29 = FUN6(VAR57);
                    if (VAR29 == NULL)
                        return FUN7(VAR58);
                    FUN8(VAR29, VAR57, VAR21[0].VAR55.VAR56.VAR52, VAR21[0].VAR55.VAR56.VAR51);
                }
                else
                {
                    VAR21[0].VAR59 = 0;
                    FUN2(VAR4->VAR36, VAR54, "");
                }
            }
            else if (VAR21[0].VAR60.VAR61 != VAR62 && VAR21[0].VAR60.VAR61 != VAR63 && VAR21[0].VAR60.VAR61 != VAR64 && VAR21[0].VAR60.VAR61 != VAR65)
            {
                VAR21[0].VAR59 = 0;
                FUN2(VAR4->VAR36, VAR54, "");
            }
            else if (VAR16->VAR66.VAR51 && VAR21[0].VAR59 & 2)
            {
                VAR23 *VAR66 = VAR16->VAR66.VAR52;
                int VAR13 = FUN9(&VAR16->VAR66.VAR52, &VAR16->VAR66.VAR51, VAR16);
                if (VAR13 < 0)
                {
                    VAR16->VAR66.VAR52 = NULL;
                    VAR16->VAR66.VAR51 = 0;
                    FUN2(VAR4->VAR36, VAR54, "");
                }
                if (VAR66 != VAR16->VAR66.VAR52)
                    FUN10(VAR66);
            }
        }
        for (VAR12 = 0; VAR67[VAR12].VAR68 != VAR18; VAR12++)
        {
            if (!FUN11(VAR67[VAR12].VAR69, VAR16->VAR17, strlen(VAR67[VAR12].VAR69)))
            {
                VAR17 = VAR67[VAR12].VAR68;
                break;
            }
        }
        VAR10 = VAR16->VAR70 = FUN12(VAR2, NULL);
        if (!VAR10)
        {
            FUN10(VAR29);
            return FUN7(VAR58);
        }
        if (VAR29)
        {
            FUN13(&VAR10->VAR71, "", VAR29, 0);
            FUN14(&VAR29);
        }
        if (!strcmp(VAR16->VAR17, "") && VAR16->VAR66.VAR51 >= 40 && VAR16->VAR66.VAR52)
        {
            VAR16->VAR72 = 1;
            VAR30 = FUN15(VAR16->VAR66.VAR52 + 14);
            VAR27 = FUN4(VAR16->VAR66.VAR52 + 16);
            VAR17 = FUN16(VAR73, VAR27);
            if (!VAR17)
                VAR17 = FUN16(VAR74, VAR27);
            VAR26 = 40;
        }
        else if (!strcmp(VAR16->VAR17, "") && VAR16->VAR66.VAR51 >= 14 && VAR16->VAR66.VAR52)
        {
            int VAR13;
            FUN17(&VAR28, VAR16->VAR66.VAR52, VAR16->VAR66.VAR51, 0, NULL, NULL, NULL, NULL);
            VAR13 = FUN18(VAR2, &VAR28, VAR10->VAR75, VAR16->VAR66.VAR51, 0);
            if (VAR13 < 0)
                return VAR13;
            VAR17 = VAR10->VAR75->VAR17;
            VAR27 = VAR10->VAR75->VAR76;
            VAR26 = FUN19(VAR16->VAR66.VAR51, 18);
        }
        else if (!strcmp(VAR16->VAR17, "") && (VAR16->VAR66.VAR51 >= 32) && (VAR16->VAR66.VAR52))
        {
            uint16_t VAR77;
            int VAR13 = FUN20(VAR16, &VAR27, &VAR17);
            if (VAR13 < 0)
                return VAR13;
            VAR77 = FUN21(VAR16->VAR66.VAR52 + 26);
            if (VAR27 == 0)
            {
                if (VAR77 == 8)
                {
                    VAR27 = FUN22('', '', '', '');
                    VAR17 = FUN16(VAR78, VAR27);
                }
                else if (VAR77 == 16)
                {
                    VAR27 = FUN22('', '', '', '');
                    VAR17 = FUN16(VAR78, VAR27);
                }
            }
            if ((VAR27 == FUN22('', '', '', '') || VAR27 == FUN22('', '', '', '')) && VAR77 == 8)
                VAR17 = VAR79;
        }
        else if (!strcmp(VAR16->VAR17, "") && (VAR16->VAR66.VAR51 >= 21) && (VAR16->VAR66.VAR52))
        {
            int VAR13 = FUN20(VAR16, &VAR27, &VAR17);
            if (VAR13 < 0)
                return VAR13;
            if (VAR17 == VAR18 && FUN4(VAR16->VAR66.VAR52 + 4) == FUN4(""))
            {
                VAR27 = FUN22('', '', '', '');
                VAR17 = FUN16(VAR74, VAR27);
            }
            if (VAR17 == VAR18)
                FUN2(VAR4->VAR36, VAR54, "", FUN23(VAR27));
            if (VAR16->VAR66.VAR51 >= 86)
            {
                VAR30 = FUN21(VAR16->VAR66.VAR52 + 82);
                FUN17(&VAR28, VAR16->VAR66.VAR52, VAR16->VAR66.VAR51, 0, NULL, NULL, NULL, NULL);
                if (FUN24(VAR17, &VAR28, VAR16->VAR80))
                {
                    VAR30 &= 0x1F;
                    VAR16->VAR81 = 1;
                }
            }
        }
        else if (VAR17 == VAR82)
        {
            switch (VAR16->VAR39.VAR83)
            {
            case 8:
                VAR17 = VAR84;
                break;
            case 24:
                VAR17 = VAR85;
                break;
            case 32:
                VAR17 = VAR86;
                break;
            }
        }
        else if (VAR17 == VAR87)
        {
            switch (VAR16->VAR39.VAR83)
            {
            case 8:
                VAR17 = VAR84;
                break;
            case 24:
                VAR17 = VAR88;
                break;
            case 32:
                VAR17 = VAR89;
                break;
            }
        }
        else if (VAR17 == VAR90 && VAR16->VAR39.VAR83 == 64)
        {
            VAR17 = VAR91;
        }
        else if (VAR17 == VAR92 && !VAR16->VAR66.VAR51)
        {
            int VAR93 = FUN25(VAR16->VAR17);
            int VAR94 = FUN26(VAR16->VAR39.VAR40);
            VAR24 = FUN27(5 + VAR95);
            if (!VAR24)
                return FUN7(VAR58);
            VAR24[0] = (VAR93 << 3) | ((VAR94 & 0x0E) >> 1);
            VAR24[1] = ((VAR94 & 0x01) << 7) | (VAR16->VAR39.VAR96 << 3);
            if (strstr(VAR16->VAR17, ""))
            {
                VAR94 = FUN26(VAR16->VAR39.VAR53);
                VAR24[2] = 0x56;
                VAR24[3] = 0xE5;
                VAR24[4] = 0x80 | (VAR94 << 3);
                VAR25 = 5;
            }
            else
                VAR25 = 2;
        }
        else if (VAR17 == VAR97 && VAR16->VAR66.VAR51 && VAR16->VAR66.VAR51 < VAR41 - 12 - VAR95)
        {
            VAR25 = 12 + VAR16->VAR66.VAR51;
            VAR24 = FUN27(VAR25 + VAR95);
            if (!VAR24)
                return FUN7(VAR58);
            FUN28(VAR24, VAR25);
            memcpy(&VAR24[4], "", 4);
            FUN28(&VAR24[8], 0);
            memcpy(&VAR24[12], VAR16->VAR66.VAR52, VAR16->VAR66.VAR51);
        }
        else if (VAR17 == VAR98)
        {
            VAR25 = 30;
            VAR24 = FUN27(VAR25 + VAR95);
            if (!VAR24)
                return FUN7(VAR58);
            FUN17(&VAR28, VAR24, VAR25, 1, NULL, NULL, NULL, NULL);
            FUN29(&VAR28, "", 4);
            FUN30(&VAR28, 1);
            if (VAR16->VAR39.VAR96 > VAR99 || VAR16->VAR39.VAR83 > VAR99)
            {
                FUN2(VAR4->VAR36, VAR42, "" VAR38 "" VAR38 "", VAR16->VAR39.VAR96, VAR16->VAR39.VAR83);
                FUN14(&VAR24);
                if (VAR4->VAR36->VAR100 & VAR101)
                    return VAR102;
                else
                    continue;
            }
            FUN30(&VAR28, VAR16->VAR39.VAR96);
            FUN30(&VAR28, VAR16->VAR39.VAR83);
            if (VAR16->VAR39.VAR53 < 0 || VAR16->VAR39.VAR53 > VAR41)
                return VAR102;
            FUN31(&VAR28, VAR16->VAR39.VAR53);
            FUN31(&VAR28, FUN32((VAR4->VAR103 * VAR4->VAR104), VAR16->VAR39.VAR53, VAR105 * 1000));
        }
        else if (VAR17 == VAR106 || VAR17 == VAR107 || VAR17 == VAR108 || VAR17 == VAR109)
        {
            VAR26 = 26;
        }
        else if (VAR17 == VAR110)
        {
            VAR16->VAR39.VAR53 = 8000;
            VAR16->VAR39.VAR96 = 1;
        }
        else if ((VAR17 == VAR111 || VAR17 == VAR112 || VAR17 == VAR113 || VAR17 == VAR114) && VAR16->VAR66.VAR52)
        {
            int VAR115;
            FUN17(&VAR28, VAR16->VAR66.VAR52, VAR16->VAR66.VAR51, 0, NULL, NULL, NULL, NULL);
            FUN33(&VAR28, 22);
            VAR115 = FUN34(&VAR28);
            VAR16->VAR39.VAR116 = FUN35(&VAR28);
            FUN33(&VAR28, 12);
            VAR16->VAR39.VAR117 = FUN34(&VAR28);
            VAR16->VAR39.VAR118 = FUN34(&VAR28);
            VAR16->VAR39.VAR119 = FUN34(&VAR28);
            if (VAR115 < 0 || VAR16->VAR39.VAR116 <= 0 || VAR16->VAR39.VAR117 <= 0 || VAR16->VAR39.VAR118 <= 0 || VAR16->VAR39.VAR119 <= 0 && VAR17 != VAR114)
                return VAR102;
            VAR16->VAR39.VAR120 = FUN36(VAR16->VAR39.VAR117, VAR16->VAR39.VAR118);
            if (!VAR16->VAR39.VAR120)
                return FUN7(VAR58);
            if (VAR17 == VAR111)
            {
                VAR10->VAR75->VAR121 = VAR16->VAR39.VAR116;
                VAR16->VAR66.VAR51 = 0;
            }
            else
            {
                if (VAR17 == VAR114 && VAR115 < 4)
                {
                    static const int VAR122[4] = {6504, 8496, 5000, 16000};
                    VAR16->VAR39.VAR119 = VAR123[VAR115];
                    VAR10->VAR75->VAR124 = VAR122[VAR115];
                }
                VAR10->VAR75->VAR121 = VAR16->VAR39.VAR119;
                VAR26 = 78;
            }
        }
        else if (VAR17 == VAR125 && VAR16->VAR66.VAR51)
        {
            VAR13 = FUN37(VAR2, VAR16, &VAR26);
            if (VAR13 < 0)
                return VAR13;
        }
        else if (VAR17 == VAR126 && VAR16->VAR66.VAR51 == 4)
        {
            VAR27 = FUN4(VAR16->VAR66.VAR52);
        }
        VAR16->VAR66.VAR51 -= VAR26;
        if (VAR17 == VAR18)
            FUN2(VAR4->VAR36, VAR37, "", VAR16->VAR17);
        if (VAR16->VAR104 < 0.01)
            VAR16->VAR104 = 1.0;
        FUN38(VAR10, 64, VAR4->VAR104 * VAR16->VAR104, 1000 * 1000 * 1000);
        VAR16->VAR127 = FUN39(VAR16->VAR128, (VAR129){1, 1000000000}, VAR10->VAR130);
        VAR10->VAR75->VAR17 = VAR17;
        if (strcmp(VAR16->VAR131, ""))
            FUN13(&VAR10->VAR71, "", VAR16->VAR131, 0);
        FUN13(&VAR10->VAR71, "", VAR16->VAR132, 0);
        if (VAR16->VAR133)
            VAR10->VAR134 |= VAR135;
        if (VAR16->VAR136)
            VAR10->VAR134 |= VAR137;
        if (!VAR10->VAR75->VAR24)
        {
            if (VAR24)
            {
                VAR10->VAR75->VAR24 = VAR24;
                VAR10->VAR75->VAR25 = VAR25;
            }
            else if (VAR16->VAR66.VAR52 && VAR16->VAR66.VAR51 > 0)
            {
                if (FUN40(VAR10->VAR75, VAR16->VAR66.VAR51))
                    return FUN7(VAR58);
                memcpy(VAR10->VAR75->VAR24, VAR16->VAR66.VAR52 + VAR26, VAR16->VAR66.VAR51);
            }
        }
        if (VAR16->VAR31 == VAR32)
        {
            VAR138 *VAR139 = VAR16->VAR140.VAR141.VAR8;
            int VAR142 = 1;
            int VAR143 = 1;
            VAR10->VAR75->VAR144 = VAR145;
            VAR10->VAR75->VAR76 = VAR27;
            if (VAR30 >= 0)
                VAR10->VAR75->VAR146 = VAR30;
            VAR10->VAR75->VAR147 = VAR16->VAR44.VAR47;
            VAR10->VAR75->VAR148 = VAR16->VAR44.VAR49;
            if (VAR16->VAR44.VAR149 == VAR150)
                VAR10->VAR75->VAR151 = FUN41(VAR4, VAR16->VAR44.VAR151);
            else if (VAR16->VAR44.VAR149 == VAR152)
                VAR10->VAR75->VAR151 = VAR153;
            if (VAR16->VAR44.VAR154 && VAR16->VAR44.VAR154 < VAR155)
                FUN42(VAR16->VAR44.VAR154, &VAR142, &VAR143);
            if (VAR16->VAR44.VAR156 < VAR157)
            {
                FUN43(&VAR10->VAR158.VAR159, &VAR10->VAR158.VAR160, VAR10->VAR75->VAR148 * VAR16->VAR44.VAR46 * VAR142, VAR10->VAR75->VAR147 * VAR16->VAR44.VAR48 * VAR143, 255);
            }
            if (VAR10->VAR75->VAR17 != VAR161)
                VAR10->VAR162 = VAR163;
            if (VAR16->VAR43)
            {
                FUN43(&VAR10->VAR164.VAR159, &VAR10->VAR164.VAR160, 1000000000, VAR16->VAR43, 30000);
                if (VAR10->VAR164.VAR159 < VAR10->VAR164.VAR160 * 1000LL && VAR10->VAR164.VAR159 > VAR10->VAR164.VAR160 * 5LL)
                    VAR10->VAR165 = VAR10->VAR164;
            }
            if (VAR16->VAR44.VAR154 && VAR16->VAR44.VAR154 < VAR155)
                FUN13(&VAR10->VAR71, "", VAR166[VAR16->VAR44.VAR154], 0);
            if (VAR16->VAR44.VAR167)
                FUN13(&VAR10->VAR71, "", "", 0);
            for (VAR12 = 0; VAR12 < VAR16->VAR140.VAR141.VAR15; VAR12++)
            {
                char VAR120[32];
                if (VAR139[VAR12].VAR31 >= VAR168)
                    continue;
                snprintf(VAR120, sizeof(VAR120), "", VAR169[VAR139[VAR12].VAR31], VAR11);
                for (VAR14 = 0; VAR14 < VAR4->VAR7.VAR15; VAR14++)
                    if (VAR139[VAR12].VAR170 == VAR7[VAR14].VAR170 && VAR7[VAR14].VAR70)
                    {
                        FUN13(&VAR7[VAR14].VAR70->VAR71, "", VAR120, 0);
                        break;
                    }
            }
            if (VAR16->VAR44.VAR154 < VAR155 && VAR16->VAR44.VAR154 != 10 && VAR16->VAR44.VAR154 != 12)
            {
                int VAR13 = FUN44(VAR10, VAR16->VAR44.VAR154);
                if (VAR13 < 0)
                    return VAR13;
            }
            VAR13 = FUN45(VAR10, VAR16);
            if (VAR13 < 0)
                return VAR13;
            VAR13 = FUN46(VAR10, VAR16);
            if (VAR13 < 0)
                return VAR13;
        }
        else if (VAR16->VAR31 == VAR33)
        {
            VAR10->VAR75->VAR144 = VAR171;
            VAR10->VAR75->VAR76 = VAR27;
            VAR10->VAR75->VAR172 = VAR16->VAR39.VAR53;
            VAR10->VAR75->VAR96 = VAR16->VAR39.VAR96;
            if (!VAR10->VAR75->VAR146)
                VAR10->VAR75->VAR146 = VAR16->VAR39.VAR83;
            if (VAR10->VAR75->VAR17 == VAR173)
                VAR10->VAR162 = VAR174;
            else if (VAR10->VAR75->VAR17 != VAR92)
                VAR10->VAR162 = VAR163;
            if (VAR16->VAR128 > 0)
            {
                VAR10->VAR75->VAR175 = FUN39(VAR16->VAR128, (VAR129){1, 1000000000}, (VAR129){1, VAR10->VAR75->VAR17 == VAR176 ? 48000 : VAR10->VAR75->VAR172});
            }
            if (VAR16->VAR177 > 0)
            {
                VAR10->VAR75->VAR177 = FUN39(VAR16->VAR177, (VAR129){1, 1000000000}, (VAR129){1, VAR10->VAR75->VAR172});
            }
        }
        else if (VAR17 == VAR178)
        {
            VAR10->VAR75->VAR144 = VAR179;
            if (!strcmp(VAR16->VAR17, ""))
            {
                VAR10->VAR134 |= VAR180;
            }
            else if (!strcmp(VAR16->VAR17, ""))
            {
                VAR10->VAR134 |= VAR181;
            }
            else if (!strcmp(VAR16->VAR17, ""))
            {
                VAR10->VAR134 |= VAR182;
            }
        }
        else if (VAR16->VAR31 == VAR34)
        {
            VAR10->VAR75->VAR144 = VAR179;
            if (VAR10->VAR75->VAR17 == VAR183)
                VAR4->VAR184 = 1;
        }
    }
    return 0;
}