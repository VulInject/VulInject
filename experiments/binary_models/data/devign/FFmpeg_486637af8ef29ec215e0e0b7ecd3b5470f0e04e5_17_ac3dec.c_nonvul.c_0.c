static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR13;
    int VAR14;
    VAR15 *VAR16 = (VAR15 *)VAR3;
    int VAR17, VAR18, VAR19, VAR20;
    VAR14 = FUN2(VAR6, VAR7);
    if (VAR14 == -1)
    {
        FUN3(VAR2, VAR21, "");
        *VAR4 = 0;
        return VAR7;
    }
    FUN4(&(VAR9->VAR22), VAR6 + VAR14, (VAR7 - VAR14) * 8);
    if (!FUN5(VAR9))
    {
        FUN3(VAR2, VAR21, "");
        *VAR4 = 0;
        return VAR7;
    }
    FUN6(VAR9);
    VAR2->VAR23 = VAR9->VAR24.VAR25;
    VAR2->VAR26 = VAR9->VAR24.VAR26;
    if (VAR2->VAR27 == 0)
    {
        VAR9->VAR28 |= VAR29;
        VAR2->VAR27 = VAR9->VAR30.VAR31;
    }
    else if ((VAR9->VAR30.VAR31 + ((VAR9->VAR30.VAR32 & VAR33) ? 1 : 0)) < VAR2->VAR27)
    {
        FUN3(VAR2, VAR34, "", VAR2->VAR27, (VAR9->VAR30.VAR31 + ((VAR9->VAR30.VAR32 & VAR33) ? 1 : 0)));
        VAR2->VAR27 = VAR9->VAR30.VAR31;
        VAR9->VAR28 |= VAR29;
    }
    else if (VAR2->VAR27 == 1)
    {
        VAR9->VAR28 |= VAR35;
    }
    else if (VAR2->VAR27 == 2)
    {
        if (VAR9->VAR30.VAR36 == 0x02)
            VAR9->VAR28 |= VAR37;
        else
            VAR9->VAR28 |= VAR38;
    }
    if (VAR9->VAR30.VAR32 & VAR33)
    {
        VAR2->VAR27++;
        VAR9->VAR28 |= VAR39;
    }
    FUN3(VAR2, VAR34, "", VAR2->VAR27, VAR2->VAR26 * 1000, VAR2->VAR23);
    for (VAR17 = 0; VAR17 < VAR40; VAR17++)
    {
        if (FUN7(VAR9, VAR17))
        {
            FUN3(VAR2, VAR21, "");
            *VAR4 = 0;
            return VAR9->VAR24.VAR41;
        }
        VAR18 = ((VAR9->VAR28 & VAR39) ? 0 : 1);
        for (; VAR18 < VAR2->VAR27; VAR18++)
        {
            for (VAR19 = 0; VAR19 < VAR42; VAR19++)
            {
                VAR20 = FUN8(VAR12->VAR28[VAR18][VAR19]);
                *(VAR16++) = VAR20;
            }
        }
    }
    *VAR4 = VAR40 * VAR42 * VAR2->VAR27 * sizeof(VAR15);
    return VAR9->VAR24.VAR41;
}