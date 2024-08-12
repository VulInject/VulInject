static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    int64_t VAR17, VAR18, VAR19, VAR20;
    VAR21 *VAR22 = NULL;
    if (VAR2->VAR23 > VAR24)
    {
        FUN2(VAR2, VAR25, "", VAR24);
        return -1;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR23; VAR9++)
    {
        VAR2->VAR26[VAR9]->VAR5 = FUN3(sizeof(VAR27));
        if (!VAR2->VAR26[VAR9]->VAR5)
            return FUN4(VAR28);
    }
    VAR4->VAR29 = 0;
    VAR17 = FUN5(VAR2, VAR7, "", "");
    FUN6(VAR7, "");
    FUN7(VAR7, 14 * 4);
    VAR8 = 0;
    VAR16 = NULL;
    for (VAR9 = 0; VAR9 < VAR2->VAR23; VAR9++)
    {
        VAR15 *VAR30 = VAR2->VAR26[VAR9]->VAR30;
        VAR8 += VAR30->VAR31;
        if (VAR30->VAR32 == VAR33)
            VAR16 = VAR30;
    }
    VAR11 = 0;
    if (VAR16)
        FUN7(VAR7, (VAR34)(FUN8(1000000) * VAR16->VAR35.VAR36 / VAR16->VAR35.VAR37));
    else
        FUN7(VAR7, 0);
    FUN7(VAR7, VAR8 / 8);
    FUN7(VAR7, 0);
    if (!VAR7->VAR38)
        FUN7(VAR7, VAR39 | VAR40);
    else
        FUN7(VAR7, VAR39 | VAR41 | VAR40);
    VAR4->VAR42 = FUN9(VAR7);
    FUN7(VAR7, VAR11);
    FUN7(VAR7, 0);
    FUN7(VAR7, VAR2->VAR23);
    FUN7(VAR7, 1024 * 1024);
    if (VAR16)
    {
        FUN7(VAR7, VAR16->VAR43);
        FUN7(VAR7, VAR16->VAR44);
    }
    else
    {
        FUN7(VAR7, 0);
        FUN7(VAR7, 0);
    }
    FUN7(VAR7, 0);
    FUN7(VAR7, 0);
    FUN7(VAR7, 0);
    FUN7(VAR7, 0);
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        VAR45 *VAR46 = VAR2->VAR26[VAR10];
        VAR15 *VAR47 = VAR46->VAR30;
        VAR27 *VAR48 = VAR46->VAR5;
        VAR18 = FUN10(VAR7, "");
        FUN6(VAR7, "");
        VAR19 = FUN10(VAR7, "");
        switch (VAR47->VAR32)
        {
        case VAR49:
            if (VAR47->VAR50 != VAR51)
            {
                FUN2(VAR2, VAR25, "");
                return VAR52;
            }
        case VAR33:
            FUN6(VAR7, "");
            break;
        case VAR53:
            FUN6(VAR7, "");
            break;
        case VAR54:
            FUN6(VAR7, "");
            break;
        }
        if (VAR47->VAR32 == VAR33 || VAR47->VAR50 == VAR51)
            FUN7(VAR7, VAR47->VAR55);
        else
            FUN7(VAR7, 1);
        FUN7(VAR7, 0);
        FUN11(VAR7, 0);
        FUN11(VAR7, 0);
        FUN7(VAR7, 0);
        FUN12(VAR47, &VAR12, &VAR13, &VAR14);
        FUN7(VAR7, VAR14);
        FUN7(VAR7, VAR12);
        FUN13(VAR46, 64, VAR14, VAR12);
        FUN7(VAR7, 0);
        VAR48->VAR56 = FUN9(VAR7);
        if (!VAR7->VAR38)
            FUN7(VAR7, VAR57);
        else
            FUN7(VAR7, 0);
        if (VAR47->VAR32 == VAR33)
            FUN7(VAR7, 1024 * 1024);
        else if (VAR47->VAR32 == VAR53)
            FUN7(VAR7, 12 * 1024);
        else
            FUN7(VAR7, 0);
        FUN7(VAR7, -1);
        FUN7(VAR7, VAR13);
        FUN7(VAR7, 0);
        FUN11(VAR7, VAR47->VAR43);
        FUN11(VAR7, VAR47->VAR44);
        FUN14(VAR7, VAR19);
        if (VAR47->VAR32 != VAR54)
        {
            VAR20 = FUN10(VAR7, "");
            switch (VAR47->VAR32)
            {
            case VAR49:
                if (VAR47->VAR50 != VAR51)
                    break;
            case VAR33:
                FUN15(VAR7, VAR47, VAR58, 0);
                break;
            case VAR53:
                if (FUN16(VAR7, VAR47) < 0)
                    return -1;
                break;
            default:
                return -1;
            }
            FUN14(VAR7, VAR20);
            if ((VAR22 = FUN17(VAR46->VAR59, "", NULL, 0)))
            {
                FUN18(VAR2->VAR7, "", VAR22->VAR60);
                VAR22 = NULL;
            }
        }
        if (VAR7->VAR38)
        {
            unsigned char VAR61[5];
            int VAR62;
            VAR48->VAR63.VAR64 = VAR48->VAR63.VAR65 = 0;
            VAR48->VAR63.VAR66 = FUN10(VAR7, "");
            FUN11(VAR7, 4);
            FUN19(VAR7, 0);
            FUN19(VAR7, 0);
            FUN7(VAR7, 0);
            FUN6(VAR7, FUN20(VAR61, VAR10, VAR47->VAR32));
            FUN21(VAR7, 0);
            for (VAR62 = 0; VAR62 < VAR67 * 2; VAR62++)
                FUN21(VAR7, 0);
            FUN14(VAR7, VAR48->VAR63.VAR66);
        }
        if (VAR47->VAR32 == VAR33 && VAR46->VAR68.VAR36 > 0 && VAR46->VAR68.VAR37 > 0)
        {
            int VAR69 = FUN10(VAR7, "");
            AVRational VAR70 = FUN22(VAR46->VAR68, (VAR71){VAR47->VAR43, VAR47->VAR44});
            int VAR36, VAR37;
            FUN23(&VAR36, &VAR37, VAR70.VAR36, VAR70.VAR37, 0xFFFF);
            FUN7(VAR7, 0);
            FUN7(VAR7, 0);
            FUN7(VAR7, FUN24(1.0 / FUN25(VAR47->VAR35)));
            FUN7(VAR7, VAR47->VAR43);
            FUN7(VAR7, VAR47->VAR44);
            FUN11(VAR7, VAR37);
            FUN11(VAR7, VAR36);
            FUN7(VAR7, VAR47->VAR43);
            FUN7(VAR7, VAR47->VAR44);
            FUN7(VAR7, 1);
            FUN7(VAR7, VAR47->VAR44);
            FUN7(VAR7, VAR47->VAR43);
            FUN7(VAR7, VAR47->VAR44);
            FUN7(VAR7, VAR47->VAR43);
            FUN7(VAR7, 0);
            FUN7(VAR7, 0);
            FUN7(VAR7, 0);
            FUN7(VAR7, 0);
            FUN14(VAR7, VAR69);
        }
        FUN14(VAR7, VAR18);
    }
    if (VAR7->VAR38)
    {
        VAR4->VAR72 = FUN10(VAR7, "");
        FUN6(VAR7, "");
        FUN6(VAR7, "");
        FUN7(VAR7, 248);
        for (VAR10 = 0; VAR10 < 248; VAR10 += 4)
            FUN7(VAR7, 0);
        FUN14(VAR7, VAR4->VAR72);
    }
    FUN14(VAR7, VAR17);
    FUN26(VAR2);
    VAR18 = FUN10(VAR7, "");
    for (VAR10 = 0; VAR10 < 1016; VAR10 += 4)
        FUN7(VAR7, 0);
    FUN14(VAR7, VAR18);
    VAR4->VAR73 = FUN10(VAR7, "");
    FUN6(VAR7, "");
    FUN27(VAR7);
    return 0;
}