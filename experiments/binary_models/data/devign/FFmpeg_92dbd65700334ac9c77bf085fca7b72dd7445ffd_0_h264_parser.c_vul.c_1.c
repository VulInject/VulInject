static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR14;
    int VAR15;
    if (!VAR11->VAR16)
    {
        VAR11->VAR16 = 1;
        if (VAR4->VAR17)
        {
            FUN2(VAR4->VAR18, VAR4->VAR17, &VAR11->VAR19, &VAR11->VAR20, &VAR11->VAR21, VAR4->VAR22, VAR4);
        }
    }
    if (VAR2->VAR23 & VAR24)
    {
        VAR15 = VAR9;
    }
    else
    {
        VAR15 = FUN3(VAR11, VAR8, VAR9, VAR4);
        if (FUN4(VAR14, VAR15, &VAR8, &VAR9) < 0)
        {
            *VAR6 = NULL;
            *VAR7 = 0;
            return VAR9;
        }
        if (VAR15 < 0 && VAR15 != VAR25)
        {
            FUN5(VAR14->VAR26 + VAR15 >= 0);
            FUN3(VAR11, &VAR14->VAR27[VAR14->VAR26 + VAR15], -VAR15, VAR4);
        }
    }
    FUN6(VAR2, VAR4, VAR8, VAR9);
    if (VAR4->VAR28.VAR29)
        VAR4->VAR30 = FUN7(FUN8(VAR4->VAR28, (VAR31){VAR4->VAR32, 1}));
    if (VAR11->VAR33.VAR34.VAR35 >= 0)
    {
        VAR2->VAR36 = VAR11->VAR33.VAR37.VAR38;
        VAR2->VAR39 = VAR11->VAR33.VAR34.VAR35;
        VAR2->VAR40 = VAR11->VAR33.VAR34.VAR41;
    }
    else
    {
        VAR2->VAR36 = VAR42;
        VAR2->VAR39 = VAR42;
        VAR2->VAR40 = VAR42;
    }
    if (VAR2->VAR23 & VAR43)
    {
        VAR2->VAR23 &= VAR24;
    }
    if (VAR2->VAR36 >= 0)
    {
        int64_t VAR44 = VAR4->VAR30.VAR44 * VAR4->VAR45.VAR29;
        if (VAR44 > 0)
        {
            int64_t VAR29 = VAR4->VAR30.VAR29 * VAR4->VAR45.VAR44;
            if (VAR2->VAR46 != VAR47)
            {
                VAR11->VAR48 = VAR2->VAR46 - FUN9(VAR2->VAR39, VAR29, VAR44);
            }
            else if (VAR11->VAR48 != VAR47)
            {
                VAR2->VAR46 = VAR11->VAR48 + FUN9(VAR2->VAR39, VAR29, VAR44);
            }
            if (VAR11->VAR48 != VAR47 && VAR2->VAR49 == VAR47)
                VAR2->VAR49 = VAR2->VAR46 + FUN9(VAR2->VAR40, VAR29, VAR44);
            if (VAR2->VAR36 > 0)
                VAR11->VAR48 = VAR2->VAR46;
        }
    }
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
}