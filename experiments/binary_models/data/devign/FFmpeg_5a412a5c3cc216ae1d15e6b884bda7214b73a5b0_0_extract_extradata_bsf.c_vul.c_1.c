static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int *VAR7)
{
    static const int VAR8[] = {
        VAR9,
        VAR10,
        VAR11,
    };
    static const int VAR12[] = {
        VAR13,
        VAR14,
    };
    VAR15 *VAR16 = VAR2->VAR17;
    H2645Packet VAR18 = {0};
    int VAR19 = 0;
    const int *VAR20;
    int VAR21;
    int VAR22, VAR23 = 0, VAR24 = 0, VAR25 = 0;
    if (VAR2->VAR26->VAR27 == VAR28)
    {
        VAR20 = VAR8;
        VAR21 = FUN2(VAR8);
    }
    else
    {
        VAR20 = VAR12;
        VAR21 = FUN2(VAR12);
    }
    VAR25 = FUN3(&VAR18, VAR4->VAR6, VAR4->VAR7, VAR2, 0, 0, VAR2->VAR26->VAR27, 1);
    if (VAR25 < 0)
        return VAR25;
    for (VAR22 = 0; VAR22 < VAR18.VAR29; VAR22++)
    {
        VAR30 *VAR31 = &VAR18.VAR32[VAR22];
        if (FUN4(VAR20, VAR21, VAR31->VAR33))
        {
            VAR19 += VAR31->VAR34 + 3;
            if (VAR2->VAR26->VAR27 == VAR28)
            {
                if (VAR31->VAR33 == VAR10)
                    VAR23 = 1;
                if (VAR31->VAR33 == VAR9)
                    VAR24 = 1;
            }
            else
            {
                if (VAR31->VAR33 == VAR13)
                    VAR23 = 1;
            }
        }
    }
    if (VAR19 && ((VAR2->VAR26->VAR27 == VAR28 && VAR23 && VAR24) || (VAR2->VAR26->VAR27 == VAR35 && VAR23)))
    {
        VAR36 *VAR37;
        VAR5 *VAR38, *VAR39;
        if (VAR16->remove)
        {
            VAR37 = FUN5(VAR4->VAR7 + VAR40);
            if (!VAR37)
            {
                VAR25 = FUN6(VAR41);
                goto VAR42;
            }
            VAR39 = VAR37->VAR6;
        }
        VAR38 = FUN7(VAR19 + VAR40);
        if (!VAR38)
        {
            FUN8(&VAR37);
            VAR25 = FUN6(VAR41);
            goto VAR42;
        }
        *VAR6 = VAR38;
        *VAR7 = VAR19;
        for (VAR22 = 0; VAR22 < VAR18.VAR29; VAR22++)
        {
            VAR30 *VAR31 = &VAR18.VAR32[VAR22];
            if (FUN4(VAR20, VAR21, VAR31->VAR33))
            {
                FUN9(VAR38, 1);
                memcpy(VAR38 + 3, VAR31->VAR43, VAR31->VAR34);
                VAR38 += 3 + VAR31->VAR34;
            }
            else if (VAR16->remove)
            {
                FUN9(VAR39, 1);
                memcpy(VAR39 + 3, VAR31->VAR43, VAR31->VAR34);
                VAR39 += 3 + VAR31->VAR34;
            }
        }
        if (VAR16->remove)
        {
            FUN8(&VAR4->VAR44);
            VAR4->VAR44 = VAR37;
            VAR4->VAR6 = VAR37->VAR6;
            VAR4->VAR7 = VAR39 - VAR37->VAR6;
        }
    }
VAR42:
    FUN10(&VAR18);
    return VAR25;
}