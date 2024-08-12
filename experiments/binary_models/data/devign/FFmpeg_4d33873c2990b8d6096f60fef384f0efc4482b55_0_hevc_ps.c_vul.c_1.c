int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    VAR6 *VAR7 = NULL;
    int VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18 = 0;
    int VAR19 = 0;
    VAR20 *VAR21;
    VAR22 *VAR23 = FUN2(sizeof(*VAR23));
    if (!VAR23)
        return FUN3(VAR24);
    VAR21 = FUN4((VAR25 *)VAR23, sizeof(*VAR23), VAR26, NULL, 0);
    if (!VAR21)
    {
        FUN5(&VAR23);
        return FUN3(VAR24);
    }
    FUN6(VAR2->VAR27, VAR28, "");
    VAR23->VAR29 = 1;
    VAR23->VAR30 = 1;
    VAR23->VAR31 = 1;
    VAR23->VAR32 = 1;
    VAR23->VAR33 = 0;
    VAR23->VAR34 = 0;
    VAR23->VAR35 = 0;
    VAR19 = FUN7(VAR4);
    if (VAR19 >= VAR36)
    {
        FUN6(VAR2->VAR27, VAR37, "", VAR19);
        VAR18 = VAR38;
        goto VAR39;
    }
    VAR23->VAR40 = FUN7(VAR4);
    if (VAR23->VAR40 >= VAR41)
    {
        FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR40);
        VAR18 = VAR38;
        goto VAR39;
    }
    if (!VAR2->VAR42[VAR23->VAR40])
    {
        FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR40);
        VAR18 = VAR38;
        goto VAR39;
    }
    VAR7 = (VAR6 *)VAR2->VAR42[VAR23->VAR40]->VAR43;
    VAR23->VAR44 = FUN8(VAR4);
    VAR23->VAR45 = FUN8(VAR4);
    VAR23->VAR46 = FUN9(VAR4, 3);
    VAR23->VAR47 = FUN8(VAR4);
    VAR23->VAR48 = FUN8(VAR4);
    VAR23->VAR49 = FUN7(VAR4) + 1;
    VAR23->VAR50 = FUN7(VAR4) + 1;
    VAR23->VAR51 = FUN10(VAR4);
    VAR23->VAR52 = FUN8(VAR4);
    VAR23->VAR53 = FUN8(VAR4);
    VAR23->VAR54 = FUN8(VAR4);
    VAR23->VAR55 = 0;
    if (VAR23->VAR54)
        VAR23->VAR55 = FUN7(VAR4);
    VAR23->VAR56 = FUN10(VAR4);
    if (VAR23->VAR56 < -12 || VAR23->VAR56 > 12)
    {
        FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR56);
        VAR18 = VAR38;
        goto VAR39;
    }
    VAR23->VAR57 = FUN10(VAR4);
    if (VAR23->VAR57 < -12 || VAR23->VAR57 > 12)
    {
        FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR57);
        VAR18 = VAR38;
        goto VAR39;
    }
    VAR23->VAR58 = FUN8(VAR4);
    VAR23->VAR59 = FUN8(VAR4);
    VAR23->VAR60 = FUN8(VAR4);
    VAR23->VAR61 = FUN8(VAR4);
    VAR23->VAR62 = FUN8(VAR4);
    VAR23->VAR63 = FUN8(VAR4);
    if (VAR23->VAR62)
    {
        VAR23->VAR30 = FUN7(VAR4) + 1;
        VAR23->VAR31 = FUN7(VAR4) + 1;
        if (VAR23->VAR30 == 0 || VAR23->VAR30 >= VAR7->VAR64)
        {
            FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR30 - 1);
            VAR18 = VAR38;
            goto VAR39;
        }
        if (VAR23->VAR31 == 0 || VAR23->VAR31 >= VAR7->VAR65)
        {
            FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR31 - 1);
            VAR18 = VAR38;
            goto VAR39;
        }
        VAR23->VAR66 = FUN11(VAR23->VAR30, sizeof(*VAR23->VAR66));
        VAR23->VAR67 = FUN11(VAR23->VAR31, sizeof(*VAR23->VAR67));
        if (!VAR23->VAR66 || !VAR23->VAR67)
        {
            VAR18 = FUN3(VAR24);
            goto VAR39;
        }
        VAR23->VAR32 = FUN8(VAR4);
        if (!VAR23->VAR32)
        {
            uint64_t VAR68 = 0;
            for (VAR12 = 0; VAR12 < VAR23->VAR30 - 1; VAR12++)
            {
                VAR23->VAR66[VAR12] = FUN7(VAR4) + 1;
                VAR68 += VAR23->VAR66[VAR12];
            }
            if (VAR68 >= VAR7->VAR69)
            {
                FUN6(VAR2->VAR27, VAR37, "");
                VAR18 = VAR38;
                goto VAR39;
            }
            VAR23->VAR66[VAR23->VAR30 - 1] = VAR7->VAR69 - VAR68;
            VAR68 = 0;
            for (VAR12 = 0; VAR12 < VAR23->VAR31 - 1; VAR12++)
            {
                VAR23->VAR67[VAR12] = FUN7(VAR4) + 1;
                VAR68 += VAR23->VAR67[VAR12];
            }
            if (VAR68 >= VAR7->VAR70)
            {
                FUN6(VAR2->VAR27, VAR37, "");
                VAR18 = VAR38;
                goto VAR39;
            }
            VAR23->VAR67[VAR23->VAR31 - 1] = VAR7->VAR70 - VAR68;
        }
        VAR23->VAR29 = FUN8(VAR4);
    }
    VAR23->VAR71 = FUN8(VAR4);
    VAR23->VAR72 = FUN8(VAR4);
    if (VAR23->VAR72)
    {
        VAR23->VAR73 = FUN8(VAR4);
        VAR23->VAR33 = FUN8(VAR4);
        if (!VAR23->VAR33)
        {
            VAR23->VAR34 = FUN10(VAR4) * 2;
            VAR23->VAR35 = FUN10(VAR4) * 2;
            if (VAR23->VAR34 / 2 < -6 || VAR23->VAR34 / 2 > 6)
            {
                FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR34 / 2);
                VAR18 = VAR38;
                goto VAR39;
            }
            if (VAR23->VAR35 / 2 < -6 || VAR23->VAR35 / 2 > 6)
            {
                FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR35 / 2);
                VAR18 = VAR38;
                goto VAR39;
            }
        }
    }
    VAR23->VAR74 = FUN8(VAR4);
    if (VAR23->VAR74)
    {
        FUN12(&VAR23->VAR75);
        VAR18 = FUN13(VAR2, &VAR23->VAR75);
        if (VAR18 < 0)
            goto VAR39;
    }
    VAR23->VAR76 = FUN8(VAR4);
    VAR23->VAR77 = FUN7(VAR4) + 2;
    if (VAR23->VAR77 > VAR7->VAR78)
    {
        FUN6(VAR2->VAR27, VAR37, "", VAR23->VAR77 - 2);
        VAR18 = VAR38;
        goto VAR39;
    }
    VAR23->VAR79 = FUN8(VAR4);
    FUN14(VAR4);
    VAR23->VAR80 = FUN11(VAR23->VAR30 + 1, sizeof(*VAR23->VAR80));
    VAR23->VAR81 = FUN11(VAR23->VAR31 + 1, sizeof(*VAR23->VAR81));
    VAR23->VAR82 = FUN11(VAR7->VAR69, sizeof(*VAR23->VAR82));
    if (!VAR23->VAR80 || !VAR23->VAR81 || !VAR23->VAR82)
    {
        VAR18 = FUN3(VAR24);
        goto VAR39;
    }
    if (VAR23->VAR32)
    {
        if (!VAR23->VAR66)
        {
            VAR23->VAR66 = FUN11(VAR23->VAR30, sizeof(*VAR23->VAR66));
            VAR23->VAR67 = FUN11(VAR23->VAR31, sizeof(*VAR23->VAR67));
        }
        if (!VAR23->VAR66 || !VAR23->VAR67)
        {
            VAR18 = FUN3(VAR24);
            goto VAR39;
        }
        for (VAR12 = 0; VAR12 < VAR23->VAR30; VAR12++)
        {
            VAR23->VAR66[VAR12] = ((VAR12 + 1) * VAR7->VAR69) / VAR23->VAR30 - (VAR12 * VAR7->VAR69) / VAR23->VAR30;
        }
        for (VAR12 = 0; VAR12 < VAR23->VAR31; VAR12++)
        {
            VAR23->VAR67[VAR12] = ((VAR12 + 1) * VAR7->VAR70) / VAR23->VAR31 - (VAR12 * VAR7->VAR70) / VAR23->VAR31;
        }
    }
    VAR23->VAR80[0] = 0;
    for (VAR12 = 0; VAR12 < VAR23->VAR30; VAR12++)
        VAR23->VAR80[VAR12 + 1] = VAR23->VAR80[VAR12] + VAR23->VAR66[VAR12];
    VAR23->VAR81[0] = 0;
    for (VAR12 = 0; VAR12 < VAR23->VAR31; VAR12++)
        VAR23->VAR81[VAR12 + 1] = VAR23->VAR81[VAR12] + VAR23->VAR67[VAR12];
    for (VAR12 = 0, VAR13 = 0; VAR12 < VAR7->VAR69; VAR12++)
    {
        if (VAR12 > VAR23->VAR80[VAR13])
            VAR13++;
        VAR23->VAR82[VAR12] = VAR13;
    }
    VAR8 = VAR7->VAR69 * VAR7->VAR70;
    VAR9 = VAR7->VAR83 * VAR7->VAR84;
    VAR10 = VAR7->VAR85 * VAR7->VAR86;
    VAR23->VAR87 = FUN11(VAR8, sizeof(*VAR23->VAR87));
    VAR23->VAR88 = FUN11(VAR8, sizeof(*VAR23->VAR88));
    VAR23->VAR17 = FUN11(VAR8, sizeof(*VAR23->VAR17));
    VAR23->VAR89 = FUN11(VAR9, sizeof(*VAR23->VAR89));
    VAR23->VAR90 = FUN11(VAR10, sizeof(*VAR23->VAR90));
    if (!VAR23->VAR87 || !VAR23->VAR88 || !VAR23->VAR17 || !VAR23->VAR89 || !VAR23->VAR90)
    {
        VAR18 = FUN3(VAR24);
        goto VAR39;
    }
    for (VAR16 = 0; VAR16 < VAR8; VAR16++)
    {
        int VAR91 = VAR16 % VAR7->VAR69;
        int VAR92 = VAR16 / VAR7->VAR69;
        int VAR93 = 0;
        int VAR94 = 0;
        int VAR95 = 0;
        for (VAR12 = 0; VAR12 < VAR23->VAR30; VAR12++)
        {
            if (VAR91 < VAR23->VAR80[VAR12 + 1])
            {
                VAR93 = VAR12;
                break;
            }
        }
        for (VAR12 = 0; VAR12 < VAR23->VAR31; VAR12++)
        {
            if (VAR92 < VAR23->VAR81[VAR12 + 1])
            {
                VAR94 = VAR12;
                break;
            }
        }
        for (VAR12 = 0; VAR12 < VAR93; VAR12++)
            VAR95 += VAR23->VAR67[VAR94] * VAR23->VAR66[VAR12];
        for (VAR12 = 0; VAR12 < VAR94; VAR12++)
            VAR95 += VAR7->VAR69 * VAR23->VAR67[VAR12];
        VAR95 += (VAR92 - VAR23->VAR81[VAR94]) * VAR23->VAR66[VAR93] + VAR91 - VAR23->VAR80[VAR93];
        VAR23->VAR87[VAR16] = VAR95;
        VAR23->VAR88[VAR95] = VAR16;
    }
    for (VAR13 = 0, VAR17 = 0; VAR13 < VAR23->VAR31; VAR13++)
        for (VAR12 = 0; VAR12 < VAR23->VAR30; VAR12++, VAR17++)
            for (VAR15 = VAR23->VAR81[VAR13]; VAR15 < VAR23->VAR81[VAR13 + 1]; VAR15++)
                for (VAR14 = VAR23->VAR80[VAR12]; VAR14 < VAR23->VAR80[VAR12 + 1]; VAR14++)
                    VAR23->VAR17[VAR23->VAR87[VAR15 * VAR7->VAR69 + VAR14]] = VAR17;
    VAR23->VAR96 = FUN11(VAR17, sizeof(*VAR23->VAR96));
    if (!VAR23->VAR96)
    {
        VAR18 = FUN3(VAR24);
        goto VAR39;
    }
    for (VAR13 = 0; VAR13 < VAR23->VAR31; VAR13++)
        for (VAR12 = 0; VAR12 < VAR23->VAR30; VAR12++)
            VAR23->VAR96[VAR13 * VAR23->VAR30 + VAR12] = VAR23->VAR81[VAR13] * VAR7->VAR69 + VAR23->VAR80[VAR12];
    for (VAR15 = 0; VAR15 < VAR7->VAR84; VAR15++)
    {
        for (VAR14 = 0; VAR14 < VAR7->VAR83; VAR14++)
        {
            int VAR91 = VAR14 >> VAR7->VAR97;
            int VAR92 = VAR15 >> VAR7->VAR97;
            int VAR16 = VAR7->VAR69 * VAR92 + VAR91;
            int VAR95 = VAR23->VAR87[VAR16] << (VAR7->VAR97 * 2);
            for (VAR12 = 0; VAR12 < VAR7->VAR97; VAR12++)
            {
                int VAR98 = 1 << VAR12;
                VAR95 += (VAR98 & VAR14 ? VAR98 * VAR98 : 0) + (VAR98 & VAR15 ? 2 * VAR98 * VAR98 : 0);
            }
            VAR23->VAR89[VAR15 * VAR7->VAR83 + VAR14] = VAR95;
        }
    }
    VAR11 = VAR7->VAR78 - VAR7->VAR99;
    for (VAR15 = 0; VAR15 < VAR7->VAR86; VAR15++)
    {
        for (VAR14 = 0; VAR14 < VAR7->VAR85; VAR14++)
        {
            int VAR91 = VAR14 >> VAR11;
            int VAR92 = VAR15 >> VAR11;
            int VAR16 = VAR7->VAR69 * VAR92 + VAR91;
            int VAR95 = VAR23->VAR87[VAR16] << (VAR11 * 2);
            for (VAR12 = 0; VAR12 < VAR11; VAR12++)
            {
                int VAR98 = 1 << VAR12;
                VAR95 += (VAR98 & VAR14 ? VAR98 * VAR98 : 0) + (VAR98 & VAR15 ? 2 * VAR98 * VAR98 : 0);
            }
            VAR23->VAR90[VAR15 * VAR7->VAR85 + VAR14] = VAR95;
        }
    }
    FUN15(&VAR2->VAR100[VAR19]);
    VAR2->VAR100[VAR19] = VAR21;
    return 0;
VAR39:
    FUN15(&VAR21);
    return VAR18;
}