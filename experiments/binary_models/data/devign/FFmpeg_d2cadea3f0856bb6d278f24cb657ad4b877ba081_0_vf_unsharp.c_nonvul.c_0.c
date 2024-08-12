static void FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9)
{
    VAR10 **VAR11 = VAR9->VAR11;
    uint32_t VAR12[VAR13 - 1], VAR14, VAR15;
    int32_t VAR16;
    int VAR17, VAR18, VAR19;
    const VAR1 *VAR20 = NULL;
    const int VAR21 = VAR9->VAR21;
    const int VAR22 = VAR9->VAR22;
    const int VAR23 = VAR9->VAR23;
    const int VAR24 = VAR9->VAR24;
    const int32_t VAR25 = VAR9->VAR25;
    if (!VAR21)
    {
        if (VAR3 == VAR5)
            memcpy(VAR2, VAR4, VAR5 * VAR7);
        else
            for (VAR18 = 0; VAR18 < VAR7; VAR18++, VAR2 += VAR3, VAR4 += VAR5)
                memcpy(VAR2, VAR4, VAR6);
        return;
    }
    for (VAR18 = 0; VAR18 < 2 * VAR23; VAR18++)
        memset(VAR11[VAR18], 0, sizeof(VAR11[VAR18][0]) * (VAR6 + 2 * VAR22));
    for (VAR18 = -VAR23; VAR18 < VAR7 + VAR23; VAR18++)
    {
        if (VAR18 < VAR7)
            VAR20 = VAR4;
        memset(VAR12, 0, sizeof(VAR12[0]) * (2 * VAR22 - 1));
        for (VAR17 = -VAR22; VAR17 < VAR6 + VAR22; VAR17++)
        {
            VAR14 = VAR17 <= 0 ? VAR20[0] : VAR17 >= VAR6 ? VAR20[VAR6 - 1]
                                                 : VAR20[VAR17];
            for (VAR19 = 0; VAR19 < VAR22 * 2; VAR19 += 2)
            {
                VAR15 = VAR12[VAR19 + 0] + VAR14;
                VAR12[VAR19 + 0] = VAR14;
                VAR14 = VAR12[VAR19 + 1] + VAR15;
                VAR12[VAR19 + 1] = VAR15;
            }
            for (VAR19 = 0; VAR19 < VAR23 * 2; VAR19 += 2)
            {
                VAR15 = VAR11[VAR19 + 0][VAR17 + VAR22] + VAR14;
                VAR11[VAR19 + 0][VAR17 + VAR22] = VAR14;
                VAR14 = VAR11[VAR19 + 1][VAR17 + VAR22] + VAR15;
                VAR11[VAR19 + 1][VAR17 + VAR22] = VAR15;
            }
            if (VAR17 >= VAR22 && VAR18 >= VAR23)
            {
                const VAR1 *VAR26 = VAR4 - VAR23 * VAR5 + VAR17 - VAR22;
                VAR1 *VAR27 = VAR2 - VAR23 * VAR3 + VAR17 - VAR22;
                VAR16 = (VAR28)*VAR26 + ((((VAR28)*VAR26 - (VAR28)((VAR14 + VAR25) >> VAR24)) * VAR21) >> 16);
                *VAR27 = FUN2(VAR16);
            }
        }
        if (VAR18 >= 0)
        {
            VAR2 += VAR3;
            VAR4 += VAR5;
        }
    }
}