int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    const int VAR7 = VAR2->VAR7;
    int VAR8[4] = {1 << (VAR2->VAR9.VAR10 - 1), 1 << (VAR2->VAR9.VAR11 - 1), 1 << (VAR2->VAR9.VAR11 - 1), -1};
    if (!FUN2(VAR2->VAR12))
    {
        FUN3(VAR2->VAR12, VAR13, "");
        return -1;
    }
    FUN4(VAR2, 1);
    VAR2->VAR14 = NULL;
    VAR5 = FUN5(VAR2);
    if (VAR5 < 0)
    {
        FUN3(VAR2->VAR12, VAR13, "");
        return VAR5;
    }
    VAR4 = &VAR2->VAR15[VAR5];
    VAR4->VAR16.VAR17 = VAR2->VAR18 ? 0 : VAR2->VAR19;
    VAR4->VAR16.VAR20 = VAR2->VAR20++;
    VAR4->VAR21 = VAR2->VAR19 != VAR22;
    VAR4->VAR16.VAR23 = 0;
    VAR4->VAR24 = 0;
    VAR4->VAR25 = 0;
    if ((VAR6 = FUN6(VAR2, VAR4)) < 0)
        return VAR6;
    if (!VAR2->VAR24 && !VAR2->VAR12->VAR26)
        FUN7(&VAR4->VAR16, VAR8);
    VAR2->VAR14 = VAR4;
    VAR2->VAR27 = *VAR2->VAR14;
    VAR2->VAR27.VAR16.VAR28 = VAR2->VAR27.VAR16.VAR29;
    FUN8(&VAR2->VAR30);
    assert(VAR2->VAR31 && VAR2->VAR32);
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR2->VAR33[VAR5] = (4 * ((VAR34[VAR5] - VAR34[0]) & 7) << VAR7) + 4 * VAR2->VAR31 * ((VAR34[VAR5] - VAR34[0]) >> 3);
        VAR2->VAR33[48 + VAR5] = (4 * ((VAR34[VAR5] - VAR34[0]) & 7) << VAR7) + 8 * VAR2->VAR31 * ((VAR34[VAR5] - VAR34[0]) >> 3);
    }
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR2->VAR33[16 + VAR5] = VAR2->VAR33[32 + VAR5] = (4 * ((VAR34[VAR5] - VAR34[0]) & 7) << VAR7) + 4 * VAR2->VAR32 * ((VAR34[VAR5] - VAR34[0]) >> 3);
        VAR2->VAR33[48 + 16 + VAR5] = VAR2->VAR33[48 + 32 + VAR5] = (4 * ((VAR34[VAR5] - VAR34[0]) & 7) << VAR7) + 8 * VAR2->VAR32 * ((VAR34[VAR5] - VAR34[0]) >> 3);
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR35; VAR5++)
        if (VAR2->VAR36[VAR5])
        {
            VAR6 = FUN9(VAR2->VAR36[VAR5], VAR2->VAR31);
            if (VAR6 < 0)
                return VAR6;
        }
    memset(VAR2->VAR37, -1, (VAR2->VAR38 * VAR2->VAR39 - 1) * sizeof(*VAR2->VAR37));
    if (VAR2->VAR12->VAR40 != VAR41)
        VAR2->VAR14->VAR16.VAR17 = 0;
    VAR2->VAR14->VAR42[0] = VAR2->VAR14->VAR42[1] = VAR43;
    VAR2->VAR44 = NULL;
    assert(VAR2->VAR14->VAR45 == 0);
    return 0;
}