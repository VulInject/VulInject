static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    FFDrawColor VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16 = 0;
    const VAR17 *VAR18 = FUN2(VAR4->VAR19);
    VAR9 = FUN3((VAR6->VAR20 + 6) / 7, 1 << VAR18->VAR21);
    VAR10 = FUN3(VAR6->VAR22 * 2 / 3, 1 << VAR18->VAR23);
    VAR11 = FUN3(VAR6->VAR22 * 3 / 4 - VAR10, 1 << VAR18->VAR23);
    VAR12 = FUN3(VAR9 * 5 / 4, 1 << VAR18->VAR21);
    VAR13 = VAR6->VAR22 - VAR11 - VAR10;
    FUN4(&VAR6->VAR24, &VAR8, VAR25);
    FUN5(&VAR6->VAR24, &VAR8, VAR4->VAR26, VAR4->VAR27, VAR16, VAR28, VAR20, VAR22) for (VAR14 = 0; VAR14 < 7; VAR14++)
    {
        FUN6(VAR29[VAR14], VAR16, 0, FUN7(VAR9, VAR6->VAR20 - VAR16), VAR10);
        FUN6(VAR30[VAR14], VAR16, VAR10, FUN7(VAR9, VAR6->VAR20 - VAR16), VAR11);
        VAR16 += VAR9;
    }
    VAR16 = 0;
    FUN6(VAR31, VAR16, VAR10 + VAR11, VAR12, VAR13);
    VAR16 += VAR12;
    FUN6(VAR32, VAR16, VAR10 + VAR11, VAR12, VAR13);
    VAR16 += VAR12;
    FUN6(VAR33, VAR16, VAR10 + VAR11, VAR12, VAR13);
    VAR16 += VAR12;
    VAR15 = FUN3(5 * VAR9 - VAR16, 1 << VAR18->VAR21);
    FUN6(VAR34, VAR16, VAR10 + VAR11, VAR15, VAR13);
    VAR16 += VAR15;
    VAR15 = FUN3(VAR9 / 3, 1 << VAR18->VAR21);
    FUN6(VAR35, VAR16, VAR10 + VAR11, VAR15, VAR13);
    VAR16 += VAR15;
    FUN6(VAR34, VAR16, VAR10 + VAR11, VAR15, VAR13);
    VAR16 += VAR15;
    FUN6(VAR36, VAR16, VAR10 + VAR11, VAR15, VAR13);
    VAR16 += VAR15;
    FUN6(VAR34, VAR16, VAR10 + VAR11, VAR6->VAR20 - VAR16, VAR13);
}