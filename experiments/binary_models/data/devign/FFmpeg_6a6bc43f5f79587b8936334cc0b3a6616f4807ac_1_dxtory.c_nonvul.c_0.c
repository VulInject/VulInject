static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    GetByteContext VAR8;
    GetBitContext VAR9;
    int VAR10, VAR11, VAR12;
    uint32_t VAR13, VAR14;
    VAR5 *VAR15;
    int VAR16;
    FUN2(&VAR8, VAR6, VAR7);
    VAR10 = FUN3(&VAR8);
    VAR13 = FUN4(VAR10 * 4 + 2, 16);
    if (VAR7 < VAR13)
    {
        FUN5(VAR2, VAR17, "");
        return VAR18;
    }
    if (!VAR10 || VAR2->VAR19 % VAR10)
    {
        FUN6(VAR2, "", VAR10, VAR2->VAR20, VAR2->VAR19);
        return VAR21;
    }
    VAR12 = VAR2->VAR19 / VAR10;
    VAR2->VAR22 = VAR23;
    if ((VAR16 = FUN7(VAR2, VAR4, 0)) < 0)
        return VAR16;
    VAR15 = VAR4->VAR24[0];
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        VAR14 = FUN8(&VAR8);
        VAR16 = FUN9(VAR2, VAR6, VAR7, VAR14, VAR13);
        if (VAR16 < 0)
            return VAR16;
        FUN10(&VAR9, VAR6 + VAR13 + 16, (VAR14 - 16) * 8);
        FUN11(&VAR9, VAR2->VAR20, VAR12, VAR15, VAR4->VAR25[0]);
        VAR15 += VAR4->VAR25[0] * VAR12;
        VAR13 += VAR14;
    }
    return 0;
}