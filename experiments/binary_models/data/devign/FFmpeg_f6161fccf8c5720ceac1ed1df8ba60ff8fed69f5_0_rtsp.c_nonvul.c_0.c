static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, int VAR7, int64_t VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR3 *VAR12;
    int VAR13, VAR14, VAR15, VAR16 = 0;
    struct VAR17 *VAR18 = VAR10->VAR18;
    int *VAR19 = NULL, VAR20, VAR21;
    if (!VAR18)
    {
        VAR18 = VAR10->VAR18 = FUN2(2 * (VAR10->VAR22 + 1), sizeof(struct VAR17));
        if (!VAR18)
            return FUN3(VAR23);
        if (VAR10->VAR24)
        {
            VAR18[VAR10->VAR25].VAR26 = FUN4(VAR10->VAR24);
            VAR18[VAR10->VAR25++].VAR27 = VAR28;
        }
        for (VAR14 = 0; VAR14 < VAR10->VAR22; VAR14++)
        {
            VAR12 = VAR10->VAR29[VAR14];
            if (VAR12->VAR30)
            {
                if (VAR15 = FUN5(VAR12->VAR30, &VAR19, &VAR20))
                {
                    FUN6(VAR2, VAR31, "");
                    return VAR15;
                }
                if (VAR20 != 2)
                {
                    FUN6(VAR2, VAR31, "", VAR20);
                    return VAR32;
                }
                for (VAR21 = 0; VAR21 < VAR20; VAR21++)
                {
                    VAR18[VAR10->VAR25].VAR26 = VAR19[VAR21];
                    VAR18[VAR10->VAR25++].VAR27 = VAR28;
                }
                FUN7(VAR19);
            }
        }
    }
    for (;;)
    {
        if (FUN8(&VAR2->VAR33))
            return VAR34;
        if (VAR8 && VAR8 - FUN9() < 0)
            return FUN3(VAR35);
        VAR13 = FUN10(VAR18, VAR10->VAR25, VAR36);
        if (VAR13 > 0)
        {
            int VAR37 = VAR10->VAR24 ? 1 : 0;
            VAR16 = 0;
            for (VAR14 = 0; VAR14 < VAR10->VAR22; VAR14++)
            {
                VAR12 = VAR10->VAR29[VAR14];
                if (VAR12->VAR30)
                {
                    if (VAR18[VAR37].VAR38 & VAR28 || VAR18[VAR37 + 1].VAR38 & VAR28)
                    {
                        VAR15 = FUN11(VAR12->VAR30, VAR6, VAR7);
                        if (VAR15 > 0)
                        {
                            *VAR4 = VAR12;
                            return VAR15;
                        }
                    }
                    VAR37 += 2;
                }
            }
            if (VAR10->VAR24 && VAR18[0].VAR38 & VAR28)
            {
                if ((VAR15 = FUN12(VAR2)) < 0)
                {
                    return VAR15;
                }
            }
        }
        else if (VAR13 == 0 && ++VAR16 >= VAR39)
        {
            return FUN3(VAR40);
        }
        else if (VAR13 < 0 && VAR41 != VAR42)
            return FUN3(VAR41);
    }
}