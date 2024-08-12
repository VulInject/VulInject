int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    VAR6 *VAR7 = NULL;
    int VAR8;
    int VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16 = 0;
    unsigned int VAR17 = 0;
    VAR18 *VAR19;
    VAR20 *VAR21 = FUN2(sizeof(*VAR21));
    if (!VAR21)
        return FUN3(VAR22);
    VAR19 = FUN4((VAR23 *)VAR21, sizeof(*VAR21), VAR24, NULL, 0);
    if (!VAR19)
    {
        FUN5(&VAR21);
        return FUN3(VAR22);
    }
    FUN6(VAR2->VAR25, VAR26, "");
    VAR21->VAR27 = 1;
    VAR21->VAR28 = 1;
    VAR21->VAR29 = 1;
    VAR21->VAR30 = 1;
    VAR21->VAR31 = 0;
    VAR21->VAR32 = 0;
    VAR21->VAR33 = 0;
    VAR21->VAR34 = 2;
    VAR17 = FUN7(VAR4);
    if (VAR17 >= VAR35)
    {
        FUN6(VAR2->VAR25, VAR36, "", VAR17);
        VAR16 = VAR37;
        goto VAR38;
    }
    VAR21->VAR39 = FUN7(VAR4);
    if (VAR21->VAR39 >= VAR40)
    {
        FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR39);
        VAR16 = VAR37;
        goto VAR38;
    }
    if (!VAR2->VAR41[VAR21->VAR39])
    {
        FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR39);
        VAR16 = VAR37;
        goto VAR38;
    }
    VAR7 = (VAR6 *)VAR2->VAR41[VAR21->VAR39]->VAR42;
    VAR21->VAR43 = FUN8(VAR4);
    VAR21->VAR44 = FUN8(VAR4);
    VAR21->VAR45 = FUN9(VAR4, 3);
    VAR21->VAR46 = FUN8(VAR4);
    VAR21->VAR47 = FUN8(VAR4);
    VAR21->VAR48 = FUN7(VAR4) + 1;
    VAR21->VAR49 = FUN7(VAR4) + 1;
    VAR21->VAR50 = FUN10(VAR4);
    VAR21->VAR51 = FUN8(VAR4);
    VAR21->VAR52 = FUN8(VAR4);
    VAR21->VAR53 = FUN8(VAR4);
    VAR21->VAR54 = 0;
    if (VAR21->VAR53)
        VAR21->VAR54 = FUN7(VAR4);
    VAR21->VAR55 = FUN10(VAR4);
    if (VAR21->VAR55 < -12 || VAR21->VAR55 > 12)
    {
        FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR55);
        VAR16 = VAR37;
        goto VAR38;
    }
    VAR21->VAR56 = FUN10(VAR4);
    if (VAR21->VAR56 < -12 || VAR21->VAR56 > 12)
    {
        FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR56);
        VAR16 = VAR37;
        goto VAR38;
    }
    VAR21->VAR57 = FUN8(VAR4);
    VAR21->VAR58 = FUN8(VAR4);
    VAR21->VAR59 = FUN8(VAR4);
    VAR21->VAR60 = FUN8(VAR4);
    VAR21->VAR61 = FUN8(VAR4);
    VAR21->VAR62 = FUN8(VAR4);
    if (VAR21->VAR61)
    {
        VAR21->VAR28 = FUN7(VAR4) + 1;
        VAR21->VAR29 = FUN7(VAR4) + 1;
        if (VAR21->VAR28 == 0 || VAR21->VAR28 >= VAR7->VAR63)
        {
            FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR28 - 1);
            VAR16 = VAR37;
            goto VAR38;
        }
        if (VAR21->VAR29 == 0 || VAR21->VAR29 >= VAR7->VAR64)
        {
            FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR29 - 1);
            VAR16 = VAR37;
            goto VAR38;
        }
        VAR21->VAR65 = FUN11(VAR21->VAR28, sizeof(*VAR21->VAR65));
        VAR21->VAR66 = FUN11(VAR21->VAR29, sizeof(*VAR21->VAR66));
        if (!VAR21->VAR65 || !VAR21->VAR66)
        {
            VAR16 = FUN3(VAR22);
            goto VAR38;
        }
        VAR21->VAR30 = FUN8(VAR4);
        if (!VAR21->VAR30)
        {
            uint64_t VAR67 = 0;
            for (VAR10 = 0; VAR10 < VAR21->VAR28 - 1; VAR10++)
            {
                VAR21->VAR65[VAR10] = FUN7(VAR4) + 1;
                VAR67 += VAR21->VAR65[VAR10];
            }
            if (VAR67 >= VAR7->VAR68)
            {
                FUN6(VAR2->VAR25, VAR36, "");
                VAR16 = VAR37;
                goto VAR38;
            }
            VAR21->VAR65[VAR21->VAR28 - 1] = VAR7->VAR68 - VAR67;
            VAR67 = 0;
            for (VAR10 = 0; VAR10 < VAR21->VAR29 - 1; VAR10++)
            {
                VAR21->VAR66[VAR10] = FUN7(VAR4) + 1;
                VAR67 += VAR21->VAR66[VAR10];
            }
            if (VAR67 >= VAR7->VAR69)
            {
                FUN6(VAR2->VAR25, VAR36, "");
                VAR16 = VAR37;
                goto VAR38;
            }
            VAR21->VAR66[VAR21->VAR29 - 1] = VAR7->VAR69 - VAR67;
        }
        VAR21->VAR27 = FUN8(VAR4);
    }
    VAR21->VAR70 = FUN8(VAR4);
    VAR21->VAR71 = FUN8(VAR4);
    if (VAR21->VAR71)
    {
        VAR21->VAR72 = FUN8(VAR4);
        VAR21->VAR31 = FUN8(VAR4);
        if (!VAR21->VAR31)
        {
            VAR21->VAR32 = FUN10(VAR4) * 2;
            VAR21->VAR33 = FUN10(VAR4) * 2;
            if (VAR21->VAR32 / 2 < -6 || VAR21->VAR32 / 2 > 6)
            {
                FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR32 / 2);
                VAR16 = VAR37;
                goto VAR38;
            }
            if (VAR21->VAR33 / 2 < -6 || VAR21->VAR33 / 2 > 6)
            {
                FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR33 / 2);
                VAR16 = VAR37;
                goto VAR38;
            }
        }
    }
    VAR21->VAR73 = FUN8(VAR4);
    if (VAR21->VAR73)
    {
        FUN12(&VAR21->VAR74);
        VAR16 = FUN13(VAR2, &VAR21->VAR74, VAR7);
        if (VAR16 < 0)
            goto VAR38;
    }
    VAR21->VAR75 = FUN8(VAR4);
    VAR21->VAR76 = FUN7(VAR4) + 2;
    if (VAR21->VAR76 > VAR7->VAR77)
    {
        FUN6(VAR2->VAR25, VAR36, "", VAR21->VAR76 - 2);
        VAR16 = VAR37;
        goto VAR38;
    }
    VAR21->VAR78 = FUN8(VAR4);
    if (FUN8(VAR4))
    {
        int VAR79 = FUN8(VAR4);
        FUN9(VAR4, 7);
        if (VAR7->VAR80.VAR81.VAR82 == VAR83 && VAR79)
        {
            if ((VAR16 = FUN14(VAR2, VAR21, VAR7)) < 0)
                goto VAR38;
        }
    }
    VAR21->VAR84 = FUN11(VAR21->VAR28 + 1, sizeof(*VAR21->VAR84));
    VAR21->VAR85 = FUN11(VAR21->VAR29 + 1, sizeof(*VAR21->VAR85));
    VAR21->VAR86 = FUN11(VAR7->VAR68, sizeof(*VAR21->VAR86));
    if (!VAR21->VAR84 || !VAR21->VAR85 || !VAR21->VAR86)
    {
        VAR16 = FUN3(VAR22);
        goto VAR38;
    }
    if (VAR21->VAR30)
    {
        if (!VAR21->VAR65)
        {
            VAR21->VAR65 = FUN11(VAR21->VAR28, sizeof(*VAR21->VAR65));
            VAR21->VAR66 = FUN11(VAR21->VAR29, sizeof(*VAR21->VAR66));
        }
        if (!VAR21->VAR65 || !VAR21->VAR66)
        {
            VAR16 = FUN3(VAR22);
            goto VAR38;
        }
        for (VAR10 = 0; VAR10 < VAR21->VAR28; VAR10++)
        {
            VAR21->VAR65[VAR10] = ((VAR10 + 1) * VAR7->VAR68) / VAR21->VAR28 - (VAR10 * VAR7->VAR68) / VAR21->VAR28;
        }
        for (VAR10 = 0; VAR10 < VAR21->VAR29; VAR10++)
        {
            VAR21->VAR66[VAR10] = ((VAR10 + 1) * VAR7->VAR69) / VAR21->VAR29 - (VAR10 * VAR7->VAR69) / VAR21->VAR29;
        }
    }
    VAR21->VAR84[0] = 0;
    for (VAR10 = 0; VAR10 < VAR21->VAR28; VAR10++)
        VAR21->VAR84[VAR10 + 1] = VAR21->VAR84[VAR10] + VAR21->VAR65[VAR10];
    VAR21->VAR85[0] = 0;
    for (VAR10 = 0; VAR10 < VAR21->VAR29; VAR10++)
        VAR21->VAR85[VAR10 + 1] = VAR21->VAR85[VAR10] + VAR21->VAR66[VAR10];
    for (VAR10 = 0, VAR11 = 0; VAR10 < VAR7->VAR68; VAR10++)
    {
        if (VAR10 > VAR21->VAR84[VAR11])
            VAR11++;
        VAR21->VAR86[VAR10] = VAR11;
    }
    VAR8 = VAR7->VAR68 * VAR7->VAR69;
    VAR21->VAR87 = FUN11(VAR8, sizeof(*VAR21->VAR87));
    VAR21->VAR88 = FUN11(VAR8, sizeof(*VAR21->VAR88));
    VAR21->VAR15 = FUN11(VAR8, sizeof(*VAR21->VAR15));
    VAR21->VAR89 = FUN11((VAR7->VAR90 + 2) * (VAR7->VAR90 + 2), sizeof(*VAR21->VAR89));
    if (!VAR21->VAR87 || !VAR21->VAR88 || !VAR21->VAR15 || !VAR21->VAR89)
    {
        VAR16 = FUN3(VAR22);
        goto VAR38;
    }
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        int VAR91 = VAR14 % VAR7->VAR68;
        int VAR92 = VAR14 / VAR7->VAR68;
        int VAR93 = 0;
        int VAR94 = 0;
        int VAR95 = 0;
        for (VAR10 = 0; VAR10 < VAR21->VAR28; VAR10++)
        {
            if (VAR91 < VAR21->VAR84[VAR10 + 1])
            {
                VAR93 = VAR10;
                break;
            }
        }
        for (VAR10 = 0; VAR10 < VAR21->VAR29; VAR10++)
        {
            if (VAR92 < VAR21->VAR85[VAR10 + 1])
            {
                VAR94 = VAR10;
                break;
            }
        }
        for (VAR10 = 0; VAR10 < VAR93; VAR10++)
            VAR95 += VAR21->VAR66[VAR94] * VAR21->VAR65[VAR10];
        for (VAR10 = 0; VAR10 < VAR94; VAR10++)
            VAR95 += VAR7->VAR68 * VAR21->VAR66[VAR10];
        VAR95 += (VAR92 - VAR21->VAR85[VAR94]) * VAR21->VAR65[VAR93] + VAR91 - VAR21->VAR84[VAR93];
        VAR21->VAR87[VAR14] = VAR95;
        VAR21->VAR88[VAR95] = VAR14;
    }
    for (VAR11 = 0, VAR15 = 0; VAR11 < VAR21->VAR29; VAR11++)
        for (VAR10 = 0; VAR10 < VAR21->VAR28; VAR10++, VAR15++)
            for (VAR13 = VAR21->VAR85[VAR11]; VAR13 < VAR21->VAR85[VAR11 + 1]; VAR13++)
                for (VAR12 = VAR21->VAR84[VAR10]; VAR12 < VAR21->VAR84[VAR10 + 1]; VAR12++)
                    VAR21->VAR15[VAR21->VAR87[VAR13 * VAR7->VAR68 + VAR12]] = VAR15;
    VAR21->VAR96 = FUN11(VAR15, sizeof(*VAR21->VAR96));
    if (!VAR21->VAR96)
    {
        VAR16 = FUN3(VAR22);
        goto VAR38;
    }
    for (VAR11 = 0; VAR11 < VAR21->VAR29; VAR11++)
        for (VAR10 = 0; VAR10 < VAR21->VAR28; VAR10++)
            VAR21->VAR96[VAR11 * VAR21->VAR28 + VAR10] = VAR21->VAR85[VAR11] * VAR7->VAR68 + VAR21->VAR84[VAR10];
    VAR9 = VAR7->VAR77 - VAR7->VAR97;
    VAR21->VAR98 = &VAR21->VAR89[1 * (VAR7->VAR90 + 2) + 1];
    for (VAR13 = 0; VAR13 < VAR7->VAR90 + 2; VAR13++)
    {
        VAR21->VAR89[VAR13 * (VAR7->VAR90 + 2)] = -1;
        VAR21->VAR89[VAR13] = -1;
    }
    for (VAR13 = 0; VAR13 < VAR7->VAR90 + 1; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR7->VAR90 + 1; VAR12++)
        {
            int VAR91 = VAR12 >> VAR9;
            int VAR92 = VAR13 >> VAR9;
            int VAR14 = VAR7->VAR68 * VAR92 + VAR91;
            int VAR95 = VAR21->VAR87[VAR14] << (VAR9 * 2);
            for (VAR10 = 0; VAR10 < VAR9; VAR10++)
            {
                int VAR99 = 1 << VAR10;
                VAR95 += (VAR99 & VAR12 ? VAR99 * VAR99 : 0) + (VAR99 & VAR13 ? 2 * VAR99 * VAR99 : 0);
            }
            VAR21->VAR98[VAR13 * (VAR7->VAR90 + 2) + VAR12] = VAR95;
        }
    }
    if (FUN15(VAR4) < 0)
    {
        FUN6(VAR2->VAR25, VAR36, "", -FUN15(VAR4));
        goto VAR38;
    }
    FUN16(&VAR2->VAR100[VAR17]);
    VAR2->VAR100[VAR17] = VAR19;
    return 0;
VAR38:
    FUN16(&VAR19);
    return VAR16;
}