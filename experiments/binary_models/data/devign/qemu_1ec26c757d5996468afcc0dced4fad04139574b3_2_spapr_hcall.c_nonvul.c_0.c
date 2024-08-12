static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    VAR10 *VAR11 = VAR5->VAR12;
    int VAR13;
    size_t VAR14;
    if (VAR5->VAR15 == VAR16)
    {
        return VAR17;
    }
    FUN2(VAR8, VAR9);
    VAR13 = FUN3(VAR3, VAR8, VAR9);
    if (VAR13 != -VAR18)
    {
        return FUN4(VAR13);
    }
    if (VAR8 != 0)
    {
        return VAR19;
    }
    if (!VAR11 || (VAR11->VAR9 != VAR9))
    {
        return VAR20;
    }
    if (!VAR11->VAR21)
    {
        return VAR22;
    }
    FUN5(VAR5->VAR23);
    VAR14 = 1ULL << VAR11->VAR9;
    VAR13 = FUN6(VAR3, VAR5->VAR24, FUN7(VAR5), VAR11->VAR25, VAR14);
    if (VAR13 == VAR26)
    {
        FUN8(VAR5->VAR24);
        VAR5->VAR24 = VAR11->VAR25;
        VAR5->VAR23 = VAR11->VAR9;
        FUN9(VAR5);
        VAR11->VAR25 = NULL;
    }
    VAR5->VAR12 = NULL;
    FUN10(VAR11);
    return VAR13;
}