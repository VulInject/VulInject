static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    int VAR9, VAR10 = VAR2->VAR11;
    VAR3 *VAR12;
    if (!(VAR6->VAR13 & VAR14))
    {
        FUN2(VAR2->VAR7, VAR15, "");
        return FUN3(VAR16);
    }
    if (VAR4->VAR17 != VAR6->VAR18.VAR19)
    {
        FUN2(VAR2->VAR7, VAR20, "", VAR6->VAR18.VAR19, VAR4->VAR17);
        return VAR21;
    }
    if (VAR10 != VAR6->VAR18.VAR22)
    {
        FUN2(VAR2->VAR7, VAR20, "", VAR6->VAR18.VAR22, VAR10);
        return VAR21;
    }
    VAR12 = FUN4(VAR2, VAR4);
    for (VAR9 = 0; VAR9 < VAR4->VAR23; VAR9++)
    {
        int VAR24, VAR25, VAR26, VAR27;
        VAR28 *VAR29, *VAR30;
        if (VAR4->VAR31 & (1 << VAR9))
            continue;
        VAR25 = FUN5(&VAR6->VAR18, VAR4->VAR32[VAR9]);
        if (VAR25 < 0)
        {
            FUN2(VAR2->VAR7, VAR20, "", VAR4->VAR32[VAR9]);
            return VAR21;
        }
        VAR26 = 24 - VAR4->VAR33 + FUN6(VAR2, VAR4, 0, VAR9);
        if (VAR26 > 24)
        {
            FUN2(VAR2->VAR7, VAR20, "", VAR26);
            return VAR21;
        }
        VAR27 = VAR26 > 0 ? 1 << (VAR26 - 1) : 0;
        VAR29 = VAR6->VAR18.VAR34[VAR25];
        VAR30 = VAR4->VAR35[0].VAR36[VAR9];
        if (VAR12)
        {
            int VAR37 = VAR12->VAR38[VAR4->VAR39 + VAR9];
            for (VAR24 = 0; VAR24 < VAR10; VAR24++)
                VAR30[VAR24] += (VAR40)FUN7((FUN8(VAR29[VAR24], VAR37) + VAR27) >> VAR26);
        }
        else
        {
            for (VAR24 = 0; VAR24 < VAR10; VAR24++)
                VAR30[VAR24] += (VAR29[VAR24] + VAR27) >> VAR26;
        }
    }
    return 0;
}