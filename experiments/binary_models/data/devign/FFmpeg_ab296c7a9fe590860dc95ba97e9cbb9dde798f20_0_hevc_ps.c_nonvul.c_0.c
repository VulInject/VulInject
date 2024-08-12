int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4;
    VAR5 *VAR6 = &VAR2->VAR7->VAR6;
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19 = FUN2(sizeof(*VAR17));
    if (!VAR19)
        return FUN3(VAR20);
    VAR17 = (VAR16 *)VAR19->VAR21;
    FUN4(VAR2->VAR22, VAR23, "");
    VAR17->VAR24 = FUN5(VAR6, 4);
    if (VAR17->VAR24 >= VAR25)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR24);
        VAR8 = VAR27;
        goto VAR28;
    }
    if (!VAR2->VAR29[VAR17->VAR24])
    {
        FUN4(VAR2->VAR22, VAR26, "");
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR17->VAR30 = FUN5(VAR6, 3) + 1;
    if (VAR17->VAR30 > VAR31)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR30);
        VAR8 = VAR27;
        goto VAR28;
    }
    FUN6(VAR6);
    FUN7(VAR2, &VAR17->VAR32, VAR17->VAR30);
    VAR9 = FUN8(VAR6);
    if (VAR9 >= VAR33)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR9);
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR17->VAR34 = FUN8(VAR6);
    if (VAR17->VAR34 != 1)
    {
        FUN9(VAR2->VAR22, "");
        VAR8 = VAR35;
        goto VAR28;
    }
    if (VAR17->VAR34 == 3)
        VAR17->VAR36 = FUN10(VAR6);
    VAR17->VAR37 = FUN8(VAR6);
    VAR17->VAR38 = FUN8(VAR6);
    if ((VAR8 = FUN11(VAR17->VAR37, VAR17->VAR38, 0, VAR2->VAR22)) < 0)
        goto VAR28;
    if (FUN10(VAR6))
    {
        VAR17->VAR39.VAR40 = FUN8(VAR6) * 2;
        VAR17->VAR39.VAR41 = FUN8(VAR6) * 2;
        VAR17->VAR39.VAR42 = FUN8(VAR6) * 2;
        VAR17->VAR39.VAR43 = FUN8(VAR6) * 2;
        if (VAR2->VAR22->VAR44 & VAR45)
        {
            FUN4(VAR2->VAR22, VAR23, ""
                                           "",
                   VAR17->VAR39.VAR40, VAR17->VAR39.VAR41, VAR17->VAR39.VAR42, VAR17->VAR39.VAR43);
            VAR17->VAR39.VAR40 = VAR17->VAR39.VAR41 = VAR17->VAR39.VAR42 = VAR17->VAR39.VAR43 = 0;
        }
        VAR17->VAR46 = VAR17->VAR39;
    }
    VAR17->VAR47 = FUN8(VAR6) + 8;
    VAR11 = FUN8(VAR6) + 8;
    if (VAR11 != VAR17->VAR47)
    {
        FUN4(VAR2->VAR22, VAR26, ""
                                       "",
               VAR17->VAR47, VAR11);
        VAR8 = VAR27;
        goto VAR28;
    }
    if (VAR17->VAR34 == 1)
    {
        switch (VAR17->VAR47)
        {
        case 8:
            VAR17->VAR48 = VAR49;
            break;
        case 9:
            VAR17->VAR48 = VAR50;
            break;
        case 10:
            VAR17->VAR48 = VAR51;
            break;
        default:
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR47);
            VAR8 = VAR35;
            goto VAR28;
        }
    }
    else
    {
        FUN4(VAR2->VAR22, VAR26, "");
        return VAR35;
    }
    VAR4 = FUN12(VAR17->VAR48);
    if (!VAR4)
    {
        VAR8 = FUN3(VAR52);
        goto VAR28;
    }
    VAR17->VAR53[0] = VAR17->VAR54[0] = 0;
    VAR17->VAR53[2] = VAR17->VAR53[1] = VAR4->VAR55;
    VAR17->VAR54[2] = VAR17->VAR54[1] = VAR4->VAR56;
    VAR17->VAR57 = VAR17->VAR47 > 8;
    VAR17->VAR58 = FUN8(VAR6) + 4;
    if (VAR17->VAR58 > 16)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR58 - 4);
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR14 = FUN10(VAR6);
    VAR12 = VAR14 ? 0 : VAR17->VAR30 - 1;
    for (VAR15 = VAR12; VAR15 < VAR17->VAR30; VAR15++)
    {
        VAR17->VAR59[VAR15].VAR60 = FUN8(VAR6) + 1;
        VAR17->VAR59[VAR15].VAR61 = FUN8(VAR6);
        VAR17->VAR59[VAR15].VAR62 = FUN8(VAR6) - 1;
        if (VAR17->VAR59[VAR15].VAR60 > VAR63)
        {
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR59[VAR15].VAR60 - 1);
            VAR8 = VAR27;
            goto VAR28;
        }
        if (VAR17->VAR59[VAR15].VAR61 > VAR17->VAR59[VAR15].VAR60 - 1)
        {
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR59[VAR15].VAR61);
            if (VAR17->VAR59[VAR15].VAR61 > VAR63 - 1)
            {
                VAR8 = VAR27;
                goto VAR28;
            }
            VAR17->VAR59[VAR15].VAR60 = VAR17->VAR59[VAR15].VAR61 + 1;
        }
    }
    if (!VAR14)
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            VAR17->VAR59[VAR15].VAR60 = VAR17->VAR59[VAR12].VAR60;
            VAR17->VAR59[VAR15].VAR61 = VAR17->VAR59[VAR12].VAR61;
            VAR17->VAR59[VAR15].VAR62 = VAR17->VAR59[VAR12].VAR62;
        }
    }
    VAR17->VAR64 = FUN8(VAR6) + 3;
    VAR17->VAR65 = FUN8(VAR6);
    VAR17->VAR66 = FUN8(VAR6) + 2;
    VAR10 = FUN8(VAR6);
    VAR17->VAR67 = VAR10 + VAR17->VAR66;
    if (VAR17->VAR66 >= VAR17->VAR64)
    {
        FUN4(VAR2->VAR22, VAR26, "");
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR17->VAR68 = FUN8(VAR6);
    VAR17->VAR69 = FUN8(VAR6);
    VAR17->VAR70 = FUN10(VAR6);
    if (VAR17->VAR70)
    {
        FUN13(&VAR17->VAR71);
        if (FUN10(VAR6))
        {
            VAR8 = FUN14(VAR2, &VAR17->VAR71);
            if (VAR8 < 0)
                goto VAR28;
        }
    }
    VAR17->VAR72 = FUN10(VAR6);
    VAR17->VAR73 = FUN10(VAR6);
    VAR17->VAR74 = FUN10(VAR6);
    if (VAR17->VAR74)
    {
        VAR17->VAR75.VAR47 = FUN5(VAR6, 4) + 1;
        VAR17->VAR75.VAR11 = FUN5(VAR6, 4) + 1;
        VAR17->VAR75.VAR76 = FUN8(VAR6) + 3;
        VAR17->VAR75.VAR77 = VAR17->VAR75.VAR76 + FUN8(VAR6);
        if (VAR17->VAR75.VAR47 > VAR17->VAR47)
        {
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR75.VAR47, VAR17->VAR47);
            VAR8 = VAR27;
            goto VAR28;
        }
        VAR17->VAR75.VAR78 = FUN10(VAR6);
    }
    VAR17->VAR79 = FUN8(VAR6);
    if (VAR17->VAR79 > VAR80)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR79);
        VAR8 = VAR27;
        goto VAR28;
    }
    for (VAR15 = 0; VAR15 < VAR17->VAR79; VAR15++)
    {
        if ((VAR8 = FUN15(VAR2, &VAR17->VAR81[VAR15], VAR17, 0)) < 0)
            goto VAR28;
    }
    VAR17->VAR82 = FUN10(VAR6);
    if (VAR17->VAR82)
    {
        VAR17->VAR83 = FUN8(VAR6);
        for (VAR15 = 0; VAR15 < VAR17->VAR83; VAR15++)
        {
            VAR17->VAR84[VAR15] = FUN5(VAR6, VAR17->VAR58);
            VAR17->VAR85[VAR15] = FUN10(VAR6);
        }
    }
    VAR17->VAR86 = FUN10(VAR6);
    VAR17->VAR87 = FUN10(VAR6);
    VAR17->VAR88.VAR89 = (VAR90){0, 1};
    VAR13 = FUN10(VAR6);
    if (VAR13)
        FUN16(VAR2, VAR17);
    FUN6(VAR6);
    if (VAR2->VAR91)
    {
        VAR17->VAR46.VAR40 += VAR17->VAR88.VAR92.VAR40;
        VAR17->VAR46.VAR41 += VAR17->VAR88.VAR92.VAR41;
        VAR17->VAR46.VAR42 += VAR17->VAR88.VAR92.VAR42;
        VAR17->VAR46.VAR43 += VAR17->VAR88.VAR92.VAR43;
    }
    if (VAR17->VAR46.VAR40 & (0x1F >> (VAR17->VAR57)) && !(VAR2->VAR22->VAR93 & VAR94))
    {
        VAR17->VAR46.VAR40 &= ~(0x1F >> (VAR17->VAR57));
        FUN4(VAR2->VAR22, VAR95, ""
                                         "",
               VAR17->VAR46.VAR40);
    }
    VAR17->VAR96 = VAR17->VAR37 - (VAR17->VAR46.VAR40 + VAR17->VAR46.VAR41);
    VAR17->VAR97 = VAR17->VAR38 - (VAR17->VAR46.VAR42 + VAR17->VAR46.VAR43);
    if (VAR17->VAR96 <= 0 || VAR17->VAR97 <= 0)
    {
        FUN4(VAR2->VAR22, VAR95, "", VAR17->VAR96, VAR17->VAR97);
        if (VAR2->VAR22->VAR98 & VAR99)
        {
            VAR8 = VAR27;
            goto VAR28;
        }
        FUN4(VAR2->VAR22, VAR95, "");
        VAR17->VAR39.VAR40 = VAR17->VAR39.VAR41 = VAR17->VAR39.VAR42 = VAR17->VAR39.VAR43 = 0;
        VAR17->VAR96 = VAR17->VAR37;
        VAR17->VAR97 = VAR17->VAR38;
    }
    VAR17->VAR100 = VAR17->VAR64 + VAR17->VAR65;
    VAR17->VAR101 = VAR17->VAR64 - 1;
    VAR17->VAR102 = (VAR17->VAR37 + (1 << VAR17->VAR100) - 1) >> VAR17->VAR100;
    VAR17->VAR103 = (VAR17->VAR38 + (1 << VAR17->VAR100) - 1) >> VAR17->VAR100;
    VAR17->VAR104 = VAR17->VAR102 * VAR17->VAR103;
    VAR17->VAR105 = VAR17->VAR37 >> VAR17->VAR64;
    VAR17->VAR106 = VAR17->VAR38 >> VAR17->VAR64;
    VAR17->VAR107 = VAR17->VAR37 >> VAR17->VAR66;
    VAR17->VAR108 = VAR17->VAR38 >> VAR17->VAR66;
    VAR17->VAR109 = VAR17->VAR37 >> VAR17->VAR101;
    VAR17->VAR110 = VAR17->VAR38 >> VAR17->VAR101;
    VAR17->VAR111 = 6 * (VAR17->VAR47 - 8);
    if (VAR17->VAR37 & ((1 << VAR17->VAR64) - 1) || VAR17->VAR38 & ((1 << VAR17->VAR64) - 1))
    {
        FUN4(VAR2->VAR22, VAR26, "");
        goto VAR28;
    }
    if (VAR17->VAR100 > VAR112)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR100);
        goto VAR28;
    }
    if (VAR17->VAR68 > VAR17->VAR100 - VAR17->VAR66)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR68);
        goto VAR28;
    }
    if (VAR17->VAR69 > VAR17->VAR100 - VAR17->VAR66)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR69);
        goto VAR28;
    }
    if (VAR17->VAR67 > FUN17(VAR17->VAR100, 5))
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR67);
        goto VAR28;
    }
    if (VAR2->VAR22->VAR113 & VAR114)
    {
        FUN4(VAR2->VAR22, VAR23, ""
                                       "",
               VAR9, VAR17->VAR37, VAR17->VAR38, VAR17->VAR96, VAR17->VAR97, FUN18(VAR17->VAR48));
    }
    if (VAR2->VAR115[VAR9] && !memcmp(VAR2->VAR115[VAR9]->VAR21, VAR19->VAR21, VAR19->VAR116))
    {
        FUN19(&VAR19);
    }
    else
    {
        for (VAR15 = 0; VAR15 < FUN20(VAR2->VAR117); VAR15++)
        {
            if (VAR2->VAR117[VAR15] && ((VAR118 *)VAR2->VAR117[VAR15]->VAR21)->VAR9 == VAR9)
                FUN19(&VAR2->VAR117[VAR15]);
        }
        FUN19(&VAR2->VAR115[VAR9]);
        VAR2->VAR115[VAR9] = VAR19;
    }
    return 0;
VAR28:
    FUN19(&VAR19);
    return VAR8;
}