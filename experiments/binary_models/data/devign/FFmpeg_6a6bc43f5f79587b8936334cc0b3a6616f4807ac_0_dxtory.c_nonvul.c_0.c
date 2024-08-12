static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    GetByteContext VAR8;
    GetBitContext VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    uint32_t VAR16, VAR17;
    VAR5 *VAR18, *VAR19, *VAR20;
    int VAR21;
    FUN2(&VAR8, VAR6, VAR7);
    VAR10 = FUN3(&VAR8);
    VAR16 = FUN4(VAR10 * 4 + 2, 16);
    if (VAR7 < VAR16)
    {
        FUN5(VAR2, VAR22, "");
        return VAR23;
    }
    if (!VAR10 || VAR2->VAR24 % VAR10)
    {
        FUN6(VAR2, "", VAR10, VAR2->VAR25, VAR2->VAR24);
        return VAR26;
    }
    VAR13 = VAR2->VAR24 / VAR10;
    if ((VAR2->VAR25 & 1) || (VAR2->VAR24 & 1))
    {
        FUN6(VAR2, "", VAR2->VAR25, VAR2->VAR24);
    }
    VAR2->VAR27 = VAR28;
    if ((VAR21 = FUN7(VAR2, VAR4, 0)) < 0)
        return VAR21;
    VAR18 = VAR4->VAR29[0];
    VAR19 = VAR4->VAR29[1];
    VAR20 = VAR4->VAR29[2];
    VAR14 = 0;
    VAR15 = VAR13;
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        VAR17 = FUN8(&VAR8);
        VAR12 = (VAR15 & ~1) - (VAR14 & ~1);
        VAR21 = FUN9(VAR2, VAR6, VAR7, VAR17, VAR16);
        if (VAR21 < 0)
            return VAR21;
        FUN10(&VAR9, VAR6 + VAR16 + 16, (VAR17 - 16) * 8);
        FUN11(&VAR9, VAR2->VAR25, VAR12, VAR18, VAR19, VAR20, VAR4->VAR30[0], VAR4->VAR30[1], VAR4->VAR30[2]);
        VAR18 += VAR4->VAR30[0] * VAR12;
        VAR19 += VAR4->VAR30[1] * (VAR12 >> 1);
        VAR20 += VAR4->VAR30[2] * (VAR12 >> 1);
        VAR16 += VAR17;
        VAR14 = VAR15;
        VAR15 += VAR13;
    }
    return 0;
}