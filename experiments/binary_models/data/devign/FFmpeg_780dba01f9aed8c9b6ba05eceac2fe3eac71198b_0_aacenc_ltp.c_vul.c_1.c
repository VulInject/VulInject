void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    float VAR8, VAR9, VAR10, VAR11 = 0.0f;
    float *VAR12 = &VAR2->VAR13[VAR2->VAR14][1024];
    float *VAR15 = &VAR4->VAR16[0];
    int VAR17 = 2048;
    if (VAR2->VAR18 != VAR19)
        return;
    for (VAR5 = 0; VAR5 < VAR17; VAR5++)
    {
        VAR9 = VAR10 = 0.0f;
        for (VAR6 = 0; VAR6 < VAR17; VAR6++)
        {
            if (VAR6 + 1024 < VAR5)
                continue;
            VAR9 += VAR12[VAR6] * VAR15[VAR6 - VAR5 + 1024];
            VAR10 += VAR15[VAR6 - VAR5 + 1024] * VAR15[VAR6 - VAR5 + 1024];
        }
        VAR8 = VAR10 > 0.0f ? VAR9 / FUN2(VAR10) : 0.0f;
        if (VAR8 > VAR11)
        {
            VAR11 = VAR8;
            VAR7 = VAR5;
        }
    }
    VAR7 = FUN3(VAR7, 0, 2048);
    if (!VAR7)
    {
        VAR4->VAR20.VAR21.VAR7 = VAR7;
        return;
    }
    VAR9 = VAR10 = 0.0f;
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        VAR9 += VAR12[VAR5];
        VAR10 += VAR15[VAR5 - VAR7 + 1024];
    }
    VAR4->VAR20.VAR21.VAR22 = FUN4(VAR9 / VAR10, VAR23, 8);
    VAR4->VAR20.VAR21.VAR24 = VAR23[VAR4->VAR20.VAR21.VAR22];
    if (VAR7 < 1024)
        VAR17 = VAR7 + 1024;
    for (VAR5 = 0; VAR5 < VAR17; VAR5++)
        VAR15[VAR5 + 1024] = VAR4->VAR20.VAR21.VAR24 * VAR15[VAR5 - VAR7 + 1024];
    memset(&VAR15[VAR17], 0, (2048 - VAR17) * sizeof(float));
    VAR4->VAR20.VAR21.VAR7 = VAR7;
}