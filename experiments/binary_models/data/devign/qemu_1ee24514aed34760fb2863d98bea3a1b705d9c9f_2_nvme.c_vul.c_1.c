static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR5;
    VAR8 *VAR9, *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    uint16_t VAR15 = FUN2(VAR7->VAR15);
    if (!VAR15 || FUN3(VAR3, VAR15))
    {
        return VAR16 | VAR17;
    }
    VAR12 = VAR3->VAR12[VAR15];
    while (!FUN4(&VAR12->VAR18))
    {
        VAR9 = FUN5(&VAR12->VAR18);
        assert(VAR9->VAR19);
        FUN6(VAR9->VAR19);
    }
    if (!FUN7(VAR3, VAR12->VAR20))
    {
        VAR14 = VAR3->VAR14[VAR12->VAR20];
        FUN8(&VAR14->VAR21, VAR12, VAR22);
        FUN9(VAR14);
        FUN10(VAR9, &VAR14->VAR23, VAR22, VAR10)
        {
            if (VAR9->VAR12 == VAR12)
            {
                FUN8(&VAR14->VAR23, VAR9, VAR22);
                FUN11(&VAR12->VAR23, VAR9, VAR22);
            }
        }
    }
    FUN12(VAR12, VAR3);
    return VAR24;
}