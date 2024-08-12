int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    if (VAR2->VAR7 == 0)
    {
        FUN2(VAR2, VAR8, "");
        return -1;
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
    {
        VAR6 = VAR2->VAR9[VAR4];
        switch (VAR6->VAR10->VAR11)
        {
        case VAR12:
            if (VAR6->VAR10->VAR13 <= 0)
            {
                FUN2(VAR2, VAR8, "");
                return -1;
            }
            if (!VAR6->VAR10->VAR14)
                VAR6->VAR10->VAR14 = VAR6->VAR10->VAR15 * FUN3(VAR6->VAR10->VAR16) >> 3;
            break;
        case VAR17:
            if (VAR6->VAR10->VAR18.VAR19 <= 0 || VAR6->VAR10->VAR18.VAR20 <= 0)
            {
                FUN2(VAR2, VAR8, "");
                return -1;
            }
            if ((VAR6->VAR10->VAR21 <= 0 || VAR6->VAR10->VAR22 <= 0) && !(VAR2->VAR23->VAR24 & VAR25))
            {
                FUN2(VAR2, VAR8, "");
                return -1;
            }
            if (FUN4(VAR6->VAR26, VAR6->VAR10->VAR26))
            {
                FUN2(VAR2, VAR8, "");
                return -1;
            }
            break;
        }
        if (VAR2->VAR23->VAR27)
        {
            if (VAR6->VAR10->VAR27)
            {
                if (!FUN5(VAR2, VAR6))
                {
                    FUN2(VAR2, VAR8, "", VAR6->VAR10->VAR27);
                    return VAR28;
                }
            }
            else
                VAR6->VAR10->VAR27 = FUN6(VAR2->VAR23->VAR27, VAR6->VAR10->VAR16);
        }
        if (VAR2->VAR23->VAR24 & VAR29 && !(VAR6->VAR10->VAR24 & VAR30))
            FUN2(VAR2, VAR31, "", VAR4);
    }
    if (!VAR2->VAR32 && VAR2->VAR23->VAR33 > 0)
    {
        VAR2->VAR32 = FUN7(VAR2->VAR23->VAR33);
        if (!VAR2->VAR32)
            return FUN8(VAR34);
    }
    FUN9(VAR2);
    if (!(VAR2->VAR9[0]->VAR10->VAR24 & VAR35))
    {
        VAR36 *VAR37;
        VAR38 *VAR39;
        if (!(VAR37 = FUN7(sizeof(VAR36))))
            return FUN8(VAR34);
        FUN10(&VAR37, "", VAR40, 0);
        FUN11(&VAR37, VAR2->VAR23->VAR41, NULL);
        if ((VAR39 = FUN12(VAR37, "", NULL, VAR42)))
            FUN10(&VAR2->VAR43, VAR39->VAR44, VAR39->VAR45, 0);
        FUN13(&VAR37);
    }
    if (VAR2->VAR23->VAR46)
    {
        VAR3 = VAR2->VAR23->FUN14(VAR2);
        if (VAR3 < 0)
            return VAR3;
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
    {
        int64_t VAR20 = VAR47;
        VAR6 = VAR2->VAR9[VAR4];
        switch (VAR6->VAR10->VAR11)
        {
        case VAR12:
            VAR20 = (VAR48)VAR6->VAR18.VAR19 * VAR6->VAR10->VAR13;
            break;
        case VAR17:
            VAR20 = (VAR48)VAR6->VAR18.VAR19 * VAR6->VAR10->VAR18.VAR20;
            break;
        default:
            break;
        }
        if (VAR20 != VAR47)
        {
            if (VAR20 <= 0)
                return VAR28;
            FUN15(&VAR6->VAR49, 0, 0, VAR20);
        }
    }
    return 0;
}