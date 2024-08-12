void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    float VAR9, VAR10, VAR11;
    float *VAR12 = &VAR4->VAR13[0];
    const float *VAR14 = &VAR2->VAR15[VAR2->VAR16][1024];
    if (VAR2->VAR17 != VAR18)
        return;
    VAR11 = 0.0f;
    for (VAR5 = 0; VAR5 < 2048; VAR5++)
    {
        float VAR19 = 0.0f, VAR20 = 0.0f;
        const int VAR21 = FUN2(0, VAR5 - 1024);
        for (VAR6 = VAR21; VAR6 < 2048; VAR6++)
        {
            const int VAR22 = VAR6 - VAR5 + 1024;
            VAR19 += VAR14[VAR6] * VAR12[VAR22];
            VAR20 += VAR12[VAR22] * VAR12[VAR22];
        }
        VAR9 = VAR20 > 0.0f ? VAR19 / FUN3(VAR20) : 0.0f;
        if (VAR9 > VAR11)
        {
            VAR11 = VAR9;
            VAR7 = VAR5;
            VAR10 = VAR9 / (2048 - VAR21);
        }
    }
    if (VAR7 < 1)
        return;
    VAR4->VAR23.VAR24.VAR7 = VAR7 = FUN4(VAR7, 11);
    VAR4->VAR23.VAR24.VAR25 = FUN5(VAR10, VAR26, 8);
    VAR4->VAR23.VAR24.VAR27 = VAR26[VAR4->VAR23.VAR24.VAR25];
    VAR8 = 1024 + (VAR7 < 1024 ? VAR7 : 1024);
    for (VAR5 = 1024; VAR5 < VAR8 + 1024; VAR5++)
        VAR12[VAR5] = VAR4->VAR23.VAR24.VAR27 * VAR12[VAR5 - VAR7];
    memset(&VAR12[VAR8], 0, (2048 - VAR8) * sizeof(float));
}