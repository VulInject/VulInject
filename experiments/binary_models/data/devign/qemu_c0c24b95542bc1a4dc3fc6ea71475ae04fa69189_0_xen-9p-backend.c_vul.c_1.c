static int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR2);
    VAR6 *VAR7 = &VAR5->VAR8;
    VAR9 *VAR10;
    if (FUN3(&VAR5->VAR2, "", &VAR5->VAR11) == -1 || VAR5->VAR11 > VAR12 || VAR5->VAR11 < 1)
    {
        return -1;
    }
    VAR5->VAR13 = FUN4(VAR5->VAR11 * sizeof(VAR14));
    for (VAR3 = 0; VAR3 < VAR5->VAR11; VAR3++)
    {
        char *VAR15;
        int VAR16;
        VAR5->VAR13[VAR3].VAR17 = VAR5;
        VAR5->VAR13[VAR3].VAR18 = -1;
        VAR5->VAR13[VAR3].VAR19 = -1;
        VAR15 = FUN5("", VAR3);
        if (FUN3(&VAR5->VAR2, VAR15, &VAR5->VAR13[VAR3].VAR20) == -1)
        {
            goto VAR21;
        }
        VAR15 = FUN5("", VAR3);
        if (FUN3(&VAR5->VAR2, VAR15, &VAR5->VAR13[VAR3].VAR18) == -1)
        {
            goto VAR21;
        }
        VAR5->VAR13[VAR3].VAR22 = FUN6(VAR5->VAR2.VAR23, VAR5->VAR2.VAR24, VAR5->VAR13[VAR3].VAR20, VAR25 | VAR26);
        if (!VAR5->VAR13[VAR3].VAR22)
        {
            goto VAR21;
        }
        VAR16 = VAR5->VAR13[VAR3].VAR22->VAR16;
        if (VAR16 > VAR27)
        {
            goto VAR21;
        }
        VAR5->VAR13[VAR3].VAR16 = VAR16;
        VAR5->VAR13[VAR3].VAR28 = FUN7(VAR5->VAR2.VAR23, (1 << VAR16), VAR5->VAR2.VAR24, VAR5->VAR13[VAR3].VAR22->VAR20, VAR25 | VAR26);
        if (!VAR5->VAR13[VAR3].VAR28)
        {
            goto VAR21;
        }
        VAR5->VAR13[VAR3].VAR29.VAR30 = VAR5->VAR13[VAR3].VAR28;
        VAR5->VAR13[VAR3].VAR29.VAR21 = VAR5->VAR13[VAR3].VAR28 + FUN8(VAR16);
        VAR5->VAR13[VAR3].VAR31 = FUN9(VAR32, &VAR5->VAR13[VAR3]);
        VAR5->VAR13[VAR3].VAR33 = 0;
        VAR5->VAR13[VAR3].VAR34 = 0;
        VAR5->VAR13[VAR3].VAR35 = false;
        VAR5->VAR13[VAR3].VAR36 = FUN10(NULL, 0);
        if (VAR5->VAR13[VAR3].VAR36 == NULL)
        {
            goto VAR21;
        }
        FUN11(FUN12(VAR5->VAR13[VAR3].VAR36), VAR37, VAR38);
        VAR5->VAR13[VAR3].VAR19 = FUN13(VAR5->VAR13[VAR3].VAR36, VAR2->VAR24, VAR5->VAR13[VAR3].VAR18);
        if (VAR5->VAR13[VAR3].VAR19 == -1)
        {
            FUN14(VAR2, 0, "", VAR5->VAR13[VAR3].VAR18);
            goto VAR21;
        }
        FUN14(VAR2, 2, "", VAR2->VAR19);
        FUN15(FUN12(VAR5->VAR13[VAR3].VAR36), VAR39, NULL, &VAR5->VAR13[VAR3]);
    }
    VAR5->VAR40 = FUN16(VAR2, "");
    VAR5->VAR41 = FUN16(VAR2, "");
    VAR5->VAR42 = VAR7->VAR43.VAR44 = FUN5("", VAR2->VAR45);
    VAR5->VAR46 = VAR7->VAR43.VAR46 = FUN17(VAR2, "");
    FUN18(VAR7, &VAR47);
    VAR10 = FUN19(FUN20(""), VAR7->VAR43.VAR46, 1, NULL);
    FUN21(VAR10, "", "", NULL);
    FUN21(VAR10, "", VAR5->VAR41, NULL);
    FUN21(VAR10, "", VAR5->VAR40, NULL);
    FUN22(VAR10, VAR7->VAR43.VAR44);
    FUN23(VAR10);
    FUN24(VAR7, NULL);
    return 0;
VAR21:
    FUN25(VAR2);
    return -1;