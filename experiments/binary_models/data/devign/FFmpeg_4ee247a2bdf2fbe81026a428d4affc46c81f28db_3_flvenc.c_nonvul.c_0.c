static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL, *VAR10 = NULL;
    int VAR11, VAR12 = 0;
    double VAR13 = 0.0;
    int64_t VAR14, VAR15, VAR16;
    VAR17 *VAR18 = NULL;
    for (VAR11 = 0; VAR11 < VAR2->VAR19; VAR11++)
    {
        VAR8 *VAR20 = VAR2->VAR21[VAR11]->VAR22;
        if (VAR20->VAR23 == VAR24)
        {
            if (VAR2->VAR21[VAR11]->VAR25.VAR26 && VAR2->VAR21[VAR11]->VAR25.VAR27)
            {
                VAR13 = FUN2(VAR2->VAR21[VAR11]->VAR25);
            }
            else
            {
                VAR13 = 1 / FUN2(VAR2->VAR21[VAR11]->VAR22->VAR28);
            }
            VAR10 = VAR20;
            if (VAR20->VAR29 == 0)
            {
                FUN3(VAR20, VAR30, "");
                return -1;
            }
        }
        else
        {
            VAR9 = VAR20;
            if (FUN4(VAR20) < 0)
                return -1;
        }
        FUN5(VAR2->VAR21[VAR11], 32, 1, 1000);
    }
    FUN6(VAR4, "", 3);
    FUN7(VAR4, 1);
    FUN7(VAR4, VAR31 * !!VAR9 + VAR32 * !!VAR10);
    FUN8(VAR4, 9);
    FUN8(VAR4, 0);
    for (VAR11 = 0; VAR11 < VAR2->VAR19; VAR11++)
    {
        if (VAR2->VAR21[VAR11]->VAR22->VAR29 == 5)
        {
            FUN7(VAR4, 8);
            FUN9(VAR4, 0);
            FUN9(VAR4, 0);
            FUN8(VAR4, 0);
            FUN8(VAR4, 11);
            VAR6->VAR33 = 5;
        }
    }
    VAR6->VAR34 = -1;
    FUN7(VAR4, 18);
    VAR14 = FUN10(VAR4);
    FUN9(VAR4, 0);
    FUN9(VAR4, 0);
    FUN8(VAR4, 0);
    FUN7(VAR4, VAR35);
    FUN11(VAR4, "");
    FUN7(VAR4, VAR36);
    VAR16 = FUN10(VAR4);
    VAR12 = 5 * !!VAR10 + 5 * !!VAR9 + 2;
    FUN8(VAR4, VAR12);
    FUN11(VAR4, "");
    VAR6->VAR37 = FUN10(VAR4);
    FUN12(VAR4, VAR2->VAR38 / VAR39);
    if (VAR10)
    {
        FUN11(VAR4, "");
        FUN12(VAR4, VAR10->VAR40);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR10->VAR41);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR10->VAR42 / 1024.0);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR13);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR10->VAR29);
    }
    if (VAR9)
    {
        FUN11(VAR4, "");
        FUN12(VAR4, VAR9->VAR42 / 1024.0);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR9->VAR43);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR9->VAR44 == VAR45 ? 8 : 16);
        FUN11(VAR4, "");
        FUN13(VAR4, VAR9->VAR46 == 2);
        FUN11(VAR4, "");
        FUN12(VAR4, VAR9->VAR29);
    }
    while ((VAR18 = FUN14(VAR2->VAR47, "", VAR18, VAR48)))
    {
        FUN11(VAR4, VAR18->VAR49);
        FUN7(VAR4, VAR35);
        FUN11(VAR4, VAR18->VAR50);
        VAR12++;
    }
    FUN11(VAR4, "");
    VAR6->VAR51 = FUN10(VAR4);
    FUN12(VAR4, 0);
    FUN11(VAR4, "");
    FUN7(VAR4, VAR52);
    VAR15 = FUN10(VAR4) - VAR14 - 10;
    FUN15(VAR4, VAR16, VAR53);
    FUN8(VAR4, VAR12);
    FUN15(VAR4, VAR14, VAR53);
    FUN9(VAR4, VAR15);
    FUN16(VAR4, VAR15 + 10 - 3);
    FUN8(VAR4, VAR15 + 11);
    for (VAR11 = 0; VAR11 < VAR2->VAR19; VAR11++)
    {
        VAR8 *VAR20 = VAR2->VAR21[VAR11]->VAR22;
        if (VAR20->VAR44 == VAR54 || VAR20->VAR44 == VAR55)
        {
            int64_t VAR56;
            FUN7(VAR4, VAR20->VAR23 == VAR24 ? VAR57 : VAR58);
            FUN9(VAR4, 0);
            FUN9(VAR4, 0);
            FUN7(VAR4, 0);
            FUN9(VAR4, 0);
            VAR56 = FUN10(VAR4);
            if (VAR20->VAR44 == VAR54)
            {
                FUN7(VAR4, FUN4(VAR20));
                FUN7(VAR4, 0);
                FUN6(VAR4, VAR20->VAR59, VAR20->VAR60);
            }
            else
            {
                FUN7(VAR4, VAR20->VAR29 | VAR61);
                FUN7(VAR4, 0);
                FUN9(VAR4, 0);
                FUN17(VAR4, VAR20->VAR59, VAR20->VAR60);
            }
            VAR15 = FUN10(VAR4) - VAR56;
            FUN15(VAR4, -VAR15 - 10, VAR62);
            FUN9(VAR4, VAR15);
            FUN16(VAR4, VAR15 + 10 - 3);
            FUN8(VAR4, VAR15 + 11);
        }
    }
    return 0;
}