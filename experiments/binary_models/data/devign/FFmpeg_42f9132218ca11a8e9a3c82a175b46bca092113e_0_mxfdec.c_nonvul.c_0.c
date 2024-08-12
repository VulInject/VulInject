static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[VAR3];
    int64_t VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    int64_t VAR13;
    int VAR14;
    VAR15 *VAR16;
    if (VAR11->VAR17 <= 0)
    {
        if (!VAR2->VAR18)
            return VAR19;
        if (VAR4 < 0)
            VAR4 = 0;
        VAR9 = FUN2(VAR4, VAR7->VAR20.VAR21, VAR7->VAR20.VAR22);
        VAR13 = FUN3(VAR2->VAR23, (VAR2->VAR18 * VAR9) >> 3, VAR24);
        if (VAR13 < 0)
            return VAR13;
        FUN4(VAR2, VAR7, VAR4);
        VAR11->VAR25 = VAR4;
    }
    else
    {
        VAR16 = &VAR11->VAR26[0];
        VAR4 = FUN5(VAR4, 0);
        if (VAR16->VAR27)
        {
            if ((VAR4 = FUN6(VAR16->VAR27, VAR16->VAR28, VAR4, VAR5)) < 0)
                return VAR4;
        }
        else
        {
            VAR4 = FUN7(VAR4, VAR7->VAR29 - 1);
        }
        if ((VAR14 = FUN8(VAR11, VAR16, VAR4, &VAR4, &VAR13, 1)) << 0)
            return VAR14;
        FUN4(VAR2, VAR7, VAR4);
        VAR11->VAR25 = VAR4;
        FUN3(VAR2->VAR23, VAR13, VAR24);
    }
    return 0;
}