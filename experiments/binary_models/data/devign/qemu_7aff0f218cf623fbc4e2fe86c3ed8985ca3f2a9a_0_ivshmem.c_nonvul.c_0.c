static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6;
    if (VAR4->VAR7 == NULL)
        VAR4->VAR8 = 4 << 20;
    else
    {
        VAR4->VAR8 = FUN3(VAR4);
    }
    FUN4(&VAR4->VAR2.VAR9, "", 0, 0, VAR10, VAR11, VAR2);
    if (FUN5(VAR4, VAR12) && !FUN5(VAR4, VAR13))
    {
        fprintf(VAR14, "");
        FUN6(1);
    }
    if (VAR4->VAR15)
    {
        if (FUN7(VAR4->VAR15, "", 5) == 0)
        {
            VAR4->VAR16 = VAR17;
        }
        else if (FUN7(VAR4->VAR15, "", 7) == 0)
        {
            VAR4->VAR16 = VAR18;
        }
        else
        {
            fprintf(VAR14, "");
            FUN6(1);
        }
    }
    else
    {
        VAR4->VAR16 = VAR18;
    }
    if (VAR4->VAR16 == VAR17)
    {
        FUN8(&VAR4->VAR2.VAR9, "", VAR4);
    }
    VAR6 = VAR4->VAR2.VAR19;
    VAR6[VAR20] = VAR21 | VAR22;
    FUN9(VAR6, 1);
    VAR4->VAR23 = 0;
    VAR4->VAR24 = 0;
    VAR4->VAR25 = 0;
    VAR4->VAR26 = FUN10(VAR27, VAR28, VAR4, VAR29);
    FUN11(&VAR4->VAR2, 0, VAR30, VAR31, VAR32);
    if ((VAR4->VAR33 != NULL) && (FUN7(VAR4->VAR33->VAR34, "", 5) == 0))
    {
        if (VAR4->VAR35 != NULL)
        {
            fprintf(VAR14, ""
                            "");
        }
        FUN12("", VAR4->VAR33->VAR34);
        if (FUN5(VAR4, VAR13))
        {
            FUN13(VAR4);
        }
        VAR4->VAR36 = 16;
        VAR4->VAR37 = -1;
        VAR4->VAR38 = FUN14(VAR4->VAR36 * sizeof(VAR39));
        FUN11(&VAR4->VAR2, 2, VAR4->VAR8, VAR31, VAR40);
        VAR4->VAR41 = FUN14(VAR4->VAR42 * sizeof(VAR43 *));
        FUN15(VAR4->VAR33, VAR44, VAR45, VAR46, VAR4);
    }
    else
    {
        int VAR47;
        if (VAR4->VAR35 == NULL)
        {
            fprintf(VAR14, "");
        }
        FUN12("", VAR4->VAR35);
        if ((VAR47 = FUN16(VAR4->VAR35, VAR48 | VAR49 | VAR50, VAR51 | VAR52 | VAR53)) > 0)
        {
            if (FUN17(VAR47, VAR4->VAR8) != 0)
            {
                fprintf(VAR14, "");
            }
        }
        else if ((VAR47 = FUN16(VAR4->VAR35, VAR48 | VAR49, VAR51 | VAR52 | VAR53)) < 0)
        {
            fprintf(VAR14, "");
            FUN6(-1);
        }
        if (FUN18(VAR4, VAR47) == -1)
        {
            FUN6(-1);
        }
        FUN19(VAR4, VAR47);
    }
    return 0;
}