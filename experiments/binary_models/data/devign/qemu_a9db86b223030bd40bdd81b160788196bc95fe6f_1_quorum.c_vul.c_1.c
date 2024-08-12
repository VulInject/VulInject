static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR6 *VAR11 = NULL;
    VAR12 *VAR13;
    bool *VAR14;
    VAR3 *VAR15 = NULL;
    VAR16 *VAR17 = NULL;
    const VAR18 *VAR19;
    int VAR20;
    int VAR21 = 0;
    FUN2(VAR4);
    FUN3(VAR4, &VAR15, "");
    FUN4(VAR15, &VAR17);
    if (FUN5(VAR15))
    {
        FUN6(&VAR11, "", FUN7(VAR15)->VAR22);
        VAR21 = -VAR23;
        goto VAR24;
    }
    VAR9->VAR25 = FUN8(VAR17);
    if (VAR9->VAR25 < 2)
    {
        FUN6(&VAR11, "");
        VAR21 = -VAR23;
        goto VAR24;
    }
    VAR13 = FUN9(&VAR26, NULL, 0, &VAR27);
    FUN10(VAR13, VAR4, &VAR11);
    if (VAR11)
    {
        VAR21 = -VAR23;
        goto VAR24;
    }
    VAR9->VAR28 = FUN11(VAR13, VAR29, 0);
    VAR21 = FUN12(VAR9->VAR28, VAR9->VAR25, &VAR11);
    if (VAR21 < 0)
    {
        goto VAR24;
    }
    if (FUN13(VAR13, VAR30, false) && VAR9->VAR25 == 2 && VAR9->VAR28 == 2)
    {
        VAR9->VAR31 = true;
    }
    else if (FUN13(VAR13, VAR30, false))
    {
        fprintf(VAR32, ""
                        "");
    }
    VAR9->VAR33 = FUN13(VAR13, VAR34, false);
    if (VAR9->VAR33 && VAR9->VAR31)
    {
        FUN6(&VAR11, "");
        VAR21 = -VAR23;
        goto VAR24;
    }
    VAR9->VAR2 = FUN14(VAR1 *, VAR9->VAR25);
    VAR14 = FUN14(bool, VAR9->VAR25);
    for (VAR20 = 0, VAR19 = FUN15(VAR17); VAR19; VAR19 = FUN16(VAR19), VAR20++)
    {
        VAR3 *VAR35;
        VAR36 *VAR37;
        switch (FUN17(VAR19->VAR38))
        {
        case VAR39:
            VAR35 = FUN18(VAR19->VAR38);
            FUN19(VAR35);
            VAR21 = FUN20(&VAR9->VAR2[VAR20], NULL, NULL, VAR35, VAR5, NULL, &VAR11);
            break;
        case VAR40:
            VAR37 = FUN21(VAR19->VAR38);
            VAR21 = FUN20(&VAR9->VAR2[VAR20], NULL, FUN22(VAR37), NULL, VAR5, NULL, &VAR11);
            break;
        default:
            FUN6(&VAR11, ""
                                   "",
                       VAR20);
            VAR21 = -VAR23;
        }
        if (VAR21 < 0)
        {
            goto VAR41;
        }
        VAR14[VAR20] = true;
    }
    FUN23(VAR14);
    goto VAR24;
VAR41:
    for (VAR20 = 0; VAR20 < VAR9->VAR25; VAR20++)
    {
        if (!VAR14[VAR20])
        {
            continue;
        }
        FUN24(VAR9->VAR2[VAR20]);
    }
    FUN23(VAR9->VAR2);
    FUN23(VAR14);
VAR24:
    if (VAR11)
    {
        FUN25(VAR7, VAR11);
    }
    FUN26(VAR17);
    FUN26(VAR15);
    return VAR21;
}