static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    int VAR12, VAR13, VAR14;
    for (VAR12 = VAR6->VAR12; VAR12 > VAR2->VAR15; VAR12 -= VAR2->VAR15)
        ;
    if (!VAR12)
    {
        *VAR4 = 0;
        return 0;
    }
    FUN2(&VAR8->VAR11, VAR6->VAR3, VAR12 << 3);
    if (VAR12 == VAR2->VAR15)
    {
        if ((VAR13 = FUN3(VAR8)) < 0)
            return VAR13;
        if (VAR8->VAR16 > 0)
        {
            if (VAR8->VAR17 > 0)
            {
                int VAR18 = FUN4(VAR11);
                FUN5(&VAR8->VAR19, VAR6->VAR3, VAR12, VAR11, VAR8->VAR16);
                FUN6(&VAR8->VAR19);
                VAR8->VAR17 += VAR8->VAR16;
                if ((VAR13 = FUN7(VAR2, VAR3, VAR4)) == 0 && *VAR4 > 0)
                {
                    VAR18 += VAR8->VAR16;
                    VAR8->VAR20 = VAR18 & 7;
                    return VAR18 >> 3;
                }
                else
                    FUN8(VAR11, VAR8->VAR16 - VAR18 + FUN4(VAR11));
            }
            else
                FUN8(VAR11, VAR8->VAR16);
        }
    }
    else if (VAR8->VAR20)
        FUN9(VAR11, VAR8->VAR20);
    VAR8->VAR17 = 0;
    VAR8->VAR20 = 0;
    VAR14 = FUN10(VAR11);
    if ((VAR13 = FUN7(VAR2, VAR3, VAR4)) < 0)
    {
        return VAR13;
    }
    else if (*VAR4 > 0)
    {
        int VAR18 = FUN4(VAR11);
        VAR8->VAR20 = VAR18 & 7;
        return VAR18 >> 3;
    }
    else if ((VAR8->VAR17 = VAR14) > 0)
    {
        FUN2(VAR11, VAR6->VAR3, VAR12 << 3);
        FUN8(VAR11, (VAR12 << 3) - VAR14);
        assert(FUN10(VAR11) == VAR14);
        FUN11(&VAR8->VAR19, VAR8->VAR21, VAR22);
        FUN5(&VAR8->VAR19, VAR6->VAR3, VAR12, VAR11, VAR8->VAR17);
    }
    return VAR12;
}