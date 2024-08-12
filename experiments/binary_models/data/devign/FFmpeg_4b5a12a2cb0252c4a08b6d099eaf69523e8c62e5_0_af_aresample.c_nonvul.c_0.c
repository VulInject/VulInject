static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    const int VAR9 = VAR4->VAR10->VAR11;
    int VAR12 = FUN2(VAR9 * VAR6->VAR13 * 2, 1);
    VAR1 *const VAR14 = VAR2->VAR7->VAR15[0];
    VAR3 *VAR16 = FUN3(VAR14, VAR17, VAR12);
    int VAR18;
    if (!VAR16)
        return FUN4(VAR19);
    FUN5(VAR16, VAR4);
    VAR16->VAR20 = VAR14->VAR20;
    VAR16->VAR10->VAR21 = VAR14->VAR21;
    VAR16->VAR10->VAR22 = VAR14->VAR22;
    if (VAR4->VAR23 != VAR24)
    {
        int64_t VAR25 = FUN6(VAR4->VAR23, VAR2->VAR26.VAR27 * (VAR28)VAR14->VAR22 * VAR2->VAR22, VAR2->VAR26.VAR29);
        int64_t VAR30 = FUN7(VAR6->VAR31, VAR25);
        VAR6->VAR32 = VAR16->VAR23 = FUN8(VAR30, VAR2->VAR22);
    }
    else
    {
        VAR16->VAR23 = VAR24;
    }
    VAR12 = FUN9(VAR6->VAR31, VAR16->VAR33, VAR12, (void *)VAR4->VAR33, VAR9);
    if (VAR12 <= 0)
    {
        FUN10(VAR16);
        FUN10(VAR4);
        return 0;
    }
    VAR16->VAR10->VAR11 = VAR12;
    VAR18 = FUN11(VAR14, VAR16);
    VAR6->VAR34 = 1;
    FUN10(VAR4);
    return VAR18;
}