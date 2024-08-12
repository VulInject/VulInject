int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4;
    VAR5 *VAR6 = &VAR2->VAR7->VAR6;
    int VAR8 = 0;
    unsigned int VAR9 = 0;
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
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR24);
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
    if (FUN7(VAR2, &VAR17->VAR32, VAR17->VAR30) < 0)
        goto VAR28;
    VAR9 = FUN8(VAR6);
    if (VAR9 >= VAR33)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR9);
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR17->VAR34 = FUN8(VAR6);
    if (VAR17->VAR34 == 3)
        VAR17->VAR35 = FUN9(VAR6);
    if (VAR17->VAR35)
        VAR17->VAR34 = 0;
    VAR17->VAR36 = FUN8(VAR6);
    VAR17->VAR37 = FUN8(VAR6);
    if ((VAR8 = FUN10(VAR17->VAR36, VAR17->VAR37, 0, VAR2->VAR22)) < 0)
        goto VAR28;
    if (FUN9(VAR6))
    {
        VAR17->VAR38.VAR39 = FUN8(VAR6) * 2;
        VAR17->VAR38.VAR40 = FUN8(VAR6) * 2;
        VAR17->VAR38.VAR41 = FUN8(VAR6) * 2;
        VAR17->VAR38.VAR42 = FUN8(VAR6) * 2;
        if (VAR2->VAR22->VAR43 & VAR44)
        {
            FUN4(VAR2->VAR22, VAR23, ""
                                           "",
                   VAR17->VAR38.VAR39, VAR17->VAR38.VAR40, VAR17->VAR38.VAR41, VAR17->VAR38.VAR42);
            VAR17->VAR38.VAR39 = VAR17->VAR38.VAR40 = VAR17->VAR38.VAR41 = VAR17->VAR38.VAR42 = 0;
        }
        VAR17->VAR45 = VAR17->VAR38;
    }
    VAR17->VAR46 = FUN8(VAR6) + 8;
    VAR11 = FUN8(VAR6) + 8;
    if (VAR17->VAR34 && VAR11 != VAR17->VAR46)
    {
        FUN4(VAR2->VAR22, VAR26, ""
                                       "",
               VAR17->VAR46, VAR11);
        VAR8 = VAR27;
        goto VAR28;
    }
    switch (VAR17->VAR46)
    {
    case 8:
        if (VAR17->VAR34 == 0)
            VAR17->VAR47 = VAR48;
        if (VAR17->VAR34 == 1)
            VAR17->VAR47 = VAR49;
        if (VAR17->VAR34 == 2)
            VAR17->VAR47 = VAR50;
        if (VAR17->VAR34 == 3)
            VAR17->VAR47 = VAR51;
        break;
    case 9:
        if (VAR17->VAR34 == 0)
            VAR17->VAR47 = VAR52;
        if (VAR17->VAR34 == 1)
            VAR17->VAR47 = VAR53;
        if (VAR17->VAR34 == 2)
            VAR17->VAR47 = VAR54;
        if (VAR17->VAR34 == 3)
            VAR17->VAR47 = VAR55;
        break;
    case 10:
        if (VAR17->VAR34 == 0)
            VAR17->VAR47 = VAR52;
        if (VAR17->VAR34 == 1)
            VAR17->VAR47 = VAR56;
        if (VAR17->VAR34 == 2)
            VAR17->VAR47 = VAR57;
        if (VAR17->VAR34 == 3)
            VAR17->VAR47 = VAR58;
        break;
    case 12:
        if (VAR17->VAR34 == 0)
            VAR17->VAR47 = VAR52;
        if (VAR17->VAR34 == 1)
            VAR17->VAR47 = VAR59;
        if (VAR17->VAR34 == 2)
            VAR17->VAR47 = VAR60;
        if (VAR17->VAR34 == 3)
            VAR17->VAR47 = VAR61;
        break;
    default:
        FUN4(VAR2->VAR22, VAR26, "");
        VAR8 = VAR62;
        goto VAR28;
    }
    VAR4 = FUN11(VAR17->VAR47);
    if (!VAR4)
    {
        VAR8 = FUN3(VAR63);
        goto VAR28;
    }
    VAR17->VAR64[0] = VAR17->VAR65[0] = 0;
    VAR17->VAR64[2] = VAR17->VAR64[1] = VAR4->VAR66;
    VAR17->VAR65[2] = VAR17->VAR65[1] = VAR4->VAR67;
    VAR17->VAR68 = VAR17->VAR46 > 8;
    VAR17->VAR69 = FUN8(VAR6) + 4;
    if (VAR17->VAR69 > 16)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR69 - 4);
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR14 = FUN9(VAR6);
    VAR12 = VAR14 ? 0 : VAR17->VAR30 - 1;
    for (VAR15 = VAR12; VAR15 < VAR17->VAR30; VAR15++)
    {
        VAR17->VAR70[VAR15].VAR71 = FUN8(VAR6) + 1;
        VAR17->VAR70[VAR15].VAR72 = FUN8(VAR6);
        VAR17->VAR70[VAR15].VAR73 = FUN8(VAR6) - 1;
        if (VAR17->VAR70[VAR15].VAR71 > VAR74)
        {
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR70[VAR15].VAR71 - 1);
            VAR8 = VAR27;
            goto VAR28;
        }
        if (VAR17->VAR70[VAR15].VAR72 > VAR17->VAR70[VAR15].VAR71 - 1)
        {
            FUN4(VAR2->VAR22, VAR75, "", VAR17->VAR70[VAR15].VAR72);
            if (VAR2->VAR22->VAR76 & VAR77 || VAR17->VAR70[VAR15].VAR72 > VAR74 - 1)
            {
                VAR8 = VAR27;
                goto VAR28;
            }
            VAR17->VAR70[VAR15].VAR71 = VAR17->VAR70[VAR15].VAR72 + 1;
        }
    }
    if (!VAR14)
    {
        for (VAR15 = 0; VAR15 < VAR12; VAR15++)
        {
            VAR17->VAR70[VAR15].VAR71 = VAR17->VAR70[VAR12].VAR71;
            VAR17->VAR70[VAR15].VAR72 = VAR17->VAR70[VAR12].VAR72;
            VAR17->VAR70[VAR15].VAR73 = VAR17->VAR70[VAR12].VAR73;
        }
    }
    VAR17->VAR78 = FUN8(VAR6) + 3;
    VAR17->VAR79 = FUN8(VAR6);
    VAR17->VAR80 = FUN8(VAR6) + 2;
    VAR10 = FUN8(VAR6);
    VAR17->VAR81 = VAR10 + VAR17->VAR80;
    if (VAR17->VAR80 >= VAR17->VAR78)
    {
        FUN4(VAR2->VAR22, VAR26, "");
        VAR8 = VAR27;
        goto VAR28;
    }
    VAR17->VAR82 = FUN8(VAR6);
    VAR17->VAR83 = FUN8(VAR6);
    VAR17->VAR84 = FUN9(VAR6);
    if (VAR17->VAR84)
    {
        FUN12(&VAR17->VAR85);
        if (FUN9(VAR6))
        {
            VAR8 = FUN13(VAR2, &VAR17->VAR85, VAR17);
            if (VAR8 < 0)
                goto VAR28;
        }
    }
    VAR17->VAR86 = FUN9(VAR6);
    VAR17->VAR87 = FUN9(VAR6);
    VAR17->VAR88 = FUN9(VAR6);
    if (VAR17->VAR88)
    {
        VAR17->VAR89.VAR46 = FUN5(VAR6, 4) + 1;
        VAR17->VAR89.VAR11 = FUN5(VAR6, 4) + 1;
        VAR17->VAR89.VAR90 = FUN8(VAR6) + 3;
        VAR17->VAR89.VAR91 = VAR17->VAR89.VAR90 + FUN8(VAR6);
        if (VAR17->VAR89.VAR46 > VAR17->VAR46)
        {
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR89.VAR46, VAR17->VAR46);
            VAR8 = VAR27;
            goto VAR28;
        }
        VAR17->VAR89.VAR92 = FUN9(VAR6);
    }
    VAR17->VAR93 = FUN8(VAR6);
    if (VAR17->VAR93 > VAR94)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR93);
        VAR8 = VAR27;
        goto VAR28;
    }
    for (VAR15 = 0; VAR15 < VAR17->VAR93; VAR15++)
    {
        if ((VAR8 = FUN14(VAR2, &VAR17->VAR95[VAR15], VAR17, 0)) < 0)
            goto VAR28;
    }
    VAR17->VAR96 = FUN9(VAR6);
    if (VAR17->VAR96)
    {
        VAR17->VAR97 = FUN8(VAR6);
        if (VAR17->VAR97 > 31U)
        {
            FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR97);
            goto VAR28;
        }
        for (VAR15 = 0; VAR15 < VAR17->VAR97; VAR15++)
        {
            VAR17->VAR98[VAR15] = FUN5(VAR6, VAR17->VAR69);
            VAR17->VAR99[VAR15] = FUN9(VAR6);
        }
    }
    VAR17->VAR100 = FUN9(VAR6);
    VAR17->VAR101 = FUN9(VAR6);
    VAR17->VAR102.VAR103 = (VAR104){0, 1};
    VAR13 = FUN9(VAR6);
    if (VAR13)
        FUN15(VAR2, VAR17);
    if (FUN9(VAR6))
    {
        int VAR105[1];
        for (VAR15 = 0; VAR15 < 1; VAR15++)
            VAR105[VAR15] = FUN9(VAR6);
        FUN16(VAR6, 7);
        if (VAR105[0])
        {
            int VAR106;
            int VAR107;
            int VAR108;
            VAR17->VAR109 = FUN9(VAR6);
            VAR17->VAR110 = FUN9(VAR6);
            VAR17->VAR111 = FUN9(VAR6);
            VAR17->VAR112 = FUN9(VAR6);
            VAR106 = FUN9(VAR6);
            if (VAR106)
                FUN4(VAR2->VAR22, VAR75, "");
            VAR17->VAR113 = FUN9(VAR6);
            VAR107 = FUN9(VAR6);
            if (VAR107)
                FUN4(VAR2->VAR22, VAR75, "");
            VAR17->VAR114 = FUN9(VAR6);
            VAR108 = FUN9(VAR6);
            if (VAR108)
                FUN4(VAR2->VAR22, VAR75, "");
        }
    }
    if (VAR2->VAR115)
    {
        VAR17->VAR45.VAR39 += VAR17->VAR102.VAR116.VAR39;
        VAR17->VAR45.VAR40 += VAR17->VAR102.VAR116.VAR40;
        VAR17->VAR45.VAR41 += VAR17->VAR102.VAR116.VAR41;
        VAR17->VAR45.VAR42 += VAR17->VAR102.VAR116.VAR42;
    }
    if (VAR17->VAR45.VAR39 & (0x1F >> (VAR17->VAR68)) && !(VAR2->VAR22->VAR117 & VAR118))
    {
        VAR17->VAR45.VAR39 &= ~(0x1F >> (VAR17->VAR68));
        FUN4(VAR2->VAR22, VAR75, ""
                                         "",
               VAR17->VAR45.VAR39);
    }
    VAR17->VAR119 = VAR17->VAR36 - (VAR17->VAR45.VAR39 + VAR17->VAR45.VAR40);
    VAR17->VAR120 = VAR17->VAR37 - (VAR17->VAR45.VAR41 + VAR17->VAR45.VAR42);
    if (VAR17->VAR119 <= 0 || VAR17->VAR120 <= 0)
    {
        FUN4(VAR2->VAR22, VAR75, "", VAR17->VAR119, VAR17->VAR120);
        if (VAR2->VAR22->VAR76 & VAR77)
        {
            VAR8 = VAR27;
            goto VAR28;
        }
        FUN4(VAR2->VAR22, VAR75, "");
        memset(&VAR17->VAR38, 0, sizeof(VAR17->VAR38));
        memset(&VAR17->VAR45, 0, sizeof(VAR17->VAR45));
        VAR17->VAR119 = VAR17->VAR36;
        VAR17->VAR120 = VAR17->VAR37;
    }
    VAR17->VAR121 = VAR17->VAR78 + VAR17->VAR79;
    VAR17->VAR122 = VAR17->VAR78 - 1;
    VAR17->VAR123 = (VAR17->VAR36 + (1 << VAR17->VAR121) - 1) >> VAR17->VAR121;
    VAR17->VAR124 = (VAR17->VAR37 + (1 << VAR17->VAR121) - 1) >> VAR17->VAR121;
    VAR17->VAR125 = VAR17->VAR123 * VAR17->VAR124;
    VAR17->VAR126 = VAR17->VAR36 >> VAR17->VAR78;
    VAR17->VAR127 = VAR17->VAR37 >> VAR17->VAR78;
    VAR17->VAR128 = VAR17->VAR36 >> VAR17->VAR80;
    VAR17->VAR129 = VAR17->VAR37 >> VAR17->VAR80;
    VAR17->VAR130 = VAR17->VAR36 >> VAR17->VAR122;
    VAR17->VAR131 = VAR17->VAR37 >> VAR17->VAR122;
    VAR17->VAR132 = (1 << (VAR17->VAR121 - VAR17->VAR80)) - 1;
    VAR17->VAR133 = 6 * (VAR17->VAR46 - 8);
    if (VAR17->VAR36 & ((1 << VAR17->VAR78) - 1) || VAR17->VAR37 & ((1 << VAR17->VAR78) - 1))
    {
        FUN4(VAR2->VAR22, VAR26, "");
        goto VAR28;
    }
    if (VAR17->VAR121 > VAR134)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR121);
        goto VAR28;
    }
    if (VAR17->VAR82 > VAR17->VAR121 - VAR17->VAR80)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR82);
        goto VAR28;
    }
    if (VAR17->VAR83 > VAR17->VAR121 - VAR17->VAR80)
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR83);
        goto VAR28;
    }
    if (VAR17->VAR81 > FUN17(VAR17->VAR121, 5))
    {
        FUN4(VAR2->VAR22, VAR26, "", VAR17->VAR81);
        goto VAR28;
    }
    if (FUN18(VAR6) < 0)
    {
        FUN4(VAR2->VAR22, VAR26, "", -FUN18(VAR6));
        goto VAR28;
    }
    if (VAR2->VAR22->VAR135 & VAR136)
    {
        FUN4(VAR2->VAR22, VAR23, ""
                                       "",
               VAR9, VAR17->VAR36, VAR17->VAR37, VAR17->VAR119, VAR17->VAR120, FUN19(VAR17->VAR47));
    }
    if (VAR2->VAR137[VAR9] && !memcmp(VAR2->VAR137[VAR9]->VAR21, VAR19->VAR21, VAR19->VAR138))
    {
        FUN20(&VAR19);
    }
    else
    {
        for (VAR15 = 0; VAR15 < FUN21(VAR2->VAR139); VAR15++)
        {
            if (VAR2->VAR139[VAR15] && ((VAR140 *)VAR2->VAR139[VAR15]->VAR21)->VAR9 == VAR9)
                FUN20(&VAR2->VAR139[VAR15]);
        }
        if (VAR2->VAR137[VAR9] && VAR2->VAR17 == (VAR16 *)VAR2->VAR137[VAR9]->VAR21)
        {
            FUN20(&VAR2->VAR141);
            VAR2->VAR141 = FUN22(VAR2->VAR137[VAR9]);
            if (!VAR2->VAR141)
                VAR2->VAR17 = NULL;
        }
        FUN20(&VAR2->VAR137[VAR9]);
        VAR2->VAR137[VAR9] = VAR19;
    }
    return 0;
VAR28:
    FUN20(&VAR19);
    return VAR8;
}