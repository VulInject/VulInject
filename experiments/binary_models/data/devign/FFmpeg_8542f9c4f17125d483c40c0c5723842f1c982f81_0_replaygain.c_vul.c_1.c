static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5, const VAR3 *VAR6, const VAR3 *VAR7)
{
    VAR8 *VAR9, *VAR10;
    VAR11 *VAR12;
    VAR3 *VAR13;
    int32_t VAR14, VAR15;
    uint32_t VAR16, VAR17;
    VAR14 = FUN2(VAR4);
    VAR15 = FUN2(VAR6);
    VAR16 = FUN3(VAR5);
    VAR17 = FUN3(VAR7);
    if (VAR14 == VAR18 && VAR15 == VAR18)
        return 0;
    VAR12 = FUN4(sizeof(*VAR12));
    if (!VAR12)
        return FUN5(VAR19);
    VAR10 = FUN6(VAR2->VAR20, VAR2->VAR21 + 1, sizeof(*VAR10));
    if (!VAR10)
    {
        FUN7(&VAR12);
        return FUN5(VAR19);
    }
    VAR2->VAR20 = VAR10;
    VAR2->VAR21++;
    VAR9 = &VAR2->VAR20[VAR2->VAR21 - 1];
    VAR9->VAR22 = VAR23;
    VAR9->VAR13 = (VAR3 *)VAR12;
    VAR9->VAR24 = sizeof(*VAR12);
    VAR12->VAR4 = VAR14;
    VAR12->VAR5 = VAR16;
    VAR12->VAR6 = VAR15;
    VAR12->VAR7 = VAR17;
    return 0;
}