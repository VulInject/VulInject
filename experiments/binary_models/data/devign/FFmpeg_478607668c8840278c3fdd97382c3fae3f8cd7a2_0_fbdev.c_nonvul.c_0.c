static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8, VAR9;
    struct timespec VAR10;
    int VAR11, VAR12;
    VAR13 *VAR14, *VAR15;
    if (VAR6->VAR16 == VAR17)
        VAR6->VAR16 = FUN2();
    while (1)
    {
        VAR8 = FUN2();
        VAR9 = VAR6->VAR16 - VAR8;
        FUN3(VAR2, "" VAR18 "" VAR18 "" VAR18 "", VAR6->VAR16, VAR8, VAR9);
        if (VAR9 <= 0)
        {
            VAR6->VAR16 += FUN4(1000000) * FUN5(VAR6->VAR19);
            break;
        }
        if (VAR2->VAR20 & VAR21)
            return FUN6(VAR22);
        VAR10.VAR23 = VAR9 / 1000000;
        VAR10.VAR24 = (VAR9 % 1000000) * 1000;
        while (FUN7(&VAR10, &VAR10) < 0 && VAR25 == VAR26)
            ;
    }
    if ((VAR12 = FUN8(VAR4, VAR6->VAR27)) < 0)
        return VAR12;
    if (FUN9(VAR6->VAR28, VAR29, &VAR6->VAR30) < 0)
        FUN10(VAR2, VAR31, "", strerror(VAR25));
    VAR4->VAR32 = VAR8;
    VAR14 = VAR6->VAR33 + VAR6->VAR34 * VAR6->VAR30.VAR35 + VAR6->VAR30.VAR36 * VAR6->VAR37.VAR38;
    VAR15 = VAR4->VAR33;
    for (VAR11 = 0; VAR11 < VAR6->VAR39; VAR11++)
    {
        memcpy(VAR15, VAR14, VAR6->VAR40);
        VAR14 += VAR6->VAR37.VAR38;
        VAR15 += VAR6->VAR40;
    }
    return VAR6->VAR27;
}