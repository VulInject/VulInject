static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL;
    int VAR12, VAR13 = 0;
    double VAR14 = 0.0;
    int64_t VAR15, VAR16, VAR17;
    VAR18 *VAR19 = NULL;
    for (VAR12 = 0; VAR12 < VAR2->VAR20; VAR12++)
    {
        VAR8 *VAR21 = VAR2->VAR22[VAR12]->VAR23;
        VAR24 *VAR25;
        switch (VAR21->VAR26)
        {
        case VAR27:
            if (VAR2->VAR22[VAR12]->VAR28.VAR29 && VAR2->VAR22[VAR12]->VAR28.VAR30)
            {
                VAR14 = FUN2(VAR2->VAR22[VAR12]->VAR28);
            }
            else
            {
                VAR14 = 1 / FUN2(VAR2->VAR22[VAR12]->VAR23->VAR31);
            }
            VAR10 = VAR21;
            if (VAR21->VAR32 == 0)
            {
                FUN3(VAR2, VAR33, "");
                return -1;
            }
            break;
        case VAR34:
            VAR9 = VAR21;
            if (FUN4(VAR2, VAR21) < 0)
                return VAR35;
            break;
        case VAR36:
            if (VAR21->VAR37 != VAR38)
            {
                FUN3(VAR2, VAR33, "");
                return VAR35;
            }
            VAR11 = VAR21;
            break;
        default:
            FUN3(VAR2, VAR33, "");
            return -1;
        }
        FUN5(VAR2->VAR22[VAR12], 32, 1, 1000);
        VAR25 = FUN6(sizeof(VAR24));
        if (!VAR25)
            return FUN7(VAR39);
        VAR2->VAR22[VAR12]->VAR7 = VAR25;
        VAR25->VAR40 = -1;
    }
    VAR6->VAR41 = VAR42;
    FUN8(VAR4, "", 3);
    FUN9(VAR4, 1);
    FUN9(VAR4, VAR43 * !!VAR9 + VAR44 * !!VAR10);
    FUN10(VAR4, 9);
    FUN10(VAR4, 0);
    for (VAR12 = 0; VAR12 < VAR2->VAR20; VAR12++)
        if (VAR2->VAR22[VAR12]->VAR23->VAR32 == 5)
        {
            FUN9(VAR4, 8);
            FUN11(VAR4, 0);
            FUN11(VAR4, 0);
            FUN10(VAR4, 0);
            FUN10(VAR4, 11);
            VAR6->VAR45 = 5;
        }
    FUN9(VAR4, 18);
    VAR15 = FUN12(VAR4);
    FUN11(VAR4, 0);
    FUN11(VAR4, 0);
    FUN10(VAR4, 0);
    FUN9(VAR4, VAR46);
    FUN13(VAR4, "");
    FUN9(VAR4, VAR47);
    VAR17 = FUN12(VAR4);
    VAR13 = 5 * !!VAR10 + 5 * !!VAR9 + 1 * !!VAR11 + 2;
    FUN10(VAR4, VAR13);
    FUN13(VAR4, "");
    VAR6->VAR48 = FUN12(VAR4);
    FUN14(VAR4, VAR2->VAR49 / VAR50);
    if (VAR10)
    {
        FUN13(VAR4, "");
        FUN14(VAR4, VAR10->VAR51);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR10->VAR52);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR10->VAR53 / 1024.0);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR14);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR10->VAR32);
    }
    if (VAR9)
    {
        FUN13(VAR4, "");
        FUN14(VAR4, VAR9->VAR53 / 1024.0);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR9->VAR54);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR9->VAR37 == VAR55 ? 8 : 16);
        FUN13(VAR4, "");
        FUN15(VAR4, VAR9->VAR56 == 2);
        FUN13(VAR4, "");
        FUN14(VAR4, VAR9->VAR32);
    }
    if (VAR11)
    {
        FUN13(VAR4, "");
        FUN14(VAR4, 0.0);
    }
    while ((VAR19 = FUN16(VAR2->VAR57, "", VAR19, VAR58)))
    {
        FUN13(VAR4, VAR19->VAR59);
        FUN9(VAR4, VAR46);
        FUN13(VAR4, VAR19->VAR60);
        VAR13++;
    }
    FUN13(VAR4, "");
    VAR6->VAR61 = FUN12(VAR4);
    FUN14(VAR4, 0);
    FUN13(VAR4, "");
    FUN9(VAR4, VAR62);
    VAR16 = FUN12(VAR4) - VAR15 - 10;
    FUN17(VAR4, VAR17, VAR63);
    FUN10(VAR4, VAR13);
    FUN17(VAR4, VAR15, VAR63);
    FUN11(VAR4, VAR16);
    FUN18(VAR4, VAR16 + 10 - 3);
    FUN10(VAR4, VAR16 + 11);
    for (VAR12 = 0; VAR12 < VAR2->VAR20; VAR12++)
    {
        VAR8 *VAR21 = VAR2->VAR22[VAR12]->VAR23;
        if (VAR21->VAR37 == VAR64 || VAR21->VAR37 == VAR65)
        {
            int64_t VAR66;
            FUN9(VAR4, VAR21->VAR26 == VAR27 ? VAR67 : VAR68);
            FUN11(VAR4, 0);
            FUN11(VAR4, 0);
            FUN9(VAR4, 0);
            FUN11(VAR4, 0);
            VAR66 = FUN12(VAR4);
            if (VAR21->VAR37 == VAR64)
            {
                FUN9(VAR4, FUN4(VAR2, VAR21));
                FUN9(VAR4, 0);
                FUN8(VAR4, VAR21->VAR69, VAR21->VAR70);
            }
            else
            {
                FUN9(VAR4, VAR21->VAR32 | VAR71);
                FUN9(VAR4, 0);
                FUN11(VAR4, 0);
                FUN19(VAR4, VAR21->VAR69, VAR21->VAR70);
            }
            VAR16 = FUN12(VAR4) - VAR66;
            FUN17(VAR4, -VAR16 - 10, VAR72);
            FUN11(VAR4, VAR16);
            FUN18(VAR4, VAR16 + 10 - 3);
            FUN10(VAR4, VAR16 + 11);
        }
    }
    return 0;
}