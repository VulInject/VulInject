static void FUN1(VAR1 *VAR2, float *VAR3, const float *VAR4, float *VAR5, int VAR6, const struct VAR7 *VAR8, int VAR9)
{
    float VAR10[VAR11], VAR12[VAR11], VAR13[VAR14], VAR15[VAR14], VAR16[VAR14];
    float VAR17 = 0.0, VAR18 = 0.0, VAR19, VAR20;
    float VAR21 = VAR8->VAR21;
    int VAR22, VAR23, VAR24;
    FUN2(VAR10, VAR4, VAR8->VAR25);
    FUN2(VAR12, VAR4, VAR8->VAR26);
    for (VAR22 = 0; VAR22 < VAR9 - 1; VAR22++)
        VAR18 += VAR3[VAR22] * VAR3[VAR22 + 1];
    if (VAR18 < 0.0)
        VAR21 = 0.0;
    for (VAR22 = 0; VAR22 < VAR9; VAR22++)
    {
        VAR13[VAR22] = VAR3[VAR22] - VAR21 * VAR2->VAR27;
        VAR2->VAR27 = VAR3[VAR22];
    }
    FUN3(&VAR2->VAR28[VAR29], VAR13, VAR10, VAR2->VAR30, VAR9);
    VAR24 = VAR6;
    for (VAR22 = FUN4(VAR31, VAR6 - 3); VAR22 <= FUN5(VAR32, VAR6 + 3); VAR22++)
    {
        for (VAR23 = VAR29, VAR18 = 0; VAR23 < VAR29 + VAR9; VAR23++)
            VAR18 += VAR2->VAR28[VAR23] * VAR2->VAR28[VAR23 - VAR22];
        if (VAR18 > VAR17)
        {
            VAR17 = VAR18;
            VAR24 = VAR22;
        }
    }
    for (VAR22 = VAR29, VAR17 = 0; VAR22 < VAR29 + VAR9; VAR22++)
        VAR17 += VAR2->VAR28[VAR22 - VAR24] * VAR2->VAR28[VAR22 - VAR24];
    for (VAR22 = VAR29, VAR18 = 0; VAR22 < VAR29 + VAR9; VAR22++)
        VAR18 += VAR2->VAR28[VAR22] * VAR2->VAR28[VAR22 - VAR24];
    if (VAR18 * VAR17 == 0 || VAR2->VAR33 == VAR34)
    {
        memcpy(VAR15, VAR2->VAR28 + VAR29, VAR9 * sizeof(float));
    }
    else
    {
        VAR19 = VAR18 / VAR17;
        if (VAR19 < 0.5)
            memcpy(VAR15, VAR2->VAR28 + VAR29, VAR9 * sizeof(float));
        else
        {
            VAR19 = FUN4(VAR19, 1.0);
            for (VAR22 = 0; VAR22 < VAR9; VAR22++)
            {
                VAR15[VAR22] = VAR2->VAR28[VAR29 + VAR22] + VAR19 * VAR8->VAR35 * VAR2->VAR28[VAR29 + VAR22 - VAR24];
            }
        }
    }
    memcpy(VAR13, VAR15, VAR9 * sizeof(float));
    memcpy(VAR16, VAR2->VAR36, VAR11 * sizeof(float));
    FUN6(VAR13, VAR12, VAR16, VAR9, VAR13);
    for (VAR22 = 0, VAR17 = 0, VAR18 = 0; VAR22 < VAR9; VAR22++)
    {
        VAR17 += VAR3[VAR22] * VAR3[VAR22];
        VAR18 += VAR13[VAR22] * VAR13[VAR22];
    }
    VAR20 = VAR18 ? FUN7(VAR17 / VAR18) : 1.0;
    for (VAR22 = 0; VAR22 < VAR9; VAR22++)
        VAR15[VAR22] *= VAR20;
    FUN6(VAR15, VAR12, VAR2->VAR36, VAR9, VAR5);
    memmove(VAR2->VAR28, VAR2->VAR28 + VAR9, VAR29 * sizeof(float));
}