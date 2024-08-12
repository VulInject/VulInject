static int FUN1(VAR1 *VAR2, void *VAR3, void *VAR4, unsigned VAR5, const VAR6 *VAR7, VAR6 *VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    unsigned VAR11, VAR12;
    *VAR8 = VAR13;
    for (VAR11 = 0; VAR14[VAR11].VAR15; VAR11++)
    {
        const VAR16 *VAR17 = &VAR14[VAR11];
        int VAR18;
        if (!FUN3(VAR2, VAR17))
            continue;
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            if (FUN4(VAR17->VAR15, &VAR7[VAR12]))
                break;
        }
        if (VAR12 == VAR5)
            continue;
        if (VAR10->VAR19 == VAR20)
            VAR18 = FUN5(VAR3, *VAR17->VAR15, VAR4);
        if (VAR10->VAR19 == VAR21)
            VAR18 = FUN6(VAR3, *VAR17->VAR15, VAR4);
        if (VAR18)
        {
            *VAR8 = *VAR17->VAR15;
            break;
        }
    }
    if (FUN4(VAR8, &VAR13))
    {
        FUN7(VAR2, VAR22, "");
        return FUN8(VAR23);
    }
    if (FUN4(VAR8, &VAR24))
        VAR10->VAR25 |= VAR26;
    return 0;
}