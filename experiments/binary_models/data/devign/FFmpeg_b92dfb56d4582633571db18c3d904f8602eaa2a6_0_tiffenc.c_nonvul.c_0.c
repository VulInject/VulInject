static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *const VAR11 = &VAR9->VAR12;
    int VAR13;
    VAR14 *VAR15;
    VAR14 *VAR16;
    uint32_t VAR17;
    VAR18 *VAR19 = NULL;
    VAR18 *VAR20 = NULL;
    int VAR21;
    uint32_t VAR22[2] = {72, 1};
    uint16_t VAR23[] = {8, 8, 8, 8};
    int VAR24;
    int VAR25 = 0;
    VAR14 *VAR26 = NULL;
    int VAR27, VAR28;
    const VAR29 *VAR30;
    VAR9->VAR2 = VAR2;
    *VAR11 = *VAR6;
    VAR11->VAR31 = VAR32;
    VAR11->VAR33 = 1;
    VAR2->VAR34 = &VAR9->VAR12;
    VAR9->VAR35 = VAR2->VAR35;
    VAR9->VAR36 = VAR2->VAR36;
    VAR9->VAR37[0] = 1;
    VAR9->VAR37[1] = 1;
    switch (VAR2->VAR38)
    {
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
        VAR30 = &VAR44[VAR2->VAR38];
        VAR9->VAR45 = FUN2(VAR30);
        if (VAR30->VAR46 & VAR47)
        {
            VAR9->VAR48 = 3;
        }
        else if (VAR30->VAR46 & VAR49)
        {
            VAR9->VAR48 = 2;
        }
        else
        {
            VAR9->VAR48 = 1;
        }
        VAR9->VAR50 = VAR30->VAR51;
        for (VAR13 = 0; VAR13 < VAR9->VAR50; VAR13++)
        {
            VAR23[VAR13] = VAR9->VAR45 / VAR9->VAR50;
        }
        break;
    case VAR52:
        VAR9->VAR45 = 1;
        VAR9->VAR48 = 1;
        VAR9->VAR50 = 0;
        break;
    case VAR53:
        VAR9->VAR45 = 1;
        VAR9->VAR48 = 0;
        VAR9->VAR50 = 0;
        break;
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
        VAR9->VAR48 = 6;
        FUN3(VAR2->VAR38, &VAR27, &VAR28);
        VAR9->VAR45 = 8 + (16 >> (VAR27 + VAR28));
        VAR9->VAR37[0] = 1 << VAR27;
        VAR9->VAR37[1] = 1 << VAR28;
        VAR9->VAR50 = 3;
        VAR25 = 1;
        break;
    default:
        FUN4(VAR9->VAR2, VAR59, "");
        return -1;
    }
    if (VAR9->VAR60 == VAR61 || VAR9->VAR60 == VAR62 || VAR9->VAR60 == VAR63)
        VAR9->VAR64 = VAR9->VAR36;
    else
        VAR9->VAR64 = FUN5(8192 / (((VAR9->VAR35 * VAR9->VAR45) >> 3) + 1), 1);
    VAR9->VAR64 = ((VAR9->VAR64 - 1) / VAR9->VAR37[1] + 1) * VAR9->VAR37[1];
    VAR17 = (VAR9->VAR36 - 1) / VAR9->VAR64 + 1;
    if (!VAR4->VAR65 && (VAR24 = FUN6(VAR4, VAR2->VAR35 * VAR2->VAR36 * VAR9->VAR45 * 2 + VAR2->VAR36 * 4 + VAR66)) < 0)
    {
        FUN4(VAR2, VAR59, "");
        return VAR24;
    }
    VAR15 = VAR4->VAR65;
    VAR9->VAR67 = VAR4->VAR65;
    VAR9->VAR68 = &VAR15;
    VAR9->VAR69 = VAR4->VAR70;
    if (FUN7(VAR9, 8))
        goto VAR71;
    FUN8(&VAR15, 0x4949);
    FUN8(&VAR15, 42);
    VAR16 = VAR15;
    FUN9(&VAR15, 0);
    VAR19 = FUN10(sizeof(*VAR19) * VAR17);
    VAR20 = FUN10(sizeof(*VAR20) * VAR17);
    if (!VAR19 || !VAR20)
    {
        VAR24 = FUN11(VAR72);
        goto VAR71;
    }
    VAR21 = (((VAR9->VAR35 - 1) / VAR9->VAR37[0] + 1) * VAR9->VAR45 * VAR9->VAR37[0] * VAR9->VAR37[1] + 7) >> 3;
    if (VAR25)
    {
        VAR26 = FUN12(VAR21);
        if (VAR26 == NULL)
        {
            FUN4(VAR9->VAR2, VAR59, "");
            VAR24 = FUN11(VAR72);
            goto VAR71;
        }
    }
    if (VAR9->VAR60 == VAR61 || VAR9->VAR60 == VAR62)
    {
        VAR14 *VAR73;
        int VAR74, VAR75;
        int VAR76;
        VAR74 = VAR21 * VAR9->VAR64;
        VAR73 = FUN12(VAR74);
        if (!VAR73)
        {
            VAR24 = FUN11(VAR72);
            goto VAR71;
        }
        VAR20[0] = VAR15 - VAR4->VAR65;
        VAR75 = 0;
        for (VAR76 = 0; VAR76 < VAR9->VAR64; VAR76++)
        {
            if (VAR25)
            {
                FUN13(VAR9, VAR26, VAR76);
                memcpy(VAR73 + VAR75, VAR26, VAR21);
                VAR76 += VAR9->VAR37[1] - 1;
            }
            else
                memcpy(VAR73 + VAR76 * VAR21, VAR11->VAR65[0] + VAR76 * VAR11->VAR77[0], VAR21);
            VAR75 += VAR21;
        }
        VAR24 = FUN14(VAR9, VAR73, VAR15, VAR75, VAR9->VAR60);
        FUN15(VAR73);
        if (VAR24 < 0)
        {
            FUN4(VAR9->VAR2, VAR59, "");
            goto VAR71;
        }
        VAR15 += VAR24;
        VAR19[0] = VAR15 - VAR4->VAR65 - VAR20[0];
    }
    else
    {
        if (VAR9->VAR60 == VAR63)
        {
            VAR9->VAR78 = FUN12(VAR79);
            if (!VAR9->VAR78)
            {
                VAR24 = FUN11(VAR72);
                goto VAR71;
            }
        }
        for (VAR13 = 0; VAR13 < VAR9->VAR36; VAR13++)
        {
            if (VAR19[VAR13 / VAR9->VAR64] == 0)
            {
                if (VAR9->VAR60 == VAR63)
                {
                    FUN16(VAR9->VAR78, VAR15, VAR9->VAR69 - (*VAR9->VAR68 - VAR9->VAR67), 12, VAR80, VAR81);
                }
                VAR20[VAR13 / VAR9->VAR64] = VAR15 - VAR4->VAR65;
            }
            if (VAR25)
            {
                FUN13(VAR9, VAR26, VAR13);
                VAR24 = FUN14(VAR9, VAR26, VAR15, VAR21, VAR9->VAR60);
                VAR13 += VAR9->VAR37[1] - 1;
            }
            else
                VAR24 = FUN14(VAR9, VAR11->VAR65[0] + VAR13 * VAR11->VAR77[0], VAR15, VAR21, VAR9->VAR60);
            if (VAR24 < 0)
            {
                FUN4(VAR9->VAR2, VAR59, "");
                goto VAR71;
            }
            VAR19[VAR13 / VAR9->VAR64] += VAR24;
            VAR15 += VAR24;
            if (VAR9->VAR60 == VAR63 && (VAR13 == VAR9->VAR36 - 1 || VAR13 % VAR9->VAR64 == VAR9->VAR64 - 1))
            {
                VAR24 = FUN17(VAR9->VAR78, VAR82);
                VAR19[(VAR13 / VAR9->VAR64)] += VAR24;
                VAR15 += VAR24;
            }
        }
        if (VAR9->VAR60 == VAR63)
            FUN15(VAR9->VAR78);
    }
    VAR9->VAR83 = 0;
    FUN18(VAR9, VAR84, VAR85, 0);
    FUN18(VAR9, VAR86, VAR85, VAR9->VAR35);
    FUN18(VAR9, VAR87, VAR85, VAR9->VAR36);
    if (VAR9->VAR50)
        FUN19(VAR9, VAR88, VAR89, VAR9->VAR50, VAR23);
    FUN18(VAR9, VAR90, VAR89, VAR9->VAR60);
    FUN18(VAR9, VAR91, VAR89, VAR9->VAR48);
    FUN19(VAR9, VAR92, VAR85, VAR17, VAR20);
    if (VAR9->VAR50)
        FUN18(VAR9, VAR93, VAR89, VAR9->VAR50);
    FUN18(VAR9, VAR94, VAR85, VAR9->VAR64);
    FUN19(VAR9, VAR95, VAR85, VAR17, VAR19);
    FUN19(VAR9, VAR96, VAR97, 1, VAR22);
    FUN19(VAR9, VAR98, VAR97, 1, VAR22);
    FUN18(VAR9, VAR99, VAR89, 2);
    if (!(VAR2->VAR46 & VAR100))
        FUN19(VAR9, VAR101, VAR102, strlen(VAR103) + 1, VAR103);
    if (VAR2->VAR38 == VAR43)
    {
        uint16_t VAR104[256 * 3];
        for (VAR13 = 0; VAR13 < 256; VAR13++)
        {
            uint32_t VAR105 = *(VAR18 *)(VAR11->VAR65[1] + VAR13 * 4);
            VAR104[VAR13] = ((VAR105 >> 16) & 0xff) * 257;
            VAR104[VAR13 + 256] = ((VAR105 >> 8) & 0xff) * 257;
            VAR104[VAR13 + 512] = (VAR105 & 0xff) * 257;
        }
        FUN19(VAR9, VAR106, VAR89, 256 * 3, VAR104);
    }
    if (VAR25)
    {
        uint32_t VAR107[12] = {15, 1, 235, 1, 128, 1, 240, 1, 128, 1, 240, 1};
        FUN19(VAR9, VAR108, VAR89, 2, VAR9->VAR37);
        FUN19(VAR9, VAR109, VAR97, 6, VAR107);
    }
    FUN9(&VAR16, VAR15 - VAR4->VAR65);
    if (FUN7(VAR9, 6 + VAR9->VAR83 * 12))
    {
        VAR24 = FUN11(VAR110);
        goto VAR71;
    }
    FUN8(&VAR15, VAR9->VAR83);
    FUN20(&VAR15, VAR9->VAR111, VAR9->VAR83 * 12);
    FUN9(&VAR15, 0);
    VAR4->VAR70 = VAR15 - VAR4->VAR65;
    VAR4->VAR46 |= VAR112;
    *VAR7 = 1;
VAR71:
    FUN15(VAR19);
    FUN15(VAR20);
    FUN15(VAR26);
    return VAR24;
}