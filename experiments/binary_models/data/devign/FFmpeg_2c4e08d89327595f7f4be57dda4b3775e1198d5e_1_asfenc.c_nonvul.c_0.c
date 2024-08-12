static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11[5];
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    int VAR19;
    VAR20 *VAR21;
    int64_t VAR22, VAR23, VAR24;
    int VAR25;
    int64_t VAR26;
    FUN2(&VAR2->VAR27, VAR28, NULL);
    VAR11[0] = FUN3(VAR2->VAR27, "", NULL, 0);
    VAR11[1] = FUN3(VAR2->VAR27, "", NULL, 0);
    VAR11[2] = FUN3(VAR2->VAR27, "", NULL, 0);
    VAR11[3] = FUN3(VAR2->VAR27, "", NULL, 0);
    VAR11[4] = FUN3(VAR2->VAR27, "", NULL, 0);
    VAR26 = VAR6->VAR26 + VAR29 * 10000;
    VAR18 = VAR11[0] || VAR11[1] || VAR11[2] || VAR11[3] || VAR11[4];
    VAR19 = VAR2->VAR27 ? VAR2->VAR27->VAR30 : 0;
    VAR25 = 0;
    for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
    {
        VAR21 = VAR2->VAR32[VAR13]->VAR33;
        FUN4(VAR2->VAR32[VAR13], 32, 1, 1000);
        VAR25 += VAR21->VAR25;
    }
    if (VAR6->VAR34)
    {
        FUN5(VAR2, 0x4824, 0, 0xc00);
    }
    FUN6(VAR9, &VAR35);
    FUN7(VAR9, -1);
    FUN8(VAR9, 3 + VAR18 + !!VAR19 + VAR2->VAR31);
    FUN9(VAR9, 1);
    FUN9(VAR9, 2);
    VAR22 = FUN10(VAR9);
    VAR24 = FUN11(VAR9, &VAR36);
    FUN6(VAR9, &VAR37);
    FUN7(VAR9, VAR3);
    VAR17 = 0;
    FUN7(VAR9, FUN12(VAR17));
    FUN7(VAR9, VAR6->VAR38);
    FUN7(VAR9, VAR26);
    FUN7(VAR9, VAR6->VAR26);
    FUN7(VAR9, VAR29);
    FUN8(VAR9, (VAR6->VAR34 || !VAR9->VAR39) ? 3 : 2);
    FUN8(VAR9, VAR2->VAR40);
    FUN8(VAR9, VAR2->VAR40);
    FUN8(VAR9, VAR25);
    FUN13(VAR9, VAR24);
    VAR24 = FUN11(VAR9, &VAR41);
    FUN6(VAR9, &VAR42);
    FUN8(VAR9, 6);
    FUN14(VAR9, 0);
    FUN13(VAR9, VAR24);
    if (VAR18)
    {
        int VAR43;
        VAR44 *VAR45;
        VAR8 *VAR46;
        if (FUN15(&VAR46) < 0)
            return FUN16(VAR47);
        VAR24 = FUN11(VAR9, &VAR48);
        for (VAR13 = 0; VAR13 < FUN17(VAR11); VAR13++)
        {
            VAR43 = VAR11[VAR13] ? FUN18(VAR46, VAR11[VAR13]->VAR49) : 0;
            FUN14(VAR9, VAR43);
        }
        VAR43 = FUN19(VAR46, &VAR45);
        FUN20(VAR9, VAR45, VAR43);
        FUN21(&VAR45);
        FUN13(VAR9, VAR24);
    }
    if (VAR19)
    {
        VAR10 *VAR50 = NULL;
        VAR24 = FUN11(VAR9, &VAR51);
        FUN14(VAR9, VAR19);
        while ((VAR50 = FUN3(VAR2->VAR27, "", VAR50, VAR52)))
        {
            FUN22(VAR9, VAR50->VAR53);
            FUN14(VAR9, 0);
            FUN22(VAR9, VAR50->VAR49);
        }
        FUN13(VAR9, VAR24);
    }
    for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
    {
        int64_t VAR54;
        VAR21 = VAR2->VAR32[VAR13]->VAR33;
        VAR6->VAR32[VAR13].VAR55 = VAR13 + 1;
        VAR6->VAR32[VAR13].VAR56 = 0;
        switch (VAR21->VAR57)
        {
        case VAR58:
            VAR16 = 0;
            VAR14 = 18 + VAR16;
            VAR15 = 8;
            break;
        default:
        case VAR59:
            VAR16 = VAR21->VAR60;
            VAR14 = 0x33 + VAR16;
            VAR15 = 0;
            break;
        }
        VAR24 = FUN11(VAR9, &VAR61);
        if (VAR21->VAR57 == VAR58)
        {
            FUN6(VAR9, &VAR62);
            FUN6(VAR9, &VAR63);
        }
        else
        {
            FUN6(VAR9, &VAR64);
            FUN6(VAR9, &VAR65);
        }
        FUN7(VAR9, 0);
        VAR54 = FUN10(VAR9);
        FUN8(VAR9, VAR14);
        FUN8(VAR9, VAR15);
        FUN14(VAR9, VAR13 + 1);
        FUN8(VAR9, 0);
        if (VAR21->VAR57 == VAR58)
        {
            int VAR66 = FUN23(VAR9, VAR21);
            if (VAR66 < 0)
                return -1;
            if (VAR66 != VAR14)
            {
                VAR23 = FUN10(VAR9);
                FUN24(VAR9, VAR54, VAR67);
                FUN8(VAR9, VAR66);
                FUN24(VAR9, VAR23, VAR67);
            }
            FUN9(VAR9, 0x01);
            if (VAR21->VAR68 == VAR69 || !VAR21->VAR70)
            {
                FUN14(VAR9, 0x0190);
                FUN14(VAR9, 0x0190);
            }
            else
            {
                FUN14(VAR9, VAR21->VAR70);
                FUN14(VAR9, VAR21->VAR70);
            }
            FUN14(VAR9, 0x01);
            FUN9(VAR9, 0x00);
        }
        else
        {
            FUN8(VAR9, VAR21->VAR71);
            FUN8(VAR9, VAR21->VAR72);
            FUN9(VAR9, 2);
            FUN14(VAR9, 40 + VAR21->VAR60);
            FUN25(VAR9, VAR21, VAR73, 1);
        }
        FUN13(VAR9, VAR24);
    }
    VAR24 = FUN11(VAR9, &VAR74);
    FUN6(VAR9, &VAR75);
    FUN8(VAR9, VAR2->VAR31);
    for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
    {
        VAR76 *VAR77;
        const char *VAR78;
        int VAR43;
        VAR44 *VAR45;
        VAR8 *VAR46;
        VAR21 = VAR2->VAR32[VAR13]->VAR33;
        VAR77 = FUN26(VAR21->VAR68);
        if (VAR21->VAR57 == VAR58)
            FUN14(VAR9, 2);
        else if (VAR21->VAR57 == VAR59)
            FUN14(VAR9, 1);
        else
            FUN14(VAR9, -1);
        if (VAR21->VAR68 == VAR79)
            VAR78 = "";
        else
            VAR78 = VAR77 ? VAR77->VAR80 : VAR21->VAR81;
        if (FUN15(&VAR46) < 0)
            return FUN16(VAR47);
        FUN18(VAR46, VAR78);
        VAR43 = FUN19(VAR46, &VAR45);
        FUN14(VAR9, VAR43 / 2);
        FUN20(VAR9, VAR45, VAR43);
        FUN21(&VAR45);
        FUN14(VAR9, 0);
        if (VAR21->VAR57 == VAR58)
        {
            FUN14(VAR9, 2);
            FUN14(VAR9, VAR21->VAR82);
        }
        else
        {
            FUN14(VAR9, 4);
            FUN8(VAR9, VAR21->VAR82);
        }
        if (!VAR21->VAR82)
            return -1;
    }
    FUN13(VAR9, VAR24);
    VAR23 = FUN10(VAR9);
    VAR12 = VAR23 - VAR22;
    if (VAR6->VAR34)
    {
        VAR12 += 8 + 30 + 50;
        FUN24(VAR9, VAR22 - 10 - 30, VAR67);
        FUN14(VAR9, VAR12);
        FUN24(VAR9, VAR22 - 2 - 30, VAR67);
        FUN14(VAR9, VAR12);
        VAR12 -= 8 + 30 + 50;
    }
    VAR12 += 24 + 6;
    FUN24(VAR9, VAR22 - 14, VAR67);
    FUN7(VAR9, VAR12);
    FUN24(VAR9, VAR23, VAR67);
    VAR6->VAR83 = VAR23;
    FUN6(VAR9, &VAR84);
    FUN7(VAR9, VAR4);
    FUN6(VAR9, &VAR37);
    FUN7(VAR9, VAR6->VAR38);
    FUN9(VAR9, 1);
    FUN9(VAR9, 1);
    return 0;
}