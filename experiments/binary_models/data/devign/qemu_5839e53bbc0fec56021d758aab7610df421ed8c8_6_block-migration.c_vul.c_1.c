static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5 = VAR4->VAR5;
    int64_t VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = VAR4->VAR8;
    VAR9 *VAR10;
    int VAR11;
    if (VAR4->VAR12)
    {
        FUN2();
        while (VAR6 < VAR5 && !FUN3(VAR8, VAR6, VAR13, &VAR11))
        {
            VAR6 += VAR11;
        }
        FUN4();
    }
    if (VAR6 >= VAR5)
    {
        VAR4->VAR6 = VAR4->VAR14 = VAR5;
        return 1;
    }
    VAR4->VAR14 = VAR6;
    VAR6 &= ~((VAR15)VAR16 - 1);
    VAR11 = VAR16;
    if (VAR5 - VAR6 < VAR16)
    {
        VAR11 = VAR5 - VAR6;
    }
    VAR10 = FUN5(sizeof(VAR9));
    VAR10->VAR17 = FUN5(VAR18);
    VAR10->VAR4 = VAR4;
    VAR10->VAR19 = VAR6;
    VAR10->VAR11 = VAR11;
    VAR10->VAR20.VAR21 = VAR10->VAR17;
    VAR10->VAR20.VAR22 = VAR11 * VAR23;
    FUN6(&VAR10->VAR24, &VAR10->VAR20, 1);
    FUN7();
    VAR25.VAR26++;
    FUN8();
    FUN2();
    VAR10->VAR27 = FUN9(VAR8, VAR6, &VAR10->VAR24, VAR11, VAR28, VAR10);
    FUN10(VAR8, VAR6, VAR11);
    FUN4();
    VAR4->VAR6 = VAR6 + VAR11;
    return (VAR4->VAR6 >= VAR5);
}