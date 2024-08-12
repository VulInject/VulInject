static void FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7, VAR8, VAR9 = 0;
    VAR10 = FUN2();
    while (VAR4 > 0)
    {
        if (VAR6->VAR11 >= VAR6->VAR12)
        {
            VAR7 = FUN3(VAR6);
            if (VAR7 < 0)
            {
                VAR9 = 1;
                VAR6->VAR12 = VAR13 / VAR6->VAR14.VAR15 * VAR6->VAR14.VAR15;
            }
            else
            {
                if (VAR6->VAR16 != VAR17)
                    FUN4(VAR6, (VAR18 *)VAR6->VAR19, VAR7);
                VAR6->VAR12 = VAR7;
            }
            VAR6->VAR11 = 0;
        }
        VAR8 = VAR6->VAR12 - VAR6->VAR11;
        if (VAR8 > VAR4)
            VAR8 = VAR4;
        if (!VAR6->VAR20 && !VAR9 && VAR6->VAR21 == VAR22)
            memcpy(VAR3, (VAR23 *)VAR6->VAR19 + VAR6->VAR11, VAR8);
        else
        {
            memset(VAR3, 0, VAR8);
            if (!VAR6->VAR20 && !VAR9)
                FUN5(VAR3, (VAR23 *)VAR6->VAR19 + VAR6->VAR11, VAR8, VAR6->VAR21);
        }
        VAR4 -= VAR8;
        VAR3 += VAR8;
        VAR6->VAR11 += VAR8;
    }
    VAR6->VAR24 = VAR6->VAR12 - VAR6->VAR11;
    if (!FUN6(VAR6->VAR25))
    {
        FUN7(&VAR6->VAR26, VAR6->VAR25 - (double)(2 * VAR6->VAR27 + VAR6->VAR24) / VAR6->VAR14.VAR28, VAR6->VAR29, VAR10 / 1000000.0);
        FUN8(&VAR6->VAR30, &VAR6->VAR26);
    }
}