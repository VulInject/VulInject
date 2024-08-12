static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    enum AVPixelFormat VAR11;
    int VAR12;
    int VAR13;
    VAR14 *VAR15 = VAR2->VAR16[0]->VAR17;
    enum AVPixelFormat VAR18 = VAR15->VAR19;
    int VAR20 = VAR15->VAR21;
    int VAR22 = VAR15->VAR23;
    int VAR24 = ((VAR15->VAR25 + 7) >> 3);
    int VAR26 = VAR20 * VAR24;
    int VAR27;
    if (FUN2(VAR6->VAR28, VAR29, &VAR6->VAR30) < 0)
        FUN3(VAR2, VAR31, "", FUN4(FUN5(VAR32)));
    VAR11 = FUN6(&VAR6->VAR30);
    if (VAR11 != VAR18)
    {
        FUN3(VAR2, VAR33, "", FUN7(VAR18), FUN7(VAR11));
        return FUN5(VAR34);
    }
    VAR12 = FUN8(VAR6->VAR30.VAR35, VAR22);
    VAR13 = FUN8(VAR6->VAR30.VAR36, VAR20) * VAR24;
    VAR9 = VAR4->VAR37;
    VAR10 = VAR6->VAR37 + VAR24 * VAR6->VAR30.VAR38 + VAR6->VAR30.VAR39 * VAR6->VAR40.VAR41;
    if (VAR6->VAR38)
    {
        if (VAR6->VAR38 < 0)
        {
            if (-VAR6->VAR38 >= VAR20)
                return 0;
            VAR13 += VAR6->VAR38 * VAR24;
            VAR9 -= VAR6->VAR38 * VAR24;
        }
        else
        {
            int VAR42 = (VAR20 + VAR6->VAR38) - VAR6->VAR30.VAR36;
            if (VAR42 > 0)
            {
                if (VAR42 >= VAR20)
                    return 0;
                VAR13 -= VAR42 * VAR24;
            }
            VAR10 += VAR24 * VAR6->VAR38;
        }
    }
    if (VAR6->VAR39)
    {
        if (VAR6->VAR39 < 0)
        {
            if (-VAR6->VAR39 >= VAR22)
                return 0;
            VAR12 += VAR6->VAR39;
            VAR9 -= VAR6->VAR39 * VAR26;
        }
        else
        {
            int VAR42 = (VAR22 + VAR6->VAR39) - VAR6->VAR30.VAR35;
            if (VAR42 > 0)
            {
                if (VAR42 >= VAR22)
                    return 0;
                VAR12 -= VAR42;
            }
            VAR10 += VAR6->VAR39 * VAR6->VAR40.VAR41;
        }
    }
    for (VAR27 = 0; VAR27 < VAR12; VAR27++)
    {
        memcpy(VAR10, VAR9, VAR13);
        VAR10 += VAR6->VAR40.VAR41;
        VAR9 += VAR26;
    }
    return 0;
}