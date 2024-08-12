static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12, VAR13;
    const int VAR14 = 8 - VAR2->VAR15;
    const VAR10 *VAR16 = VAR17[VAR14];
    GetBitContext VAR18;
    VAR13 = VAR6->VAR19 * 2 * FUN2(VAR2->VAR20);
    if (*VAR4 < VAR13)
    {
        FUN3(VAR2, VAR21, "");
        return FUN4(VAR22);
    }
    FUN5(&VAR18, VAR6->VAR3, VAR6->VAR19 * 8);
    for (VAR12 = 0; VAR12 < VAR6->VAR19; VAR12++)
    {
        int VAR23, VAR24, VAR25, VAR26, VAR27;
        int VAR28, VAR29;
        VAR24 = FUN6(&VAR18, 2);
        VAR23 = FUN6(&VAR18, 6 - VAR14);
        FUN7(&VAR18, VAR14);
        VAR25 = FUN8((VAR8->VAR30[0].VAR31 * VAR16[VAR23] >> 10) + VAR8->VAR30[0].VAR32, -16384, 16383);
        FUN9(&VAR8->VAR30[0], VAR23 >> (2 - VAR14));
        VAR27 = VAR8->VAR30[1].VAR31 * VAR33[VAR24] >> 10;
        VAR26 = FUN8(VAR27 + VAR8->VAR30[1].VAR32, -16384, 16383);
        FUN10(&VAR8->VAR30[1], VAR27, VAR24);
        VAR8->VAR34[VAR8->VAR35++] = VAR25 + VAR26;
        VAR8->VAR34[VAR8->VAR35++] = VAR25 - VAR26;
        FUN11(VAR8->VAR34 + VAR8->VAR35 - 24, &VAR28, &VAR29);
        *VAR11++ = FUN12(VAR28 >> 12);
        *VAR11++ = FUN12(VAR29 >> 12);
        if (VAR8->VAR35 >= VAR36)
        {
            memmove(VAR8->VAR34, VAR8->VAR34 + VAR8->VAR35 - 22, 22 * sizeof(VAR8->VAR34[0]));
            VAR8->VAR35 = 22;
        }
    }
    *VAR4 = VAR13;
    return VAR6->VAR19;
}