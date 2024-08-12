static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7.VAR8;
    int VAR9, VAR10;
    int VAR11 = VAR4;
    VAR12 *VAR13;
    VAR9 = VAR2->VAR14 >> VAR15;
    VAR4 = FUN2(VAR2->VAR16 >> VAR15, VAR4);
    assert(VAR4);
    if (VAR2->VAR17)
    {
        VAR11 += FUN3(VAR2, &VAR3, &VAR4);
    }
    assert(VAR4 << VAR15 <= VAR2->VAR16);
    assert(!(VAR3 % VAR9));
    VAR10 = FUN4(VAR4, VAR9);
    while (VAR2->VAR18 < VAR10)
    {
        FUN5(VAR2, VAR3, VAR2->VAR19);
        FUN6(VAR2);
    }
    VAR13 = FUN7(VAR12, 1);
    VAR13->VAR2 = VAR2;
    VAR13->VAR3 = VAR3;
    VAR13->VAR4 = VAR4;
    FUN8(&VAR13->VAR20, VAR10);
    while (VAR10-- > 0)
    {
        VAR21 *VAR22 = FUN9(&VAR2->VAR23);
        size_t VAR24 = VAR4 * VAR25 - VAR13->VAR20.VAR26;
        FUN10(&VAR2->VAR23, VAR27);
        VAR2->VAR18--;
        FUN11(&VAR13->VAR20, VAR22, FUN2(VAR2->VAR14, VAR24));
    }
    VAR2->VAR19++;
    VAR2->VAR28 += VAR4;
    FUN12(VAR2, VAR3, VAR4);
    FUN13(VAR6, VAR3 * VAR25, &VAR13->VAR20, VAR4 * VAR25, VAR29, VAR13);
    return VAR11;
}