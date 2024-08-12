static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const signed short *VAR9 = VAR5;
    int VAR10 = VAR5 ? VAR2->VAR11 : 0;
    VAR12 *VAR13;
    VAR14 *VAR15;
    PutBitContext VAR16;
    int VAR17;
    if (!FUN2(VAR7, VAR9, VAR10))
        return 0;
    VAR10 = 1 << (VAR7->VAR18[0] - 1);
    FUN3(&VAR16, VAR3, VAR4);
    FUN4(&VAR16, 1, 0);
    FUN4(&VAR16, FUN5(VAR7->VAR19 - 1), 0);
    VAR13 = &VAR7->VAR20[0];
    VAR15 = &VAR7->VAR21[VAR13->VAR15];
    if (VAR13->VAR22)
    {
        FUN4(&VAR16, 1, 0);
        FUN4(&VAR16, 1, 0);
    }
    for (VAR17 = 0; VAR17 < VAR7->VAR23; VAR17++)
    {
        VAR24 *VAR25 = &VAR7->VAR26[VAR15->VAR27[VAR15->VAR28[VAR17]]];
        uint16_t VAR29[VAR30];
        FUN6(VAR7, VAR25, &VAR7->VAR31[VAR17 * VAR10], VAR29, VAR10);
        FUN7(VAR7, VAR25, &VAR16, VAR29, &VAR7->VAR27[VAR17 * VAR10], VAR10);
    }
    for (VAR17 = 0; VAR17 < VAR7->VAR23 * VAR10; VAR17++)
        VAR7->VAR31[VAR17] /= VAR7->VAR27[VAR17];
    for (VAR17 = 0; VAR17 < VAR15->VAR32; VAR17++)
    {
        float *VAR33 = VAR7->VAR31 + VAR15->VAR34[VAR17] * VAR10;
        float *VAR35 = VAR7->VAR31 + VAR15->VAR36[VAR17] * VAR10;
        int VAR37;
        for (VAR37 = 0; VAR37 < VAR10; VAR37++)
        {
            float VAR38 = VAR35[VAR37];
            VAR35[VAR37] -= VAR33[VAR37];
            if (VAR33[VAR37] > 0)
                VAR35[VAR37] = -VAR35[VAR37];
            if (VAR35[VAR37] < 0)
                VAR33[VAR37] = VAR38;
        }
    }
    FUN8(VAR7, &VAR7->VAR39[VAR15->VAR40[VAR15->VAR28[0]]], &VAR16, VAR7->VAR31, VAR10, VAR7->VAR23);
    VAR2->VAR41->VAR42 = VAR7->VAR43;
    VAR7->VAR43 += VAR2->VAR11;
    FUN9(&VAR16);
    return FUN10(&VAR16) >> 3;
}