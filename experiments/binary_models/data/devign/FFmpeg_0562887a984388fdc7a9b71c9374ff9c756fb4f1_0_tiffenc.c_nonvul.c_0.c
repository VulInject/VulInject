static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *const VAR11 = VAR6;
    int VAR12;
    VAR13 *VAR14;
    VAR13 *VAR15;
    uint32_t VAR16;
    VAR17 *VAR18 = NULL;
    VAR17 *VAR19 = NULL;
    int VAR20;
    uint32_t VAR21[2] = {72, 1};
    uint16_t VAR22[] = {8, 8, 8, 8};
    int VAR23 = 0;
    int VAR24 = 0;
    VAR13 *VAR25 = NULL;
    int VAR26, VAR27;
    int VAR28;
    const VAR29 *VAR30;
    VAR9->VAR2 = VAR2;
    VAR9->VAR31 = VAR2->VAR31;
    VAR9->VAR32 = VAR2->VAR32;
    VAR9->VAR33[0] = 1;
    VAR9->VAR33[1] = 1;
    switch (VAR2->VAR34)
    {
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
        VAR30 = FUN2(VAR2->VAR34);
        VAR9->VAR41 = FUN3(VAR30);
        if (VAR30->VAR42 & VAR43)
            VAR9->VAR44 = VAR45;
        else if (VAR30->VAR42 & VAR46)
            VAR9->VAR44 = VAR47;
        else
            VAR9->VAR44 = VAR48;
        VAR9->VAR49 = VAR30->VAR50;
        for (VAR12 = 0; VAR12 < VAR9->VAR49; VAR12++)
            VAR22[VAR12] = VAR9->VAR41 / VAR9->VAR49;
        break;
    case VAR51:
        VAR9->VAR41 = 1;
        VAR9->VAR44 = VAR48;
        VAR9->VAR49 = 0;
        break;
    case VAR52:
        VAR9->VAR41 = 1;
        VAR9->VAR44 = VAR53;
        VAR9->VAR49 = 0;
        break;
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
        FUN4(VAR2->VAR34, &VAR26, &VAR27);
        VAR9->VAR44 = VAR59;
        VAR9->VAR41 = 8 + (16 >> (VAR26 + VAR27));
        VAR9->VAR33[0] = 1 << VAR26;
        VAR9->VAR33[1] = 1 << VAR27;
        VAR9->VAR49 = 3;
        VAR24 = 1;
        break;
    default:
        FUN5(VAR9->VAR2, VAR60, "");
        return -1;
    }
    if (VAR9->VAR61 == VAR62 || VAR9->VAR61 == VAR63 || VAR9->VAR61 == VAR64)
        VAR9->VAR65 = VAR9->VAR32;
    else
        VAR9->VAR65 = FUN6(8192 / (((VAR9->VAR31 * VAR9->VAR41) >> 3) + 1), 1);
    VAR9->VAR65 = ((VAR9->VAR65 - 1) / VAR9->VAR33[1] + 1) * VAR9->VAR33[1];
    VAR16 = (VAR9->VAR32 - 1) / VAR9->VAR65 + 1;
    VAR28 = VAR2->VAR32 * ((VAR2->VAR31 * VAR9->VAR41 + 7) >> 3) * 2 + VAR2->VAR32 * 4 + VAR66;
    if (!VAR4->VAR67 && (VAR23 = FUN7(VAR4, VAR28)) < 0)
    {
        FUN5(VAR2, VAR60, "");
        return VAR23;
    }
    VAR14 = VAR4->VAR67;
    VAR9->VAR68 = VAR4->VAR67;
    VAR9->VAR69 = &VAR14;
    VAR9->VAR70 = VAR4->VAR71;
    if (FUN8(VAR9, 8))
        goto VAR72;
    FUN9(&VAR14, 0x4949);
    FUN9(&VAR14, 42);
    VAR15 = VAR14;
    FUN10(&VAR14, 0);
    VAR18 = FUN11(VAR16, sizeof(*VAR18));
    VAR19 = FUN11(VAR16, sizeof(*VAR19));
    if (!VAR18 || !VAR19)
    {
        VAR23 = FUN12(VAR73);
        goto VAR72;
    }
    VAR20 = (((VAR9->VAR31 - 1) / VAR9->VAR33[0] + 1) * VAR9->VAR41 * VAR9->VAR33[0] * VAR9->VAR33[1] + 7) >> 3;
    if (VAR24)
    {
        VAR25 = FUN13(VAR20);
        if (!VAR25)
        {
            FUN5(VAR9->VAR2, VAR60, "");
            VAR23 = FUN12(VAR73);
            goto VAR72;
        }
    }
    if (VAR9->VAR61 == VAR62 || VAR9->VAR61 == VAR63)
    {
        VAR13 *VAR74;
        int VAR75, VAR76;
        int VAR77;
        VAR75 = VAR20 * VAR9->VAR65;
        VAR74 = FUN13(VAR75);
        if (!VAR74)
        {
            VAR23 = FUN12(VAR73);
            goto VAR72;
        }
        VAR19[0] = VAR14 - VAR4->VAR67;
        VAR76 = 0;
        for (VAR77 = 0; VAR77 < VAR9->VAR65; VAR77++)
        {
            if (VAR24)
            {
                FUN14(VAR9, VAR11, VAR25, VAR77);
                memcpy(VAR74 + VAR76, VAR25, VAR20);
                VAR77 += VAR9->VAR33[1] - 1;
            }
            else
                memcpy(VAR74 + VAR77 * VAR20, VAR11->VAR67[0] + VAR77 * VAR11->VAR78[0], VAR20);
            VAR76 += VAR20;
        }
        VAR23 = FUN15(VAR9, VAR74, VAR14, VAR76, VAR9->VAR61);
        FUN16(VAR74);
        if (VAR23 < 0)
        {
            FUN5(VAR9->VAR2, VAR60, "");
            goto VAR72;
        }
        VAR14 += VAR23;
        VAR18[0] = VAR14 - VAR4->VAR67 - VAR19[0];
    }
    else if (VAR9->VAR61 == VAR64)
    {
        VAR9->VAR79 = FUN13(VAR80);
        if (!VAR9->VAR79)
        {
            VAR23 = FUN12(VAR73);
            goto VAR72;
        }
    }
    for (VAR12 = 0; VAR12 < VAR9->VAR32; VAR12++)
    {
        if (VAR18[VAR12 / VAR9->VAR65] == 0)
        {
            if (VAR9->VAR61 == VAR64)
            {
                FUN17(VAR9->VAR79, VAR14, VAR9->VAR70 - (*VAR9->VAR69 - VAR9->VAR68), 12, VAR81, VAR82);
            }
            VAR19[VAR12 / VAR9->VAR65] = VAR14 - VAR4->VAR67;
        }
        if (VAR24)
        {
            FUN14(VAR9, VAR11, VAR25, VAR12);
            VAR23 = FUN15(VAR9, VAR25, VAR14, VAR20, VAR9->VAR61);
            VAR12 += VAR9->VAR33[1] - 1;
        }
        else
            VAR23 = FUN15(VAR9, VAR11->VAR67[0] + VAR12 * VAR11->VAR78[0], VAR14, VAR20, VAR9->VAR61);
        if (VAR23 < 0)
        {
            FUN5(VAR9->VAR2, VAR60, "");
            goto VAR72;
        }
        VAR18[VAR12 / VAR9->VAR65] += VAR23;
        VAR14 += VAR23;
        if (VAR9->VAR61 == VAR64 && (VAR12 == VAR9->VAR32 - 1 || VAR12 % VAR9->VAR65 == VAR9->VAR65 - 1))
        {
            VAR23 = FUN18(VAR9->VAR79, VAR83);
            VAR18[(VAR12 / VAR9->VAR65)] += VAR23;
            VAR14 += VAR23;
        }
    }
    if (VAR9->VAR61 == VAR64)
        FUN16(VAR9->VAR79);
    VAR9->VAR84 = 0;
    FUN19(VAR9, VAR85, VAR86, 0);
    FUN19(VAR9, VAR87, VAR86, VAR9->VAR31);
    FUN19(VAR9, VAR88, VAR86, VAR9->VAR32);
    if (VAR9->VAR49)
        FUN20(VAR9, VAR89, VAR90, VAR9->VAR49, VAR22);
    FUN19(VAR9, VAR91, VAR90, VAR9->VAR61);
    FUN19(VAR9, VAR92, VAR90, VAR9->VAR44);
    FUN20(VAR9, VAR93, VAR86, VAR16, VAR19);
    if (VAR9->VAR49)
        FUN19(VAR9, VAR94, VAR90, VAR9->VAR49);
    FUN19(VAR9, VAR95, VAR86, VAR9->VAR65);
    FUN20(VAR9, VAR96, VAR86, VAR16, VAR18);
    FUN20(VAR9, VAR97, VAR98, 1, VAR21);
    FUN20(VAR9, VAR99, VAR98, 1, VAR21);
    FUN19(VAR9, VAR100, VAR90, 2);
    if (!(VAR2->VAR42 & VAR101))
        FUN20(VAR9, VAR102, VAR103, strlen(VAR104) + 1, VAR104);
    if (VAR2->VAR34 == VAR40)
    {
        uint16_t VAR105[256 * 3];
        for (VAR12 = 0; VAR12 < 256; VAR12++)
        {
            uint32_t VAR106 = *(VAR17 *)(VAR11->VAR67[1] + VAR12 * 4);
            VAR105[VAR12] = ((VAR106 >> 16) & 0xff) * 257;
            VAR105[VAR12 + 256] = ((VAR106 >> 8) & 0xff) * 257;
            VAR105[VAR12 + 512] = (VAR106 & 0xff) * 257;
        }
        FUN20(VAR9, VAR107, VAR90, 256 * 3, VAR105);
    }
    if (VAR24)
    {
        uint32_t VAR108[12] = {15, 1, 235, 1, 128, 1, 240, 1, 128, 1, 240, 1};
        FUN20(VAR9, VAR109, VAR90, 2, VAR9->VAR33);
        FUN20(VAR9, VAR110, VAR98, 6, VAR108);
    }
    FUN10(&VAR15, VAR14 - VAR4->VAR67);
    if (FUN8(VAR9, 6 + VAR9->VAR84 * 12))
    {
        VAR23 = FUN12(VAR111);
        goto VAR72;
    }
    FUN9(&VAR14, VAR9->VAR84);
    FUN21(&VAR14, VAR9->VAR112, VAR9->VAR84 * 12);
    FUN10(&VAR14, 0);
    VAR4->VAR71 = VAR14 - VAR4->VAR67;
    VAR4->VAR42 |= VAR113;
    *VAR7 = 1;
VAR72:
    FUN16(VAR18);
    FUN16(VAR19);
    FUN16(VAR25);
    return VAR23;
}