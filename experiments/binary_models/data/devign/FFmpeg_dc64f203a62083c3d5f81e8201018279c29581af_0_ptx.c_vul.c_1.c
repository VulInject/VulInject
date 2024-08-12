static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *const VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR3;
    VAR12 *const VAR14 = &VAR10->VAR13;
    unsigned int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    VAR7 *VAR21;
    VAR15 = FUN2(VAR8);
    VAR16 = FUN2(VAR8 + 8);
    VAR17 = FUN2(VAR8 + 10);
    VAR20 = FUN2(VAR8 + 12) >> 3;
    if (VAR20 != 2)
    {
        FUN3(VAR2, "");
        return -1;
    }
    VAR2->VAR22 = VAR23;
    if (VAR24 - VAR8 < VAR15)
        if (VAR15 != 0x2c)
            FUN3(VAR2, "");
    VAR8 += VAR15;
    if (VAR14->VAR3[0])
        VAR2->FUN4(VAR2, VAR14);
    if (FUN5(VAR16, VAR17, 0, VAR2))
        return -1;
    if (VAR16 != VAR2->VAR25 || VAR17 != VAR2->VAR26)
        FUN6(VAR2, VAR16, VAR17);
    if (VAR2->FUN7(VAR2, VAR14) < 0)
    {
        FUN8(VAR2, VAR27, "");
        return -1;
    }
    VAR14->VAR28 = VAR29;
    VAR21 = VAR14->VAR3[0];
    VAR19 = VAR14->VAR30[0];
    for (VAR18 = 0; VAR18 < VAR17; VAR18++)
    {
        if (VAR24 - VAR8 < VAR16 * VAR20)
            break;
        unsigned int VAR31;
        for (VAR31 = 0; VAR31 < VAR16 * VAR20; VAR31 += VAR20)
            FUN9(VAR21 + VAR31, FUN2(VAR8 + VAR31));
        memcpy(VAR21, VAR8, VAR16 * VAR20);
        VAR21 += VAR19;
        VAR8 += VAR16 * VAR20;
    }
    *VAR13 = VAR10->VAR13;
    *VAR4 = sizeof(VAR32);
    return VAR15 + VAR16 * VAR17 * VAR20;