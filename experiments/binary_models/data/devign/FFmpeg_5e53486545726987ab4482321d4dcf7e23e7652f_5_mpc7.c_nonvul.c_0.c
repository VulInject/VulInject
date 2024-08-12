static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    GetBitContext VAR8;
    uint8_t VAR9[16];
    static int VAR10 = 0;
    if (VAR2->VAR11 < 16)
    {
        FUN2(VAR2, VAR12, "", VAR2->VAR11);
        return -1;
    }
    memset(VAR6->VAR13, 0, sizeof(VAR6->VAR13));
    FUN3(0xDEADBEEF, &VAR6->VAR14);
    FUN4(&VAR6->VAR15, VAR2);
    VAR6->VAR15.FUN5((VAR16 *)VAR9, (const VAR16 *)VAR2->VAR17, 4);
    FUN6();
    FUN7(&VAR8, VAR9, 128);
    VAR6->VAR18 = FUN8(&VAR8);
    VAR6->VAR19 = FUN8(&VAR8);
    VAR6->VAR20 = FUN9(&VAR8, 6);
    if (VAR6->VAR20 >= VAR21)
    {
        FUN2(VAR2, VAR12, "", VAR6->VAR20);
        return -1;
    }
    FUN10(&VAR8, 88);
    VAR6->VAR22 = FUN8(&VAR8);
    VAR6->VAR23 = FUN9(&VAR8, 11);
    FUN2(VAR2, VAR24, "", VAR6->VAR18, VAR6->VAR19, VAR6->VAR22, VAR6->VAR23, VAR6->VAR20);
    VAR6->VAR25 = 0;
    if (VAR10)
        return 0;
    FUN2(VAR2, VAR24, "");
    if (FUN11(&VAR26, VAR27, VAR28, &VAR29[1], 2, 1, &VAR29[0], 2, 1, VAR30))
    {
        FUN2(VAR2, VAR12, "");
        return -1;
    }
    if (FUN11(&VAR31, VAR32, VAR33, &VAR34[1], 2, 1, &VAR34[0], 2, 1, VAR30))
    {
        FUN2(VAR2, VAR12, "");
        return -1;
    }
    if (FUN11(&VAR35, VAR36, VAR37, &VAR38[1], 2, 1, &VAR38[0], 2, 1, VAR30))
    {
        FUN2(VAR2, VAR12, "");
        return -1;
    }
    for (VAR3 = 0; VAR3 < VAR39; VAR3++)
    {
        for (VAR4 = 0; VAR4 < 2; VAR4++)
        {
            if (FUN11(&VAR40[VAR3][VAR4], 9, VAR41[VAR3], &VAR42[VAR3][VAR4][1], 4, 2, &VAR42[VAR3][VAR4][0], 4, 2, VAR30))
            {
                FUN2(VAR2, VAR12, "", VAR3, VAR4);
                return -1;
            }
        }
    }
    VAR10 = 1;
    return 0;
}