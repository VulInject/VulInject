static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    GetBitContext VAR20;
    if (VAR9 == 0)
        return 0;
    FUN2(&VAR20, VAR8, VAR9 * 8);
    VAR12->VAR21 = 16 * (FUN3(&VAR20, 4) + 1);
    VAR12->VAR22 = FUN3(&VAR20, 12);
    VAR12->VAR23 = 16 * (FUN3(&VAR20, 4) + 1);
    VAR12->VAR24 = FUN3(&VAR20, 12);
    VAR14 = VAR12->VAR22 / VAR12->VAR21;
    VAR16 = VAR12->VAR22 % VAR12->VAR21;
    VAR15 = VAR12->VAR24 / VAR12->VAR23;
    VAR17 = VAR12->VAR24 % VAR12->VAR23;
    if (VAR12->VAR25 < VAR12->VAR21 * VAR12->VAR23)
    {
        if (VAR12->VAR26 != NULL)
            FUN4(VAR12->VAR26);
        if ((VAR12->VAR26 = FUN5(3 * VAR12->VAR21 * VAR12->VAR23)) == NULL)
        {
            FUN6(VAR2, VAR27, "");
        }
    }
    VAR12->VAR25 = VAR12->VAR21 * VAR12->VAR23;
    if ((VAR2->VAR28 == 0) && (VAR2->VAR29 == 0))
    {
        VAR2->VAR28 = VAR12->VAR22;
        VAR2->VAR29 = VAR12->VAR24;
    }
    if ((VAR2->VAR28 != VAR12->VAR22) || (VAR2->VAR29 != VAR12->VAR24))
    {
        FUN6(VAR2, VAR27, "");
        FUN6(VAR2, VAR27, "", VAR2->VAR29, VAR2->VAR28, VAR12->VAR24, VAR12->VAR22);
    }
    FUN6(VAR2, VAR30, "", VAR12->VAR22, VAR12->VAR24, VAR12->VAR21, VAR12->VAR23, VAR14, VAR15, VAR16, VAR17);
    VAR12->VAR31.VAR32 = 1;
    VAR12->VAR31.VAR33 = VAR34 | VAR35 | VAR36;
    if (VAR2->FUN7(VAR2, &VAR12->VAR31) < 0)
    {
        FUN6(VAR2, VAR27, "");
    }
    for (VAR19 = 0; VAR19 < VAR15 + (VAR17 ? 1 : 0); VAR19++)
    {
        int VAR37 = VAR19 * VAR12->VAR23;
        int VAR38 = (VAR19 < VAR15) ? VAR12->VAR23 : VAR17;
        for (VAR18 = 0; VAR18 < VAR14 + (VAR16 ? 1 : 0); VAR18++)
        {
            int VAR39 = VAR18 * VAR12->VAR21;
            int VAR40 = (VAR18 < VAR14) ? VAR12->VAR21 : VAR16;
            int VAR10 = FUN3(&VAR20, 16);
            if (8 * VAR10 > FUN8(&VAR20))
            {
                VAR2->FUN9(VAR2, &VAR12->VAR31);
                VAR12->VAR31.VAR3[0] = NULL;
            }
            if (VAR10 == 0)
            {
            }
            else
            {
                int VAR41 = FUN10(&(VAR12->VAR42));
                if (VAR41 != VAR43)
                {
                    FUN6(VAR2, VAR27, "", VAR18, VAR19);
                }
                VAR12->VAR42.VAR44 = VAR8 + (FUN11(&VAR20) / 8);
                VAR12->VAR42.VAR45 = VAR10;
                VAR12->VAR42.VAR46 = VAR12->VAR26;
                VAR12->VAR42.VAR47 = VAR12->VAR25 * 3;
                VAR41 = FUN12(&(VAR12->VAR42), VAR48);
                if (VAR41 == VAR49)
                {
                    FUN6(VAR2, VAR27, "");
                    FUN13(&(VAR12->VAR42));
                    VAR41 = FUN12(&(VAR12->VAR42), VAR48);
                }
                if ((VAR41 != VAR43) && (VAR41 != VAR50))
                {
                    FUN6(VAR2, VAR27, "", VAR18, VAR19, VAR41);
                }
                FUN14(VAR12->VAR26, VAR12->VAR31.VAR3[0], VAR12->VAR24 - (VAR37 + VAR38 + 1), VAR39, VAR38, VAR40, VAR12->VAR31.VAR51[0]);
                FUN15(&VAR20, 8 * VAR10);
            }
        }
    }
    *VAR4 = sizeof(VAR52);
    *(VAR52 *)VAR3 = VAR12->VAR31;
    if ((FUN11(&VAR20) / 8) != VAR9)
        FUN6(VAR2, VAR27, "", VAR9, (FUN11(&VAR20) / 8));
    return VAR9;