static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11[5];
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19 = 0;
    int VAR20;
    VAR21 *VAR22;
    int64_t VAR23, VAR24, VAR25;
    int VAR26;
    int64_t VAR27;
    FUN2(&VAR2->VAR28, VAR29, NULL);
    VAR11[0] = FUN3(VAR2->VAR28, "", NULL, 0);
    VAR11[1] = FUN3(VAR2->VAR28, "", NULL, 0);
    VAR11[2] = FUN3(VAR2->VAR28, "", NULL, 0);
    VAR11[3] = FUN3(VAR2->VAR28, "", NULL, 0);
    VAR11[4] = FUN3(VAR2->VAR28, "", NULL, 0);
    VAR27 = VAR6->VAR27 + VAR30 * 10000;
    VAR18 = VAR11[0] || VAR11[1] || VAR11[2] || VAR11[3] || VAR11[4];
    VAR20 = FUN4(VAR2->VAR28);
    VAR26 = 0;
    for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
    {
        VAR22 = VAR2->VAR32[VAR13]->VAR33;
        FUN5(VAR2->VAR32[VAR13], 32, 1, 1000);
        VAR26 += VAR22->VAR26;
        if (VAR22->VAR34 == VAR35 && VAR22->VAR36.VAR37 > 0 && VAR22->VAR36.VAR38 > 0)
            VAR19++;
    }
    if (VAR6->VAR39)
    {
        FUN6(VAR2, 0x4824, 0, 0xc00);
    }
    FUN7(VAR9, &VAR40);
    FUN8(VAR9, -1);
    FUN9(VAR9, 3 + VAR18 + !!VAR20 + VAR2->VAR31);
    FUN10(VAR9, 1);
    FUN10(VAR9, 2);
    VAR23 = FUN11(VAR9);
    VAR25 = FUN12(VAR9, &VAR41);
    FUN7(VAR9, &VAR42);
    FUN8(VAR9, VAR3);
    VAR17 = 0;
    FUN8(VAR9, FUN13(VAR17));
    FUN8(VAR9, VAR6->VAR43);
    FUN8(VAR9, VAR27);
    FUN8(VAR9, VAR6->VAR27);
    FUN8(VAR9, VAR30);
    FUN9(VAR9, (VAR6->VAR39 || !VAR9->VAR44) ? 3 : 2);
    FUN9(VAR9, VAR2->VAR45);
    FUN9(VAR9, VAR2->VAR45);
    FUN9(VAR9, VAR26 ? VAR26 : -1);
    FUN14(VAR9, VAR25);
    VAR25 = FUN12(VAR9, &VAR46);
    FUN7(VAR9, &VAR47);
    FUN15(VAR9, 6);
    if (VAR19)
    {
        int64_t VAR48;
        FUN9(VAR9, 26 + VAR19 * 84);
        VAR48 = FUN12(VAR9, &VAR49);
        FUN15(VAR9, 2 * VAR19);
        for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
        {
            VAR22 = VAR2->VAR32[VAR13]->VAR33;
            if (VAR22->VAR34 == VAR35 && VAR22->VAR36.VAR37 > 0 && VAR22->VAR36.VAR38 > 0)
            {
                AVRational VAR50 = VAR22->VAR36;
                FUN15(VAR9, 0);
                FUN15(VAR9, VAR13 + 1);
                FUN15(VAR9, 26);
                FUN15(VAR9, 3);
                FUN9(VAR9, 4);
                FUN16(VAR9, "");
                FUN9(VAR9, VAR50.VAR37);
                FUN15(VAR9, 0);
                FUN15(VAR9, VAR13 + 1);
                FUN15(VAR9, 26);
                FUN15(VAR9, 3);
                FUN9(VAR9, 4);
                FUN16(VAR9, "");
                FUN9(VAR9, VAR50.VAR38);
            }
        }
        FUN14(VAR9, VAR48);
    }
    else
    {
        FUN9(VAR9, 0);
    }
    FUN14(VAR9, VAR25);
    if (VAR18)
    {
        int VAR51;
        VAR52 *VAR53;
        VAR8 *VAR54;
        if (FUN17(&VAR54) < 0)
            return FUN18(VAR55);
        VAR25 = FUN12(VAR9, &VAR56);
        for (VAR13 = 0; VAR13 < FUN19(VAR11); VAR13++)
        {
            VAR51 = VAR11[VAR13] ? FUN16(VAR54, VAR11[VAR13]->VAR57) : 0;
            FUN15(VAR9, VAR51);
        }
        VAR51 = FUN20(VAR54, &VAR53);
        FUN21(VAR9, VAR53, VAR51);
        FUN22(&VAR53);
        FUN14(VAR9, VAR25);
    }
    if (VAR20)
    {
        VAR10 *VAR58 = NULL;
        VAR25 = FUN12(VAR9, &VAR59);
        FUN15(VAR9, VAR20);
        while ((VAR58 = FUN3(VAR2->VAR28, "", VAR58, VAR60)))
        {
            FUN23(VAR9, VAR58->VAR61);
            FUN15(VAR9, 0);
            FUN23(VAR9, VAR58->VAR57);
        }
        FUN14(VAR9, VAR25);
    }
    if (!VAR6->VAR39 && VAR2->VAR62)
    {
        int VAR63;
        if ((VAR63 = FUN24(VAR2)) < 0)
            return VAR63;
    }
    for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
    {
        int64_t VAR64;
        VAR22 = VAR2->VAR32[VAR13]->VAR33;
        VAR6->VAR32[VAR13].VAR37 = VAR13 + 1;
        VAR6->VAR32[VAR13].VAR65 = 1;
        switch (VAR22->VAR34)
        {
        case VAR66:
            VAR16 = 0;
            VAR14 = 18 + VAR16;
            VAR15 = 8;
            break;
        default:
        case VAR35:
            VAR16 = VAR22->VAR67;
            VAR14 = 0x33 + VAR16;
            VAR15 = 0;
            break;
        }
        VAR25 = FUN12(VAR9, &VAR68);
        if (VAR22->VAR34 == VAR66)
        {
            FUN7(VAR9, &VAR69);
            FUN7(VAR9, &VAR70);
        }
        else
        {
            FUN7(VAR9, &VAR71);
            FUN7(VAR9, &VAR72);
        }
        FUN8(VAR9, 0);
        VAR64 = FUN11(VAR9);
        FUN9(VAR9, VAR14);
        FUN9(VAR9, VAR15);
        FUN15(VAR9, VAR13 + 1);
        FUN9(VAR9, 0);
        if (VAR22->VAR34 == VAR66)
        {
            int VAR73 = FUN25(VAR9, VAR22, VAR74);
            if (VAR73 < 0)
                return -1;
            if (VAR73 != VAR14)
            {
                VAR24 = FUN11(VAR9);
                FUN26(VAR9, VAR64, VAR75);
                FUN9(VAR9, VAR73);
                FUN26(VAR9, VAR24, VAR75);
            }
            FUN10(VAR9, 0x01);
            if (VAR22->VAR76 == VAR77 || !VAR22->VAR78)
            {
                FUN15(VAR9, 0x0190);
                FUN15(VAR9, 0x0190);
            }
            else
            {
                FUN15(VAR9, VAR22->VAR78);
                FUN15(VAR9, VAR22->VAR78);
            }
            FUN15(VAR9, 0x01);
            FUN10(VAR9, 0x00);
        }
        else
        {
            FUN9(VAR9, VAR22->VAR79);
            FUN9(VAR9, VAR22->VAR80);
            FUN10(VAR9, 2);
            FUN15(VAR9, 40 + VAR22->VAR67);
            FUN27(VAR9, VAR22, VAR81, 1, 0);
        }
        FUN14(VAR9, VAR25);
    }
    VAR25 = FUN12(VAR9, &VAR82);
    FUN7(VAR9, &VAR83);
    FUN9(VAR9, VAR2->VAR31);
    for (VAR13 = 0; VAR13 < VAR2->VAR31; VAR13++)
    {
        const VAR84 *VAR85;
        const char *VAR86;
        VAR22 = VAR2->VAR32[VAR13]->VAR33;
        VAR85 = FUN28(VAR22->VAR76);
        if (VAR22->VAR34 == VAR66)
            FUN15(VAR9, 2);
        else if (VAR22->VAR34 == VAR35)
            FUN15(VAR9, 1);
        else
            FUN15(VAR9, -1);
        if (VAR22->VAR76 == VAR87)
            VAR86 = "";
        else
            VAR86 = VAR85 ? VAR85->VAR88 : NULL;
        if (VAR86)
        {
            VAR8 *VAR54;
            VAR52 *VAR53;
            int VAR51;
            if (FUN17(&VAR54) < 0)
                return FUN18(VAR55);
            FUN16(VAR54, VAR86);
            VAR51 = FUN20(VAR54, &VAR53);
            FUN15(VAR9, VAR51 / 2);
            FUN21(VAR9, VAR53, VAR51);
            FUN22(&VAR53);
        }
        else
            FUN15(VAR9, 0);
        FUN15(VAR9, 0);
        if (VAR22->VAR34 == VAR66)
        {
            FUN15(VAR9, 2);
            FUN15(VAR9, VAR22->VAR89);
        }
        else
        {
            FUN15(VAR9, 4);
            FUN9(VAR9, VAR22->VAR89);
        }
        if (!VAR22->VAR89)
            return -1;
    }
    FUN14(VAR9, VAR25);
    VAR24 = FUN11(VAR9);
    VAR12 = VAR24 - VAR23;
    if (VAR6->VAR39)
    {
        VAR12 += 8 + 30 + VAR90;
        FUN26(VAR9, VAR23 - 10 - 30, VAR75);
        FUN15(VAR9, VAR12);
        FUN26(VAR9, VAR23 - 2 - 30, VAR75);
        FUN15(VAR9, VAR12);
        VAR12 -= 8 + 30 + VAR90;
    }
    VAR12 += 24 + 6;
    FUN26(VAR9, VAR23 - 14, VAR75);
    FUN8(VAR9, VAR12);
    FUN26(VAR9, VAR24, VAR75);
    VAR6->VAR91 = VAR24;
    FUN7(VAR9, &VAR92);
    FUN8(VAR9, VAR4);
    FUN7(VAR9, &VAR42);
    FUN8(VAR9, VAR6->VAR43);
    FUN10(VAR9, 1);
    FUN10(VAR9, 1);
    return 0;
}