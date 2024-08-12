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
    VAR19 = FUN4(VAR2->VAR27);
    VAR25 = 0;
    for (VAR13 = 0; VAR13 < VAR2->VAR30; VAR13++)
    {
        VAR21 = VAR2->VAR31[VAR13]->VAR32;
        FUN5(VAR2->VAR31[VAR13], 32, 1, 1000);
        VAR25 += VAR21->VAR25;
    }
    if (VAR6->VAR33)
    {
        FUN6(VAR2, 0x4824, 0, 0xc00);
    }
    FUN7(VAR9, &VAR34);
    FUN8(VAR9, -1);
    FUN9(VAR9, 3 + VAR18 + !!VAR19 + VAR2->VAR30);
    FUN10(VAR9, 1);
    FUN10(VAR9, 2);
    VAR22 = FUN11(VAR9);
    VAR24 = FUN12(VAR9, &VAR35);
    FUN7(VAR9, &VAR36);
    FUN8(VAR9, VAR3);
    VAR17 = 0;
    FUN8(VAR9, FUN13(VAR17));
    FUN8(VAR9, VAR6->VAR37);
    FUN8(VAR9, VAR26);
    FUN8(VAR9, VAR6->VAR26);
    FUN8(VAR9, VAR29);
    FUN9(VAR9, (VAR6->VAR33 || !VAR9->VAR38) ? 3 : 2);
    FUN9(VAR9, VAR2->VAR39);
    FUN9(VAR9, VAR2->VAR39);
    FUN9(VAR9, VAR25);
    FUN14(VAR9, VAR24);
    VAR24 = FUN12(VAR9, &VAR40);
    FUN7(VAR9, &VAR41);
    FUN9(VAR9, 6);
    FUN15(VAR9, 0);
    FUN14(VAR9, VAR24);
    if (VAR18)
    {
        int VAR42;
        VAR43 *VAR44;
        VAR8 *VAR45;
        if (FUN16(&VAR45) < 0)
            return FUN17(VAR46);
        VAR24 = FUN12(VAR9, &VAR47);
        for (VAR13 = 0; VAR13 < FUN18(VAR11); VAR13++)
        {
            VAR42 = VAR11[VAR13] ? FUN19(VAR45, VAR11[VAR13]->VAR48) : 0;
            FUN15(VAR9, VAR42);
        }
        VAR42 = FUN20(VAR45, &VAR44);
        FUN21(VAR9, VAR44, VAR42);
        FUN22(&VAR44);
        FUN14(VAR9, VAR24);
    }
    if (VAR19)
    {
        VAR10 *VAR49 = NULL;
        VAR24 = FUN12(VAR9, &VAR50);
        FUN15(VAR9, VAR19);
        while ((VAR49 = FUN3(VAR2->VAR27, "", VAR49, VAR51)))
        {
            FUN23(VAR9, VAR49->VAR52);
            FUN15(VAR9, 0);
            FUN23(VAR9, VAR49->VAR48);
        }
        FUN14(VAR9, VAR24);
    }
    if (!VAR6->VAR33 && VAR2->VAR53)
    {
        int VAR54;
        if (VAR54 = FUN24(VAR2))
            return VAR54;
    }
    for (VAR13 = 0; VAR13 < VAR2->VAR30; VAR13++)
    {
        int64_t VAR55;
        VAR21 = VAR2->VAR31[VAR13]->VAR32;
        VAR6->VAR31[VAR13].VAR56 = VAR13 + 1;
        VAR6->VAR31[VAR13].VAR57 = 0;
        switch (VAR21->VAR58)
        {
        case VAR59:
            VAR16 = 0;
            VAR14 = 18 + VAR16;
            VAR15 = 8;
            break;
        default:
        case VAR60:
            VAR16 = VAR21->VAR61;
            VAR14 = 0x33 + VAR16;
            VAR15 = 0;
            break;
        }
        VAR24 = FUN12(VAR9, &VAR62);
        if (VAR21->VAR58 == VAR59)
        {
            FUN7(VAR9, &VAR63);
            FUN7(VAR9, &VAR64);
        }
        else
        {
            FUN7(VAR9, &VAR65);
            FUN7(VAR9, &VAR66);
        }
        FUN8(VAR9, 0);
        VAR55 = FUN11(VAR9);
        FUN9(VAR9, VAR14);
        FUN9(VAR9, VAR15);
        FUN15(VAR9, VAR13 + 1);
        FUN9(VAR9, 0);
        if (VAR21->VAR58 == VAR59)
        {
            int VAR67 = FUN25(VAR2, VAR9, VAR21);
            if (VAR67 < 0)
                return -1;
            if (VAR67 != VAR14)
            {
                VAR23 = FUN11(VAR9);
                FUN26(VAR9, VAR55, VAR68);
                FUN9(VAR9, VAR67);
                FUN26(VAR9, VAR23, VAR68);
            }
            FUN10(VAR9, 0x01);
            if (VAR21->VAR69 == VAR70 || !VAR21->VAR71)
            {
                FUN15(VAR9, 0x0190);
                FUN15(VAR9, 0x0190);
            }
            else
            {
                FUN15(VAR9, VAR21->VAR71);
                FUN15(VAR9, VAR21->VAR71);
            }
            FUN15(VAR9, 0x01);
            FUN10(VAR9, 0x00);
        }
        else
        {
            FUN9(VAR9, VAR21->VAR72);
            FUN9(VAR9, VAR21->VAR73);
            FUN10(VAR9, 2);
            FUN15(VAR9, 40 + VAR21->VAR61);
            FUN27(VAR9, VAR21, VAR74, 1);
        }
        FUN14(VAR9, VAR24);
    }
    VAR24 = FUN12(VAR9, &VAR75);
    FUN7(VAR9, &VAR76);
    FUN9(VAR9, VAR2->VAR30);
    for (VAR13 = 0; VAR13 < VAR2->VAR30; VAR13++)
    {
        const VAR77 *VAR78;
        const char *VAR79;
        VAR21 = VAR2->VAR31[VAR13]->VAR32;
        VAR78 = FUN28(VAR21->VAR69);
        if (VAR21->VAR58 == VAR59)
            FUN15(VAR9, 2);
        else if (VAR21->VAR58 == VAR60)
            FUN15(VAR9, 1);
        else
            FUN15(VAR9, -1);
        if (VAR21->VAR69 == VAR80)
            VAR79 = "";
        else
            VAR79 = VAR78 ? VAR78->VAR81 : NULL;
        if (VAR79)
        {
            VAR8 *VAR45;
            VAR43 *VAR44;
            int VAR42;
            if (FUN16(&VAR45) < 0)
                return FUN17(VAR46);
            FUN19(VAR45, VAR79);
            VAR42 = FUN20(VAR45, &VAR44);
            FUN15(VAR9, VAR42 / 2);
            FUN21(VAR9, VAR44, VAR42);
            FUN22(&VAR44);
        }
        else
            FUN15(VAR9, 0);
        FUN15(VAR9, 0);
        if (VAR21->VAR58 == VAR59)
        {
            FUN15(VAR9, 2);
            FUN15(VAR9, VAR21->VAR82);
        }
        else
        {
            FUN15(VAR9, 4);
            FUN9(VAR9, VAR21->VAR82);
        }
        if (!VAR21->VAR82)
            return -1;
    }
    FUN14(VAR9, VAR24);
    VAR23 = FUN11(VAR9);
    VAR12 = VAR23 - VAR22;
    if (VAR6->VAR33)
    {
        VAR12 += 8 + 30 + VAR83;
        FUN26(VAR9, VAR22 - 10 - 30, VAR68);
        FUN15(VAR9, VAR12);
        FUN26(VAR9, VAR22 - 2 - 30, VAR68);
        FUN15(VAR9, VAR12);
        VAR12 -= 8 + 30 + VAR83;
    }
    VAR12 += 24 + 6;
    FUN26(VAR9, VAR22 - 14, VAR68);
    FUN8(VAR9, VAR12);
    FUN26(VAR9, VAR23, VAR68);
    VAR6->VAR84 = VAR23;
    FUN7(VAR9, &VAR85);
    FUN8(VAR9, VAR4);
    FUN7(VAR9, &VAR36);
    FUN8(VAR9, VAR6->VAR37);
    FUN10(VAR9, 1);
    FUN10(VAR9, 1);
    return 0;
}