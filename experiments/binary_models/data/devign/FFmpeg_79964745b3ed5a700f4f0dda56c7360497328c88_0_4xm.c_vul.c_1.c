static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    unsigned int VAR7;
    unsigned int VAR8;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    unsigned char *VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17;
    VAR11->VAR18 = 0;
    VAR11->VAR19 = NULL;
    VAR11->VAR20 = 1.0;
    FUN2(VAR6, 12);
    FUN3();
    VAR9 = VAR8 - 4;
    if (VAR7 != VAR21 || VAR9 < 0)
        return VAR22;
    VAR13 = FUN4(VAR9);
    if (!VAR13)
        return FUN5(VAR23);
    if (FUN6(VAR6, VAR13, VAR9) != VAR9)
    {
        FUN7(VAR13);
        return FUN5(VAR24);
    }
    for (VAR14 = 0; VAR14 < VAR9 - 8; VAR14++)
    {
        VAR7 = FUN8(&VAR13[VAR14]);
        VAR8 = FUN8(&VAR13[VAR14 + 4]);
        if (VAR7 == VAR25)
        {
            VAR11->VAR20 = FUN9(FUN8(&VAR13[VAR14 + 12]));
        }
        else if (VAR7 == VAR26)
        {
            if (VAR8 != VAR27)
            {
                VAR15 = VAR22;
                goto VAR28;
            }
            VAR11->VAR29 = FUN8(&VAR13[VAR14 + 36]);
            VAR11->VAR30 = FUN8(&VAR13[VAR14 + 40]);
            VAR17 = FUN10(VAR2, 0);
            if (!VAR17)
            {
                VAR15 = FUN5(VAR23);
                goto VAR28;
            }
            FUN11(VAR17, 60, 1, VAR11->VAR20);
            VAR11->VAR31 = VAR17->VAR32;
            VAR17->VAR33->VAR34 = VAR35;
            VAR17->VAR33->VAR36 = VAR37;
            VAR17->VAR33->VAR38 = 4;
            VAR17->VAR33->VAR39 = FUN4(4);
            FUN12(VAR17->VAR33->VAR39, FUN8(&VAR13[VAR14 + 16]));
            VAR17->VAR33->VAR29 = VAR11->VAR29;
            VAR17->VAR33->VAR30 = VAR11->VAR30;
            VAR14 += 8 + VAR8;
        }
        else if (VAR7 == VAR40)
        {
            int VAR41;
            if (VAR8 != VAR42)
            {
                VAR15 = VAR22;
                goto VAR28;
            }
            VAR41 = FUN8(&VAR13[VAR14 + 8]);
            if ((unsigned)VAR41 >= VAR43 / sizeof(VAR44) - 1)
            {
                FUN13(VAR2, VAR45, "");
                VAR15 = -1;
                goto VAR28;
            }
            if (VAR41 + 1 > VAR11->VAR18)
            {
                VAR11->VAR18 = VAR41 + 1;
                VAR11->VAR19 = FUN14(VAR11->VAR19, VAR11->VAR18 * sizeof(VAR44));
                if (!VAR11->VAR19)
                {
                    VAR15 = FUN5(VAR23);
                    goto VAR28;
                }
            }
            VAR11->VAR19[VAR41].VAR46 = FUN8(&VAR13[VAR14 + 12]);
            VAR11->VAR19[VAR41].VAR47 = FUN8(&VAR13[VAR14 + 36]);
            VAR11->VAR19[VAR41].VAR48 = FUN8(&VAR13[VAR14 + 40]);
            VAR11->VAR19[VAR41].VAR49 = FUN8(&VAR13[VAR14 + 44]);
            VAR11->VAR19[VAR41].VAR50 = 0;
            if (VAR11->VAR19[VAR41].VAR47 <= 0 || VAR11->VAR19[VAR41].VAR48 <= 0 || VAR11->VAR19[VAR41].VAR49 < 0)
            {
                FUN13(VAR2, VAR45, "");
                VAR15 = -1;
                goto VAR28;
            }
            VAR14 += 8 + VAR8;
            VAR17 = FUN10(VAR2, VAR41);
            if (!VAR17)
            {
                VAR15 = FUN5(VAR23);
                goto VAR28;
            }
            FUN11(VAR17, 60, 1, VAR11->VAR19[VAR41].VAR48);
            VAR11->VAR19[VAR41].VAR51 = VAR17->VAR32;
            VAR17->VAR33->VAR34 = VAR52;
            VAR17->VAR33->VAR53 = 0;
            VAR17->VAR33->VAR47 = VAR11->VAR19[VAR41].VAR47;
            VAR17->VAR33->VAR48 = VAR11->VAR19[VAR41].VAR48;
            VAR17->VAR33->VAR54 = VAR11->VAR19[VAR41].VAR49;
            VAR17->VAR33->VAR55 = VAR17->VAR33->VAR47 * VAR17->VAR33->VAR48 * VAR17->VAR33->VAR54;
            VAR17->VAR33->VAR56 = VAR17->VAR33->VAR47 * VAR17->VAR33->VAR54;
            if (VAR11->VAR19[VAR41].VAR46)
            {
                VAR17->VAR33->VAR36 = VAR57;
            }
            else if (VAR17->VAR33->VAR54 == 8)
            {
                VAR17->VAR33->VAR36 = VAR58;
            }
            else
                VAR17->VAR33->VAR36 = VAR59;
        }
    }
    FUN3();
    if (VAR7 != VAR60)
    {
        VAR15 = VAR22;
        goto VAR28;
    }
    FUN7(VAR13);
    VAR11->VAR61 = -1;
    return 0;
VAR28:
    FUN15(&VAR11->VAR19);
    FUN7(VAR13);
    return VAR15;
}