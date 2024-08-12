static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    unsigned VAR21;
    VAR5 *VAR22;
    const VAR23 *VAR24;
    VAR25 *VAR26;
    FUN2(&VAR9->VAR27, VAR6, VAR7);
    VAR11 = FUN3(&VAR9->VAR27, 3);
    if (VAR11 != 0)
        return -1;
    FUN4(&VAR9->VAR27, 5);
    FUN3(&VAR9->VAR27, 4);
    FUN3(&VAR9->VAR27, 1);
    FUN4(&VAR9->VAR27, 3);
    FUN3(&VAR9->VAR27, 8);
    VAR12 = FUN3(&VAR9->VAR27, 1);
    if (FUN3(&VAR9->VAR27, 1) != 0)
        return -1;
    FUN4(&VAR9->VAR27, 11);
    VAR13 = FUN3(&VAR9->VAR27, 3);
    FUN3(&VAR9->VAR27, 1);
    FUN4(&VAR9->VAR27, 4);
    FUN3(&VAR9->VAR27, 3);
    FUN3(&VAR9->VAR27, 1);
    FUN4(&VAR9->VAR27, 4);
    FUN3(&VAR9->VAR27, 3);
    FUN3(&VAR9->VAR27, 1);
    FUN4(&VAR9->VAR27, 4);
    FUN3(&VAR9->VAR27, 3);
    VAR17 = 720;
    if (VAR12)
    {
        VAR2->VAR28 = 25 * VAR29;
        VAR20 = VAR30;
        VAR18 = 576;
        VAR15 = 12;
    }
    else
    {
        VAR2->VAR28 = 30 * VAR29;
        VAR20 = VAR31;
        VAR18 = 480;
        VAR15 = 10;
    }
    if (VAR7 < VAR20)
        return -1;
    VAR9->VAR32 = !VAR12;
    if (VAR9->VAR32)
    {
        VAR24 = VAR33;
        VAR2->VAR34 = VAR35;
    }
    else
    {
        VAR24 = VAR36;
        VAR2->VAR34 = VAR37;
    }
    VAR2->VAR17 = VAR17;
    VAR2->VAR18 = VAR18;
    if (VAR2->VAR38 & VAR39)
    {
        VAR9->VAR17 = -1;
        VAR2->VAR40[0] = VAR2->VAR40[1] = VAR2->VAR40[2] = 0;
        if (VAR2->FUN5(VAR2, VAR17, VAR18, VAR41) < 0 && VAR2->VAR38 & VAR39)
        {
            fprintf(VAR42, "");
            return -1;
        }
    }
    if (VAR9->VAR17 != VAR17 || VAR9->VAR18 != VAR18)
    {
        if (!(VAR2->VAR38 & VAR39))
            for (VAR19 = 0; VAR19 < 3; VAR19++)
            {
                if (VAR2->VAR40[VAR19] != VAR9->VAR43[VAR19])
                    FUN6(&VAR9->VAR43[VAR19]);
                VAR2->VAR40[VAR19] = 0;
            }
        for (VAR19 = 0; VAR19 < 3; VAR19++)
        {
            if (VAR2->VAR40[VAR19])
            {
                VAR9->VAR43[VAR19] = VAR2->VAR40[VAR19];
                VAR9->VAR44[VAR19] = (VAR19 == 0) ? VAR2->VAR45 : VAR2->VAR46;
            }
            else
            {
                VAR21 = VAR17 * VAR18;
                VAR9->VAR44[VAR19] = VAR17;
                if (VAR19 >= 1)
                {
                    VAR21 >>= 2;
                    VAR9->VAR44[VAR19] >>= VAR9->VAR32 ? 2 : 1;
                }
                VAR9->VAR43[VAR19] = FUN7(VAR21);
            }
            if (!VAR9->VAR43[VAR19])
                return -1;
        }
        VAR9->VAR17 = VAR17;
        VAR9->VAR18 = VAR18;
    }
    VAR22 = VAR6;
    for (VAR14 = 0; VAR14 < VAR15; VAR14++)
    {
        VAR22 += 6 * 80;
        for (VAR16 = 0; VAR16 < 27; VAR16++)
        {
            if ((VAR16 % 3) == 0)
            {
                VAR22 += 80;
            }
            FUN8(VAR9, VAR22, VAR24);
            VAR22 += 5 * 80;
            VAR24 += 5;
        }
    }
    FUN9();
    *VAR4 = sizeof(VAR25);
    VAR26 = VAR3;
    for (VAR19 = 0; VAR19 < 3; VAR19++)
    {
        VAR26->VAR3[VAR19] = VAR9->VAR43[VAR19];
        VAR26->VAR44[VAR19] = VAR9->VAR44[VAR19];
    }
    return VAR20;
}