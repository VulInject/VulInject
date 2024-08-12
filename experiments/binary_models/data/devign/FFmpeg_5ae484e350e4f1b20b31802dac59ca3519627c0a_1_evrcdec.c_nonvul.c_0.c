static void FUN1(VAR1 *VAR2, float *VAR3)
{
    float VAR4[VAR5], VAR6[VAR5], VAR7[VAR8], VAR9[VAR10 + 6], VAR11;
    int VAR12, VAR13;
    for (VAR12 = 0; VAR12 < VAR5; VAR12++)
    {
        if (VAR2->VAR14 != VAR15)
            VAR2->VAR16[VAR12] = VAR2->VAR17[VAR12] * 0.875 + 0.125 * (VAR12 + 1) * 0.048;
        else
            VAR2->VAR16[VAR12] = VAR2->VAR17[VAR12];
    }
    if (VAR2->VAR18)
        VAR2->VAR19 *= 0.75;
    if (VAR2->VAR14 == VAR20)
        memcpy(VAR2->VAR21, VAR2->VAR22, VAR23 * sizeof(float));
    if (VAR2->VAR24 == VAR15)
        VAR2->VAR14 = VAR15;
    else
        VAR2->VAR14 = VAR20;
    if (VAR2->VAR14 == VAR20 || VAR2->VAR14 == VAR25)
    {
        VAR2->VAR26 = VAR2->VAR27;
    }
    else
    {
        float VAR28 = 0;
        VAR7[0] = VAR7[1] = VAR7[2] = VAR29;
        for (VAR12 = 0; VAR12 < VAR8; VAR12++)
            VAR28 += VAR30[VAR2->VAR31][VAR12];
        VAR28 /= (float)VAR8;
        VAR28 = FUN2(10, VAR28);
        for (VAR12 = 0; VAR12 < VAR8; VAR12++)
            VAR2->VAR32[VAR12] = VAR28;
    }
    if (FUN3(VAR2->VAR26 - VAR2->VAR27) > 15)
        VAR2->VAR27 = VAR2->VAR26;
    for (VAR12 = 0; VAR12 < VAR8; VAR12++)
    {
        int VAR33 = VAR34[VAR12];
        int VAR35;
        FUN4(VAR4, VAR2->VAR16, VAR2->VAR17, VAR12);
        if (VAR2->VAR14 != VAR15)
        {
            if (VAR2->VAR19 < 0.3)
            {
                VAR7[0] = VAR36[VAR12];
                VAR7[1] = VAR36[VAR12 + 1];
                VAR7[2] = VAR36[VAR12 + 2];
            }
            else
            {
                FUN5(VAR7, VAR2->VAR26, VAR2->VAR27, VAR12);
            }
        }
        VAR35 = FUN6((VAR7[1] + VAR7[0]) / 2.0);
        FUN7(VAR4, VAR6);
        if (VAR2->VAR14 != VAR15)
        {
            FUN8(VAR2, VAR2->VAR22 + VAR23, VAR2->VAR19, VAR7, VAR33);
            for (VAR13 = 0; VAR13 < VAR33; VAR13++)
                VAR2->VAR22[VAR23 + VAR13] *= VAR2->VAR37;
            VAR2->VAR37 = FUN9(VAR2->VAR37 - 0.05, 0.0);
        }
        else
        {
            for (VAR13 = 0; VAR13 < VAR33; VAR13++)
                VAR2->VAR22[VAR23 + VAR13] = VAR2->VAR32[VAR12];
        }
        memmove(VAR2->VAR22, VAR2->VAR22 + VAR33, VAR23 * sizeof(float));
        if (VAR2->VAR14 != VAR15 && VAR2->VAR19 < 0.4)
        {
            VAR11 = 0.1 * VAR2->VAR38;
            for (VAR13 = 0; VAR13 < VAR33; VAR13++)
                VAR2->VAR22[VAR23 + VAR13] += VAR11;
        }
        else if (VAR2->VAR14 == VAR15)
        {
            for (VAR13 = 0; VAR13 < VAR33; VAR13++)
                VAR2->VAR22[VAR23 + VAR13] = VAR2->VAR32[VAR12];
        }
        FUN10(VAR2->VAR22 + VAR23, VAR6, VAR2->VAR39, VAR33, VAR9);
        FUN11(VAR2, VAR9, VAR6, VAR3, VAR35, &VAR40[VAR2->VAR14], VAR33);
        VAR3 += VAR33;
    }
}