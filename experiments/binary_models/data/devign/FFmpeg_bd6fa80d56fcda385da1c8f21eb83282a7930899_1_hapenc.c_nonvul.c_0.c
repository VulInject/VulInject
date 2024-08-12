static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = FUN2(VAR9);
    int VAR12, VAR13;
    int VAR14 = FUN3(VAR9->VAR15, VAR9->VAR16 * VAR9->VAR17) + VAR11;
    VAR13 = FUN4(VAR2, VAR4, VAR14, VAR11);
    if (VAR13 < 0)
        return VAR13;
    if (VAR9->VAR18 == VAR19)
    {
        VAR13 = FUN5(VAR2, VAR4->VAR20 + VAR11, VAR4->VAR21 - VAR11, VAR6);
        if (VAR13 < 0)
            return VAR13;
        VAR9->VAR22[0].VAR23 = VAR19;
        VAR12 = VAR9->VAR15;
    }
    else
    {
        VAR13 = FUN5(VAR2, VAR9->VAR24, VAR9->VAR15, VAR6);
        if (VAR13 < 0)
            return VAR13;
        VAR12 = FUN6(VAR2, VAR4->VAR20 + VAR11);
        if (VAR12 < 0)
            return VAR12;
    }
    FUN7(VAR9, VAR4->VAR20, VAR12 + VAR11);
    FUN8(VAR4, VAR12 + VAR11);
    VAR4->VAR25 |= VAR26;
    *VAR7 = 1;
    return 0;
}