static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5, unsigned int VAR6, VAR7 *VAR8)
{
    float VAR9[VAR10] = {0}, VAR11[VAR12 + VAR10];
    float VAR13[VAR12];
    float VAR14[VAR10], VAR15[VAR10], VAR16[VAR10], VAR17[VAR10];
    int16_t VAR18[VAR10];
    int VAR19, VAR20, VAR21, VAR22;
    int VAR23, VAR24;
    unsigned VAR25[3];
    float VAR26[3];
    float VAR27, VAR28;
    for (VAR23 = 0; VAR23 < VAR12; VAR23++)
    {
        VAR11[VAR23] = VAR2->VAR29[VAR10 + VAR23];
        VAR13[VAR23] = VAR5[VAR23] * (1 / 4096.0);
    }
    FUN2(VAR11 + VAR12, VAR13, VAR9, VAR10, VAR12);
    for (VAR23 = 0; VAR23 < VAR10; VAR23++)
    {
        VAR14[VAR23] = VAR11[VAR12 + VAR23];
        VAR9[VAR23] = VAR4[VAR23] - VAR14[VAR23];
    }
    memset(VAR11, 0, VAR12 * sizeof(*VAR11));
    VAR19 = FUN3(VAR2->VAR30, VAR11 + VAR12, VAR13, VAR9);
    if (VAR19)
    {
        memcpy(VAR15, VAR11 + VAR12, sizeof(VAR15));
        FUN4(VAR18, VAR2->VAR30, VAR19 + VAR10 / 2 - 1);
        VAR25[0] = (FUN5(VAR18) * VAR6) >> 12;
    }
    FUN6(VAR11 + VAR12, VAR13, VAR9, VAR19, &VAR20, &VAR21);
    for (VAR23 = 0; VAR23 < VAR10; VAR23++)
    {
        VAR16[VAR23] = VAR31[VAR20][VAR23];
        VAR17[VAR23] = VAR32[VAR21][VAR23];
    }
    FUN2(VAR11 + VAR12, VAR13, VAR16, VAR10, VAR12);
    memcpy(VAR16, VAR11 + VAR12, sizeof(VAR16));
    VAR25[1] = (VAR33[VAR20] * VAR6) >> 8;
    FUN2(VAR11 + VAR12, VAR13, VAR17, VAR10, VAR12);
    memcpy(VAR17, VAR11 + VAR12, sizeof(VAR17));
    VAR25[2] = (VAR34[VAR21] * VAR6) >> 8;
    VAR28 = VAR35;
    VAR22 = 0;
    for (VAR24 = 0; VAR24 < 256; VAR24++)
    {
        VAR26[1] = ((VAR36[VAR24][1] * VAR25[1]) >> VAR37[VAR24]) * (1 / 4096.0);
        VAR26[2] = ((VAR36[VAR24][2] * VAR25[2]) >> VAR37[VAR24]) * (1 / 4096.0);
        VAR27 = 0;
        if (VAR19)
        {
            VAR26[0] = ((VAR36[VAR24][0] * VAR25[0]) >> VAR37[VAR24]) * (1 / 4096.0);
            for (VAR23 = 0; VAR23 < VAR10; VAR23++)
            {
                VAR9[VAR23] = VAR14[VAR23] + VAR26[0] * VAR15[VAR23] + VAR26[1] * VAR16[VAR23] + VAR26[2] * VAR17[VAR23];
                VAR27 += (VAR9[VAR23] - VAR4[VAR23]) * (VAR9[VAR23] - VAR4[VAR23]);
            }
        }
        else
        {
            for (VAR23 = 0; VAR23 < VAR10; VAR23++)
            {
                VAR9[VAR23] = VAR14[VAR23] + VAR26[1] * VAR16[VAR23] + VAR26[2] * VAR17[VAR23];
                VAR27 += (VAR9[VAR23] - VAR4[VAR23]) * (VAR9[VAR23] - VAR4[VAR23]);
            }
        }
        if (VAR27 < VAR28)
        {
            VAR28 = VAR27;
            VAR22 = VAR24;
        }
    }
    FUN7(VAR8, 7, VAR19);
    FUN7(VAR8, 8, VAR22);
    FUN7(VAR8, 7, VAR20);
    FUN7(VAR8, 7, VAR21);
    FUN8(VAR2, VAR5, VAR19, VAR20, VAR21, VAR6, VAR22);
}