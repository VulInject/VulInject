static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *const VAR16 = &VAR12->VAR15;
    unsigned int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR7 *VAR23;
    if (VAR9 - VAR8 < 14)
        VAR17 = FUN2(VAR8);
    VAR18 = FUN2(VAR8 + 8);
    VAR19 = FUN2(VAR8 + 10);
    VAR22 = FUN2(VAR8 + 12) >> 3;
    if (VAR22 != 2)
    {
        FUN3(VAR2, "");
        return -1;
    }
    VAR2->VAR24 = VAR25;
    if (VAR17 != 0x2c)
        FUN3(VAR2, "");
    VAR8 += VAR17;
    if (VAR16->VAR3[0])
        VAR2->FUN4(VAR2, VAR16);
    if (FUN5(VAR18, VAR19, 0, VAR2))
        return -1;
    if (VAR18 != VAR2->VAR26 || VAR19 != VAR2->VAR27)
        FUN6(VAR2, VAR18, VAR19);
    if (VAR2->FUN7(VAR2, VAR16) < 0)
    {
        FUN8(VAR2, VAR28, "");
        return -1;
    }
    VAR16->VAR29 = VAR30;
    VAR23 = VAR16->VAR3[0];
    VAR21 = VAR16->VAR31[0];
    for (VAR20 = 0; VAR20 < VAR19; VAR20++)
    {
        if (VAR9 - VAR8 < VAR18 * VAR22)
            break;
        unsigned int VAR32;
        for (VAR32 = 0; VAR32 < VAR18 * VAR22; VAR32 += VAR22)
            FUN9(VAR23 + VAR32, FUN2(VAR8 + VAR32));
        memcpy(VAR23, VAR8, VAR18 * VAR22);
        VAR23 += VAR21;
        VAR8 += VAR18 * VAR22;
    }
    *VAR15 = VAR12->VAR15;
    *VAR4 = sizeof(VAR33);
    return VAR17 + VAR18 * VAR19 * VAR22;