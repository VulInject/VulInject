static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    const VAR8 *VAR9;
    VAR8 *VAR10;
    uint32_t VAR11;
    uint32_t VAR12, VAR13, VAR14 = 0;
    VAR6 = FUN2(VAR2, VAR4->VAR11);
    if ((VAR5 = FUN3(&VAR2->VAR15, VAR2->VAR16)) < 0)
    {
        VAR2->VAR16 = VAR2->VAR17 = 0;
        return VAR5;
    }
    VAR9 = VAR4->VAR18;
    VAR10 = VAR2->VAR15 + VAR6;
    VAR12 = VAR4->VAR19;
    while (VAR9 - VAR4->VAR18 < VAR4->VAR11 - VAR20)
    {
        VAR7 = FUN4(&VAR9);
        VAR11 = FUN5(&VAR9);
        VAR13 = FUN5(&VAR9);
        VAR13 |= FUN4(&VAR9) << 24;
        if (!VAR14)
            VAR14 = VAR13;
        VAR12 += VAR13 - VAR14;
        VAR14 = VAR13;
        FUN6(&VAR10, VAR7);
        FUN7(&VAR10, VAR11);
        FUN7(&VAR10, VAR12);
        FUN6(&VAR10, VAR12 >> 24);
        memcpy(VAR10, VAR9, VAR11 + 3 + 4);
        VAR9 += VAR11 + 3 + 4;
        VAR10 += VAR11 + 3 + 4;
    }
    memcpy(VAR10, VAR9, VAR20);
    return 0;
}