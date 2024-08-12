VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    int VAR9, VAR10;
    VAR1 *VAR11;
    int64_t VAR12;
    int VAR13;
    VAR10 = FUN2(VAR3, VAR4, &VAR11, &VAR9);
    if (VAR10 < 0)
    {
        return 0;
    }
    VAR12 = FUN3(VAR11[VAR9]);
    if (VAR12 & VAR14)
    {
        FUN4(VAR3, VAR7->VAR15, (void **)&VAR11);
        return 0;
    }
    if (VAR12)
        FUN5(VAR3, VAR12, 1);
    VAR12 = FUN6(VAR3, VAR5);
    if (VAR12 < 0)
    {
        FUN4(VAR3, VAR7->VAR15, (void **)&VAR11);
        return 0;
    }
    VAR13 = ((VAR12 + VAR5 - 1) >> 9) - (VAR12 >> 9);
    VAR12 |= VAR16 | ((VAR1)VAR13 << VAR7->VAR17);
    FUN7(VAR3->VAR18, VAR19);
    FUN8(VAR7->VAR15, VAR11);
    VAR11[VAR9] = FUN9(VAR12);
    VAR10 = FUN4(VAR3, VAR7->VAR15, (void **)&VAR11);
    if (VAR10 < 0)
    {
        return 0;
    }
    return VAR12;
}