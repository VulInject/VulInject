static float FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, float *VAR8, float VAR9)
{
    int VAR10, VAR11 = 0;
    uint32_t VAR12[2] = {(1 << VAR4->VAR13) - 1, (1 << VAR4->VAR13) - 1};
    const int VAR14 = VAR15[VAR7] << VAR4->VAR16;
    float VAR17[176 * 2], VAR18[176], VAR19[176], VAR20[176];
    float VAR21, VAR22, VAR23 = 0.0f, VAR24 = 0.0f;
    float *VAR25 = VAR17;
    float *VAR26 = VAR4->VAR27[0].VAR28 + (VAR29[VAR7] << VAR4->VAR16);
    float *VAR30 = (VAR4->VAR31 == 2) ? &VAR17[176] : NULL;
    float *VAR32 = VAR4->VAR27[1].VAR28 + (VAR29[VAR7] << VAR4->VAR16);
    FUN2(VAR6);
    memcpy(VAR25, VAR26, VAR14 * sizeof(float));
    if (VAR30)
        memcpy(VAR30, VAR32, VAR14 * sizeof(float));
    VAR4->VAR33 = ((VAR4->VAR34 << 3) - VAR4->VAR35) - FUN3(VAR6) - 1;
    if (VAR7 <= VAR4->VAR36 - 1)
    {
        int VAR37 = VAR4->VAR38 / FUN4(3, VAR4->VAR36 - VAR7);
        VAR11 = FUN5(FUN4(VAR4->VAR33 + 1, VAR4->VAR39[VAR7] + VAR37), 14);
    }
    if (VAR4->VAR40)
    {
        VAR2->FUN6(VAR2, VAR4, VAR6, VAR7, VAR25, NULL, VAR14, VAR11 / 2, VAR4->VAR13, NULL, VAR4->VAR16, VAR19, 0, 1.0f, VAR18, VAR12[0]);
        VAR2->FUN6(VAR2, VAR4, VAR6, VAR7, VAR30, NULL, VAR14, VAR11 / 2, VAR4->VAR13, NULL, VAR4->VAR16, VAR20, 0, 1.0f, VAR18, VAR12[1]);
    }
    else
    {
        VAR2->FUN6(VAR2, VAR4, VAR6, VAR7, VAR25, VAR30, VAR14, VAR11, VAR4->VAR13, NULL, VAR4->VAR16, VAR19, 0, 1.0f, VAR18, VAR12[0] | VAR12[1]);
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR23 += (VAR25[VAR10] - VAR26[VAR10]) * (VAR25[VAR10] - VAR26[VAR10]);
        VAR24 += (VAR30[VAR10] - VAR32[VAR10]) * (VAR30[VAR10] - VAR32[VAR10]);
    }
    VAR21 = FUN7(VAR23) + FUN7(VAR24);
    VAR22 = FUN8(VAR6) / 8.0f;
    *VAR8 += VAR22;
    FUN9(VAR6);
    return VAR9 * VAR21 * VAR22;
}