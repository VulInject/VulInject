static void FUN1(VAR1 *VAR2, VAR3 *VAR4, float VAR5)
{
    VAR6 *VAR7 = &VAR4->VAR7;
    float *VAR8 = VAR4->VAR9;
    float *VAR10 = VAR4->VAR11;
    float *VAR12 = VAR4->VAR12;
    const float *VAR13 = VAR7->VAR14[0] ? VAR15 : VAR16;
    const float *VAR17 = VAR7->VAR14[1] ? VAR18 : VAR19;
    const float *VAR20 = VAR7->VAR14[1] ? VAR15 : VAR16;
    float *VAR21 = VAR2->VAR22;
    float *VAR23 = VAR2->VAR23;
    int VAR24;
    if (VAR7->VAR25[0] == VAR26)
    {
        if (VAR7->VAR25[1] == VAR27 || VAR7->VAR25[1] == VAR28)
            FUN2(VAR2->VAR29, VAR30, ""
                                              "");
        for (VAR24 = 0; VAR24 < 1024; VAR24 += 128)
            FUN3(&VAR2->VAR31, VAR21 + VAR24, VAR8 + VAR24);
    }
    else
        FUN3(&VAR2->VAR32, VAR21, VAR8);
    if ((VAR7->VAR25[1] == VAR27 || VAR7->VAR25[1] == VAR28) && (VAR7->VAR25[0] == VAR27 || VAR7->VAR25[0] == VAR33))
    {
        VAR2->VAR34.FUN4(VAR10, VAR12, VAR21, VAR17, VAR5, 512);
    }
    else
    {
        for (VAR24 = 0; VAR24 < 448; VAR24++)
            VAR10[VAR24] = VAR12[VAR24] + VAR5;
        if (VAR7->VAR25[0] == VAR26)
        {
            VAR2->VAR34.FUN4(VAR10 + 448 + 0 * 128, VAR12 + 448, VAR21 + 0 * 128, VAR20, VAR5, 64);
            VAR2->VAR34.FUN4(VAR10 + 448 + 1 * 128, VAR21 + 0 * 128 + 64, VAR21 + 1 * 128, VAR13, VAR5, 64);
            VAR2->VAR34.FUN4(VAR10 + 448 + 2 * 128, VAR21 + 1 * 128 + 64, VAR21 + 2 * 128, VAR13, VAR5, 64);
            VAR2->VAR34.FUN4(VAR10 + 448 + 3 * 128, VAR21 + 2 * 128 + 64, VAR21 + 3 * 128, VAR13, VAR5, 64);
            VAR2->VAR34.FUN4(VAR23, VAR21 + 3 * 128 + 64, VAR21 + 4 * 128, VAR13, VAR5, 64);
            memcpy(VAR10 + 448 + 4 * 128, VAR23, 64 * sizeof(float));
        }
        else
        {
            VAR2->VAR34.FUN4(VAR10 + 448, VAR12 + 448, VAR21, VAR20, VAR5, 64);
            for (VAR24 = 576; VAR24 < 1024; VAR24++)
                VAR10[VAR24] = VAR21[VAR24 - 512] + VAR5;
        }
    }
    if (VAR7->VAR25[0] == VAR26)
    {
        for (VAR24 = 0; VAR24 < 64; VAR24++)
            VAR12[VAR24] = VAR23[64 + VAR24] - VAR5;
        VAR2->VAR34.FUN4(VAR12 + 64, VAR21 + 4 * 128 + 64, VAR21 + 5 * 128, VAR13, 0, 64);
        VAR2->VAR34.FUN4(VAR12 + 192, VAR21 + 5 * 128 + 64, VAR21 + 6 * 128, VAR13, 0, 64);
        VAR2->VAR34.FUN4(VAR12 + 320, VAR21 + 6 * 128 + 64, VAR21 + 7 * 128, VAR13, 0, 64);
        memcpy(VAR12 + 448, VAR21 + 7 * 128 + 64, 64 * sizeof(float));
    }
    else if (VAR7->VAR25[0] == VAR33)
    {
        memcpy(VAR12, VAR21 + 512, 448 * sizeof(float));
        memcpy(VAR12 + 448, VAR21 + 7 * 128 + 64, 64 * sizeof(float));
    }
    else
    {
        memcpy(VAR12, VAR21 + 512, 512 * sizeof(float));
    }
}