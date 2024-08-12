static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    PutBitContext VAR11;
    const int VAR12 = VAR2->VAR12;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = (VAR12 + VAR9->VAR15[0] - 1) / VAR9->VAR15[0];
    const int VAR16 = (VAR13 + VAR9->VAR17[0] - 1) / VAR9->VAR17[0];
    int VAR18 = VAR19;
    int VAR20, VAR21;
    if (VAR2->VAR22 == VAR23)
        VAR18 += VAR12 * VAR13 * 3 * 3;
    else
    {
        VAR18 += VAR14 * VAR16 * 3 * 4 * VAR9->VAR15[0] * VAR9->VAR17[0];
    }
    if ((VAR20 = FUN2(VAR4, VAR18)) < 0)
    {
        FUN3(VAR2, VAR24, "", VAR18);
        return VAR20;
    }
    FUN4(&VAR11, VAR4->VAR25, VAR4->VAR26);
    FUN5(VAR2, &VAR11, &VAR9->VAR27, VAR9->VAR28, VAR9->VAR29);
    VAR21 = FUN6(&VAR11);
    if (VAR2->VAR22 == VAR23)
        VAR20 = FUN7(VAR2, &VAR11, VAR6);
    else
        VAR20 = FUN8(VAR2, &VAR11, VAR6);
    if (VAR20 < 0)
        return VAR20;
    FUN9();
    FUN10(&VAR11, VAR21);
    FUN11(&VAR11);
    VAR4->VAR26 = FUN12(&VAR11) - VAR11.VAR30;
    VAR4->VAR31 |= VAR32;
    *VAR7 = 1;
    return 0;
}