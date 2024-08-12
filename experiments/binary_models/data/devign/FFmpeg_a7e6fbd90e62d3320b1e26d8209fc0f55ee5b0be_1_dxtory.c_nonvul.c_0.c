static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8)
{
    GetByteContext VAR9;
    GetBitContext VAR10;
    int VAR11, VAR12, VAR13;
    uint32_t VAR14, VAR15;
    VAR5 *VAR16;
    int VAR17;
    VAR17 = FUN2(VAR2, VAR6, VAR7, &VAR9, &VAR11, &VAR14);
    if (VAR17 < 0)
        return VAR17;
    VAR13 = VAR2->VAR18 / VAR11;
    VAR2->VAR19 = VAR20;
    if ((VAR17 = FUN3(VAR2, VAR4, 0)) < 0)
        return VAR17;
    VAR16 = VAR4->VAR21[0];
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        VAR15 = FUN4(&VAR9);
        VAR17 = FUN5(VAR2, VAR6, VAR7, VAR15, VAR14);
        if (VAR17 < 0)
            return VAR17;
        FUN6(&VAR10, VAR6 + VAR14 + 16, (VAR15 - 16) * 8);
        FUN7(&VAR10, VAR2->VAR22, VAR13, VAR16, VAR4->VAR23[0], VAR8);
        VAR16 += VAR4->VAR23[0] * VAR13;
        VAR14 += VAR15;
    }
    return 0;
}