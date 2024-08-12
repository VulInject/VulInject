static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    const int VAR9 = VAR4->VAR10;
    int64_t VAR11;
    int VAR12 = VAR9 * VAR6->VAR13 + 32;
    VAR1 *const VAR14 = VAR2->VAR7->VAR15[0];
    VAR3 *VAR16;
    int VAR17;
    VAR11 = FUN2(VAR6->VAR18, VAR14->VAR19);
    if (VAR11 > 0)
        VAR12 += FUN3(VAR11, FUN4(4096, VAR12));
    VAR16 = FUN5(VAR14, VAR12);
    if (!VAR16)
        return FUN6(VAR20);
    FUN7(VAR16, VAR4);
    VAR16->VAR21 = VAR14->VAR21;
    VAR16->VAR22 = VAR14->VAR22;
    VAR16->VAR23 = VAR14->VAR23;
    VAR16->VAR19 = VAR14->VAR19;
    if (VAR4->VAR24 != VAR25)
    {
        int64_t VAR26 = FUN8(VAR4->VAR24, VAR2->VAR27.VAR28 * (VAR29)VAR14->VAR19 * VAR2->VAR19, VAR2->VAR27.VAR30);
        int64_t VAR31 = FUN9(VAR6->VAR18, VAR26);
        VAR6->VAR32 = VAR16->VAR24 = FUN10(VAR31, VAR2->VAR19);
    }
    else
    {
        VAR16->VAR24 = VAR25;
    }
    VAR12 = FUN11(VAR6->VAR18, VAR16->VAR33, VAR12, (void *)VAR4->VAR33, VAR9);
    if (VAR12 <= 0)
    {
        FUN12(&VAR16);
        FUN12(&VAR4);
        return 0;
    }
    VAR6->VAR34 = VAR16->VAR10 == VAR12;
    VAR16->VAR10 = VAR12;
    VAR17 = FUN13(VAR14, VAR16);
    FUN12(&VAR4);
    return VAR17;
}