static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    GetByteContext VAR8;
    GetBitContext VAR9;
    int VAR10, VAR11, VAR12;
    uint32_t VAR13, VAR14;
    VAR5 *VAR15, *VAR16, *VAR17;
    int VAR18;
    VAR18 = FUN2(VAR2, VAR6, VAR7, &VAR8, &VAR10, &VAR13);
    if (VAR18 < 0)
        return VAR18;
    VAR12 = VAR2->VAR19 / VAR10;
    VAR2->VAR20 = VAR21;
    if ((VAR18 = FUN3(VAR2, VAR4, 0)) < 0)
        return VAR18;
    VAR15 = VAR4->VAR22[0];
    VAR16 = VAR4->VAR22[1];
    VAR17 = VAR4->VAR22[2];
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        VAR14 = FUN4(&VAR8);
        VAR18 = FUN5(VAR2, VAR6, VAR7, VAR14, VAR13);
        if (VAR18 < 0)
            return VAR18;
        FUN6(&VAR9, VAR6 + VAR13 + 16, (VAR14 - 16) * 8);
        FUN7(&VAR9, VAR2->VAR23, VAR12, VAR15, VAR16, VAR17, VAR4->VAR24[0], VAR4->VAR24[1], VAR4->VAR24[2]);
        VAR15 += VAR4->VAR24[0] * VAR12;
        VAR16 += VAR4->VAR24[1] * VAR12;
        VAR17 += VAR4->VAR24[2] * VAR12;
        VAR13 += VAR14;
    }
    return 0;
}