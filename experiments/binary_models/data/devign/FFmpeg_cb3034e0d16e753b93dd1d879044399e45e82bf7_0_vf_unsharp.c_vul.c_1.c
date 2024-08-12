static void FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9)
{
    VAR10 **VAR11 = VAR9->VAR11;
    uint32_t VAR12[(VAR13 * VAR13) - 1], VAR14, VAR15;
    int32_t VAR16;
    int VAR17, VAR18, VAR19;
    const VAR1 *VAR20;
    if (!VAR9->VAR21)
    {
        if (VAR3 == VAR5)
            memcpy(VAR2, VAR4, VAR5 * VAR7);
        else
            for (VAR18 = 0; VAR18 < VAR7; VAR18++, VAR2 += VAR3, VAR4 += VAR5)
                memcpy(VAR2, VAR4, VAR6);
        return;
    }
    for (VAR18 = 0; VAR18 < 2 * VAR9->VAR22; VAR18++)
        memset(VAR11[VAR18], 0, sizeof(VAR11[VAR18][0]) * (VAR6 + 2 * VAR9->VAR23));
    for (VAR18 = -VAR9->VAR22; VAR18 < VAR7 + VAR9->VAR22; VAR18++)
    {
        if (VAR18 < VAR7)
            VAR20 = VAR4;
        memset(VAR12, 0, sizeof(VAR12[0]) * (2 * VAR9->VAR23 - 1));
        for (VAR17 = -VAR9->VAR23; VAR17 < VAR6 + VAR9->VAR23; VAR17++)
        {
            VAR14 = VAR17 <= 0 ? VAR20[0] : VAR17 >= VAR6 ? VAR20[VAR6 - 1]
                                                 : VAR20[VAR17];
            for (VAR19 = 0; VAR19 < VAR9->VAR23 * 2; VAR19 += 2)
            {
                VAR15 = VAR12[VAR19 + 0] + VAR14;
                VAR12[VAR19 + 0] = VAR14;
                VAR14 = VAR12[VAR19 + 1] + VAR15;
                VAR12[VAR19 + 1] = VAR15;
            }
            for (VAR19 = 0; VAR19 < VAR9->VAR22 * 2; VAR19 += 2)
            {
                VAR15 = VAR11[VAR19 + 0][VAR17 + VAR9->VAR23] + VAR14;
                VAR11[VAR19 + 0][VAR17 + VAR9->VAR23] = VAR14;
                VAR14 = VAR11[VAR19 + 1][VAR17 + VAR9->VAR23] + VAR15;
                VAR11[VAR19 + 1][VAR17 + VAR9->VAR23] = VAR15;
            }
            if (VAR17 >= VAR9->VAR23 && VAR18 >= VAR9->VAR22)
            {
                const VAR1 *VAR24 = VAR4 - VAR9->VAR22 * VAR5 + VAR17 - VAR9->VAR23;
                VAR1 *VAR25 = VAR2 - VAR9->VAR22 * VAR3 + VAR17 - VAR9->VAR23;
                VAR16 = (VAR26)*VAR24 + ((((VAR26)*VAR24 - (VAR26)((VAR14 + VAR9->VAR27) >> VAR9->VAR28)) * VAR9->VAR21) >> 16);
                *VAR25 = FUN2(VAR16);
            }
        }
        if (VAR18 >= 0)
        {
            VAR2 += VAR3;
            VAR4 += VAR5;
        }
    }
}