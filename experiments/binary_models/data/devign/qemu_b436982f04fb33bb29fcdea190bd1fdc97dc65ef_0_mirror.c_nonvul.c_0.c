static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7.VAR8;
    int VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13;
    int VAR14;
    VAR9 = VAR2->VAR15 >> VAR16;
    VAR14 = VAR9 * VAR2->VAR17;
    VAR4 = FUN2(VAR2->VAR18 >> VAR16, VAR4);
    VAR4 = FUN2(VAR14, VAR4);
    assert(VAR4);
    VAR11 = VAR4;
    if (VAR2->VAR19)
    {
        VAR11 += FUN3(VAR2, &VAR3, &VAR4);
    }
    assert(VAR4 << VAR16 <= VAR2->VAR18);
    assert(!(VAR3 % VAR9));
    VAR10 = FUN4(VAR4, VAR9);
    while (VAR2->VAR20 < VAR10)
    {
        FUN5(VAR2, VAR3 * VAR21, VAR2->VAR22);
        FUN6(VAR2);
    }
    VAR13 = FUN7(VAR12, 1);
    VAR13->VAR2 = VAR2;
    VAR13->VAR23 = VAR3 * VAR21;
    VAR13->VAR24 = VAR4 * VAR21;
    FUN8(&VAR13->VAR25, VAR10);
    while (VAR10-- > 0)
    {
        VAR26 *VAR27 = FUN9(&VAR2->VAR28);
        size_t VAR29 = VAR4 * VAR21 - VAR13->VAR25.VAR30;
        FUN10(&VAR2->VAR28, VAR31);
        VAR2->VAR20--;
        FUN11(&VAR13->VAR25, VAR27, FUN2(VAR2->VAR15, VAR29));
    }
    VAR2->VAR22++;
    VAR2->VAR32 += VAR4 * VAR21;
    FUN12(VAR2, VAR3 * VAR21, VAR4 * VAR21);
    FUN13(VAR6, VAR3 * VAR21, &VAR13->VAR25, 0, VAR33, VAR13);
    return VAR11;
}