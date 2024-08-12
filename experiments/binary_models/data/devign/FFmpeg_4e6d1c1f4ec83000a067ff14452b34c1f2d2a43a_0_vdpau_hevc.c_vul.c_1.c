static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR11;
    struct VAR12 *VAR13 = VAR10->VAR14;
    VAR15 *VAR16 = &VAR13->VAR16.VAR17;
    const VAR18 *VAR19 = VAR7->VAR20.VAR19;
    const VAR21 *VAR22 = VAR7->VAR20.VAR22;
    const VAR23 *VAR24 = &VAR7->VAR24;
    const VAR25 *VAR26 = VAR22->VAR27 ? &VAR22->VAR28 : &VAR19->VAR28;
    VAR16->VAR29 = VAR19->VAR29;
    VAR16->VAR30 = VAR19->VAR30;
    VAR16->VAR31 = VAR19->VAR32;
    VAR16->VAR33 = VAR19->VAR34;
    VAR16->VAR35 = VAR19->VAR36 - 8;
    VAR16->VAR37 = VAR19->VAR36 - 8;
    VAR16->VAR38 = VAR19->VAR39 - 4;
    VAR16->VAR40 = VAR19->VAR41[VAR19->VAR42 - 1].VAR43 - 1;
    VAR16->VAR44 = VAR19->VAR45 - 3;
    VAR16->VAR46 = VAR19->VAR47;
    VAR16->VAR48 = VAR19->VAR49 - 2;
    VAR16->VAR50 = VAR19->VAR51 - VAR19->VAR49;
    VAR16->VAR52 = VAR19->VAR52;
    VAR16->VAR53 = VAR19->VAR53;
    VAR16->VAR54 = VAR19->VAR55;
    for (size_t VAR56 = 0; VAR56 < 6; VAR56++)
    {
        for (size_t VAR57 = 0; VAR57 < 16; VAR57++)
        {
            uint8_t VAR58 = 4 * VAR59[VAR57] + VAR60[VAR57];
            VAR16->VAR61[VAR56][VAR57] = VAR26->VAR26[0][VAR56][VAR58];
        }
        for (size_t VAR57 = 0; VAR57 < 64; VAR57++)
        {
            uint8_t VAR58 = 8 * VAR62[VAR57] + VAR63[VAR57];
            VAR16->VAR64[VAR56][VAR57] = VAR26->VAR26[1][VAR56][VAR58];
            VAR16->VAR65[VAR56][VAR57] = VAR26->VAR26[2][VAR56][VAR58];
            if (VAR56 < 2)
            {
                VAR16->VAR66[VAR56][VAR57] = VAR26->VAR26[3][VAR56 * 3][VAR58];
            }
        }
        VAR16->VAR67[VAR56] = VAR26->VAR68[0][VAR56];
        if (VAR56 < 2)
        {
            VAR16->VAR69[VAR56] = VAR26->VAR68[1][VAR56 * 3];
        }
    }
    VAR16->VAR70 = VAR19->VAR70;
    VAR16->VAR71 = VAR19->VAR72;
    VAR16->VAR73 = VAR19->VAR73;
    if (VAR16->VAR73)
    {
        VAR16->VAR74 = VAR19->VAR75.VAR36 - 1;
        VAR16->VAR76 = VAR19->VAR75.VAR77 - 1;
        VAR16->VAR78 = VAR19->VAR75.VAR79 - 3;
        VAR16->VAR80 = VAR19->VAR75.VAR81 - VAR19->VAR75.VAR79;
        VAR16->VAR82 = VAR19->VAR75.VAR83;
    }
    VAR16->VAR84 = VAR19->VAR85;
    VAR16->VAR86 = VAR19->VAR86;
    VAR16->VAR87 = VAR19->VAR87;
    VAR16->VAR88 = VAR19->VAR88;
    VAR16->VAR89 = VAR19->VAR90;
    VAR16->VAR91 = VAR22->VAR91;
    VAR16->VAR92 = VAR22->VAR92;
    VAR16->VAR93 = VAR22->VAR93;
    VAR16->VAR94 = VAR22->VAR95;
    VAR16->VAR96 = VAR22->VAR96;
    VAR16->VAR97 = VAR22->VAR98 - 1;
    VAR16->VAR99 = VAR22->VAR100 - 1;
    VAR16->VAR101 = VAR22->VAR102;
    VAR16->VAR103 = VAR22->VAR103;
    VAR16->VAR104 = VAR22->VAR104;
    VAR16->VAR105 = VAR22->VAR105;
    VAR16->VAR106 = VAR22->VAR106;
    VAR16->VAR107 = VAR22->VAR108;
    VAR16->VAR109 = VAR22->VAR110;
    VAR16->VAR111 = VAR22->VAR112;
    VAR16->VAR113 = VAR22->VAR113;
    VAR16->VAR114 = VAR22->VAR114;
    VAR16->VAR115 = VAR22->VAR116;
    VAR16->VAR117 = VAR22->VAR117;
    VAR16->VAR118 = VAR22->VAR118;
    if (VAR16->VAR117)
    {
        VAR16->VAR119 = VAR22->VAR120 - 1;
        VAR16->VAR121 = VAR22->VAR122 - 1;
        VAR16->VAR123 = VAR22->VAR123;
        for (ssize_t VAR56 = 0; VAR56 < VAR22->VAR120; VAR56++)
        {
            VAR16->VAR124[VAR56] = VAR22->VAR125[VAR56] - 1;
        }
        for (ssize_t VAR56 = 0; VAR56 < VAR22->VAR122; VAR56++)
        {
            VAR16->VAR126[VAR56] = VAR22->VAR127[VAR56] - 1;
        }
        VAR16->VAR128 = VAR22->VAR128;
    }
    VAR16->VAR129 = VAR22->VAR130;
    VAR16->VAR131 = VAR22->VAR131;
    VAR16->VAR132 = VAR22->VAR132;
    VAR16->VAR133 = VAR22->VAR134;
    VAR16->VAR135 = VAR22->VAR136 / 2;
    VAR16->VAR137 = VAR22->VAR138 / 2;
    VAR16->VAR139 = VAR22->VAR139;
    VAR16->VAR140 = VAR22->VAR141 - 2;
    VAR16->VAR142 = VAR22->VAR143;
    VAR16->VAR144 = FUN2(VAR7);
    VAR16->VAR145 = FUN3(VAR7);
    VAR16->VAR146 = VAR19->VAR85;
    if (VAR24->VAR147 == 1)
    {
        for (size_t VAR56 = 0; VAR56 < VAR19->VAR85; VAR56++)
        {
            if (VAR24->VAR148 == &VAR19->VAR149[VAR56])
            {
                VAR16->VAR146 = VAR56;
                break;
            }
        }
    }
    VAR16->VAR150 = FUN4(VAR7);
    if (VAR24->VAR147 == 0 && VAR24->VAR148)
    {
        VAR16->VAR151 = VAR24->VAR148->VAR152;
    }
    VAR16->VAR153 = VAR24->VAR154;
    VAR16->VAR155 = VAR24->VAR156;
    VAR16->VAR157 = VAR7->VAR158;
    for (size_t VAR56 = 0; VAR56 < 16; VAR56++)
    {
        VAR16->VAR159[VAR56] = VAR160;
        VAR16->VAR161[VAR56] = 0;
        VAR16->VAR162[VAR56] = 0;
    }
    for (size_t VAR56 = 0, VAR57 = 0; VAR56 < FUN5(VAR7->VAR163); VAR56++)
    {
        const VAR9 *VAR164 = &VAR7->VAR163[VAR56];
        if (VAR164 != VAR7->VAR11 && (VAR164->VAR165 & (VAR166 | VAR167)))
        {
            if (VAR57 > 16)
            {
                FUN6(VAR2, VAR168, ""
                                              "");
                break;
            }
            VAR16->VAR159[VAR57] = FUN7(VAR164->VAR164);
            VAR16->VAR161[VAR57] = VAR164->VAR158;
            VAR16->VAR162[VAR57] = 0;
            VAR57++;
        }
    }
    VAR16->VAR169 = VAR7->VAR170[VAR171].VAR172;
    if (VAR16->VAR169 > 8)
    {
        FUN6(VAR2, VAR168, ""
                                      "");
        VAR16->VAR169 = 8;
    }
    VAR16->VAR173 = VAR7->VAR170[VAR174].VAR172;
    if (VAR16->VAR173 > 8)
    {
        FUN6(VAR2, VAR168, ""
                                      "");
        VAR16->VAR173 = 8;
    }
    VAR16->VAR175 = VAR7->VAR170[VAR176].VAR172;
    if (VAR16->VAR175 > 8)
    {
        FUN6(VAR2, VAR168, ""
                                      "");
        VAR16->VAR175 = 8;
    }
    for (ssize_t VAR56 = 0, VAR57 = 0; VAR56 < VAR7->VAR170[VAR171].VAR172; VAR56++)
    {
        VAR9 *VAR164 = VAR7->VAR170[VAR171].VAR11[VAR56];
        if (VAR164)
        {
            uint8_t VAR177 = 0;
            uintptr_t VAR178 = FUN7(VAR164->VAR164);
            for (size_t VAR179 = 0; VAR179 < 16; VAR179++)
            {
                if (VAR178 == VAR16->VAR159[VAR179])
                {
                    VAR16->VAR180[VAR57] = VAR179;
                    VAR57++;
                    VAR177 = 1;
                    break;
                }
            }
            if (!VAR177)
            {
                FUN6(VAR2, VAR168, "", (void *)VAR178);
            }
        }
        else
        {
            FUN6(VAR2, VAR168, "", VAR56);
        }
    }
    for (ssize_t VAR56 = 0, VAR57 = 0; VAR56 < VAR7->VAR170[VAR174].VAR172; VAR56++)
    {
        VAR9 *VAR164 = VAR7->VAR170[VAR174].VAR11[VAR56];
        if (VAR164)
        {
            uint8_t VAR177 = 0;
            uintptr_t VAR178 = FUN7(VAR164->VAR164);
            for (size_t VAR179 = 0; VAR179 < 16; VAR179++)
            {
                if (VAR178 == VAR16->VAR159[VAR179])
                {
                    VAR16->VAR181[VAR57] = VAR179;
                    VAR57++;
                    VAR177 = 1;
                    break;
                }
            }
            if (!VAR177)
            {
                FUN6(VAR2, VAR168, "", (void *)VAR178);
            }
        }
        else
        {
            FUN6(VAR2, VAR168, "", VAR56);
        }
    }
    for (ssize_t VAR56 = 0, VAR57 = 0; VAR56 < VAR7->VAR170[VAR176].VAR172; VAR56++)
    {
        VAR9 *VAR164 = VAR7->VAR170[VAR176].VAR11[VAR56];
        if (VAR164)
        {
            uint8_t VAR177 = 0;
            uintptr_t VAR178 = FUN7(VAR164->VAR164);
            for (size_t VAR179 = 0; VAR179 < 16; VAR179++)
            {
                if (VAR178 == VAR16->VAR159[VAR179])
                {
                    VAR16->VAR182[VAR57] = VAR179;
                    VAR57++;
                    VAR177 = 1;
                    break;
                }
            }
            if (!VAR177)
            {
                FUN6(VAR2, VAR168, "", (void *)VAR178);
            }
        }
        else
        {
            FUN6(VAR2, VAR168, "", VAR56);
        }
    }
    return FUN8(VAR13, VAR4, VAR5);
}