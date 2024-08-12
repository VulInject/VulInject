static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    int64_t VAR8 = 0;
    int64_t VAR9 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
    {
        int64_t VAR11 = 0;
        VAR12 *VAR13 = VAR2->VAR14[VAR6];
        if (!VAR13->VAR15)
            continue;
        for (VAR7 = 0; VAR7 < VAR13->VAR15; VAR7++)
            VAR11 += VAR13->VAR16[VAR7].VAR17;
        VAR9 = FUN2(VAR9, VAR13->VAR16[VAR7 - 1].VAR18);
        VAR8 += VAR11;
    }
    if (VAR9 < VAR4->VAR19 * 9 / 10)
        return 0;
    if (VAR8 * 9 / 10 > VAR9 || VAR8 < VAR9 * 9 / 10)
        return 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
    {
        int64_t VAR11 = 0;
        VAR12 *VAR13 = VAR2->VAR14[VAR6];
        int64_t VAR20;
        for (VAR7 = 0; VAR7 < VAR13->VAR15; VAR7++)
            VAR11 += VAR13->VAR16[VAR7].VAR17;
        if (VAR13->VAR15 < 2 || VAR13->VAR21->VAR22 > 0)
            continue;
        VAR20 = VAR13->VAR16[VAR7 - 1].VAR23 - VAR13->VAR16[0].VAR23;
        VAR13->VAR21->VAR22 = FUN3(8 * VAR11, VAR13->VAR24.VAR25, VAR20 * VAR13->VAR24.VAR26);
    }
    return 1;
}