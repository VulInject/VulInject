static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    unsigned int VAR7;
    unsigned int VAR8;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    unsigned char *VAR13;
    int VAR14;
    int VAR15 = -1;
    VAR16 *VAR17;
    VAR11->VAR18 = 0;
    VAR11->VAR19 = NULL;
    VAR11->VAR20 = 0;
    VAR11->VAR21 = 1.0;
    FUN2(VAR6, 12, VAR22);
    FUN3();
    VAR9 = VAR8 - 4;
    if (VAR7 != VAR23 || VAR9 < 0)
        return VAR24;
    VAR13 = FUN4(VAR9);
    if (!VAR13)
        return FUN5(VAR25);
    if (FUN6(VAR6, VAR13, VAR9) != VAR9)
        return FUN5(VAR26);
    for (VAR14 = 0; VAR14 < VAR9 - 8; VAR14++)
    {
        VAR7 = FUN7(&VAR13[VAR14]);
        VAR8 = FUN7(&VAR13[VAR14 + 4]);
        if (VAR7 == VAR27)
        {
            VAR11->VAR21 = FUN8(FUN7(&VAR13[VAR14 + 12]));
        }
        else if (VAR7 == VAR28)
        {
            if (VAR8 != VAR29)
            {
                FUN9(VAR13);
                return VAR24;
            }
            VAR11->VAR30 = FUN7(&VAR13[VAR14 + 36]);
            VAR11->VAR31 = FUN7(&VAR13[VAR14 + 40]);
            VAR17 = FUN10(VAR2, 0);
            if (!VAR17)
                return FUN5(VAR25);
            FUN11(VAR17, 60, 1, VAR11->VAR21);
            VAR11->VAR32 = VAR17->VAR33;
            VAR17->VAR34->VAR35 = VAR36;
            VAR17->VAR34->VAR37 = VAR38;
            VAR17->VAR34->VAR39 = 4;
            VAR17->VAR34->VAR40 = FUN4(4);
            FUN12(VAR17->VAR34->VAR40, FUN7(&VAR13[VAR14 + 16]));
            VAR17->VAR34->VAR30 = VAR11->VAR30;
            VAR17->VAR34->VAR31 = VAR11->VAR31;
            VAR14 += 8 + VAR8;
        }
        else if (VAR7 == VAR41)
        {
            if (VAR8 != VAR42)
            {
                FUN9(VAR13);
                return VAR24;
            }
            VAR15 = FUN7(&VAR13[VAR14 + 8]);
            if (VAR15 + 1 > VAR11->VAR18)
            {
                VAR11->VAR18 = VAR15 + 1;
                if ((unsigned)VAR11->VAR18 >= VAR43 / sizeof(VAR44))
                    return -1;
                VAR11->VAR19 = FUN13(VAR11->VAR19, VAR11->VAR18 * sizeof(VAR44));
                if (!VAR11->VAR19)
                {
                    FUN9(VAR13);
                    return FUN5(VAR25);
                }
            }
            VAR11->VAR19[VAR15].VAR45 = FUN7(&VAR13[VAR14 + 12]);
            VAR11->VAR19[VAR15].VAR46 = FUN7(&VAR13[VAR14 + 36]);
            VAR11->VAR19[VAR15].VAR47 = FUN7(&VAR13[VAR14 + 40]);
            VAR11->VAR19[VAR15].VAR48 = FUN7(&VAR13[VAR14 + 44]);
            VAR14 += 8 + VAR8;
            VAR17 = FUN10(VAR2, VAR15);
            if (!VAR17)
                return FUN5(VAR25);
            FUN11(VAR17, 60, 1, VAR11->VAR19[VAR15].VAR47);
            VAR11->VAR19[VAR15].VAR49 = VAR17->VAR33;
            VAR17->VAR34->VAR35 = VAR50;
            VAR17->VAR34->VAR51 = 0;
            VAR17->VAR34->VAR46 = VAR11->VAR19[VAR15].VAR46;
            VAR17->VAR34->VAR47 = VAR11->VAR19[VAR15].VAR47;
            VAR17->VAR34->VAR52 = VAR11->VAR19[VAR15].VAR48;
            VAR17->VAR34->VAR53 = VAR17->VAR34->VAR46 * VAR17->VAR34->VAR47 * VAR17->VAR34->VAR52;
            VAR17->VAR34->VAR54 = VAR17->VAR34->VAR46 * VAR17->VAR34->VAR52;
            if (VAR11->VAR19[VAR15].VAR45)
                VAR17->VAR34->VAR37 = VAR55;
            else if (VAR17->VAR34->VAR52 == 8)
                VAR17->VAR34->VAR37 = VAR56;
            else
                VAR17->VAR34->VAR37 = VAR57;
        }
    }
    FUN9(VAR13);
    FUN3();
    if (VAR7 != VAR58)
        return VAR24;
    VAR11->VAR59 = -1;
    VAR11->VAR60 = 0;
    return 0;
}