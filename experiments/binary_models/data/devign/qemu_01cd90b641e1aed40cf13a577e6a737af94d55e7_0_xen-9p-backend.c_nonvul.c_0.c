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
            FUN6(VAR15);
            goto VAR21;
        }
        FUN6(VAR15);
        VAR15 = FUN5("", VAR3);
        if (FUN3(&VAR5->VAR2, VAR15, &VAR5->VAR13[VAR3].VAR18) == -1)
        {
            FUN6(VAR15);
            goto VAR21;
        }
        FUN6(VAR15);
        VAR5->VAR13[VAR3].VAR22 = FUN7(VAR5->VAR2.VAR23, VAR5->VAR2.VAR24, VAR5->VAR13[VAR3].VAR20, VAR25 | VAR26);
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
        VAR5->VAR13[VAR3].VAR28 = FUN8(VAR5->VAR2.VAR23, (1 << VAR16), VAR5->VAR2.VAR24, VAR5->VAR13[VAR3].VAR22->VAR20, VAR25 | VAR26);
        if (!VAR5->VAR13[VAR3].VAR28)
        {
            goto VAR21;
        }
        VAR5->VAR13[VAR3].VAR29.VAR30 = VAR5->VAR13[VAR3].VAR28;
        VAR5->VAR13[VAR3].VAR29.VAR21 = VAR5->VAR13[VAR3].VAR28 + FUN9(VAR16);
        VAR5->VAR13[VAR3].VAR31 = FUN10(VAR32, &VAR5->VAR13[VAR3]);
        VAR5->VAR13[VAR3].VAR33 = 0;
        VAR5->VAR13[VAR3].VAR34 = 0;
        VAR5->VAR13[VAR3].VAR35 = false;
        VAR5->VAR13[VAR3].VAR36 = FUN11(NULL, 0);
        if (VAR5->VAR13[VAR3].VAR36 == NULL)
        {
            goto VAR21;
        }
        FUN12(FUN13(VAR5->VAR13[VAR3].VAR36));
        VAR5->VAR13[VAR3].VAR19 = FUN14(VAR5->VAR13[VAR3].VAR36, VAR2->VAR24, VAR5->VAR13[VAR3].VAR18);
        if (VAR5->VAR13[VAR3].VAR19 == -1)
        {
            FUN15(VAR2, 0, "", VAR5->VAR13[VAR3].VAR18);
            goto VAR21;
        }
        FUN15(VAR2, 2, "", VAR2->VAR19);
        FUN16(FUN13(VAR5->VAR13[VAR3].VAR36), VAR37, NULL, &VAR5->VAR13[VAR3]);
    }
    VAR5->VAR38 = FUN17(VAR2, "");
    VAR5->VAR39 = FUN17(VAR2, "");
    VAR5->VAR40 = VAR7->VAR41.VAR42 = FUN5("", VAR2->VAR43);
    VAR5->VAR44 = VAR7->VAR41.VAR44 = FUN18(VAR2, "");
    FUN19(VAR7, &VAR45);
    VAR10 = FUN20(FUN21(""), VAR7->VAR41.VAR44, 1, NULL);
    FUN22(VAR10, "", "", NULL);
    FUN22(VAR10, "", VAR5->VAR39, NULL);
    FUN22(VAR10, "", VAR5->VAR38, NULL);
    FUN23(VAR10, VAR7->VAR41.VAR42);
    FUN24(VAR10);
    FUN25(VAR7, NULL);
    return 0;
VAR21:
    FUN26(VAR2);
    return -1;
}