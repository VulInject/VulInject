static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR3;
    VAR11 *VAR12 = VAR10->VAR12, *VAR13 = VAR10->VAR13;
    int VAR14 = VAR4;
    int *write = &VAR10->write[VAR4];
    const int *const VAR15 = VAR10->VAR15[VAR4];
    const float *const VAR16 = VAR10->VAR16[VAR4];
    int *VAR17 = &VAR10->VAR17[VAR4];
    float *VAR18 = VAR10->VAR18[VAR4];
    float *VAR19 = VAR10->VAR19[VAR4];
    const int VAR20 = VAR7->VAR21.VAR20;
    const float *VAR22 = (const float *)VAR12->VAR23[0];
    float *VAR24 = (float *)VAR13->VAR23[0];
    const int VAR25 = VAR7->VAR26;
    const int VAR27 = VAR7->VAR27;
    const uint32_t VAR28 = (VAR29)VAR27 - 1;
    float *VAR30[16];
    int VAR31 = *write;
    int read;
    int VAR32, VAR33;
    VAR24 += VAR14;
    for (VAR33 = 0; VAR33 < VAR25; VAR33++)
    {
        VAR30[VAR33] = VAR18 + VAR33 * VAR27;
    }
    for (VAR32 = 0; VAR32 < VAR12->VAR34; VAR32++)
    {
        const float *VAR35 = VAR16;
        *VAR24 = 0;
        for (VAR33 = 0; VAR33 < VAR25; VAR33++)
        {
            *(VAR30[VAR33] + VAR31) = VAR22[VAR33];
        }
        for (VAR33 = 0; VAR33 < VAR25; VAR33++)
        {
            const float *const VAR36 = VAR30[VAR33];
            if (VAR33 == VAR7->VAR37)
            {
                *VAR24 += *(VAR30[VAR7->VAR37] + VAR31) * VAR7->VAR38;
                VAR35 += VAR20;
                continue;
            }
            read = (VAR31 - *(VAR15 + VAR33) - (VAR20 - 1) + VAR27) & VAR28;
            if (read + VAR20 < VAR27)
            {
                memcpy(VAR19, VAR36 + read, VAR20 * sizeof(*VAR19));
            }
            else
            {
                int VAR39 = FUN2(VAR20 - (read % VAR20), VAR27 - read);
                memcpy(VAR19, VAR36 + read, VAR39 * sizeof(*VAR19));
                memcpy(VAR19 + VAR39, VAR36, (VAR20 - VAR39) * sizeof(*VAR19));
            }
            VAR24[0] += VAR7->VAR40->FUN3(VAR35, VAR19, VAR20);
            VAR35 += VAR20;
        }
        if (FUN4(*VAR24) > 1)
            *VAR17 += 1;
        VAR24 += 2;
        VAR22 += VAR25;
        VAR31 = (VAR31 + 1) & VAR28;
    }
    *write = VAR31;
    return 0;
}