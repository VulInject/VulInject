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
    if (!VAR2->VAR24 && !VAR2->VAR12->VAR26 && !(VAR2->VAR12->VAR27->VAR28 & VAR29))
        FUN7(&VAR4->VAR16, VAR8);
    VAR2->VAR14 = VAR4;
    VAR2->VAR30 = *VAR2->VAR14;
    VAR2->VAR30.VAR16.VAR31 = VAR2->VAR30.VAR16.VAR32;
    FUN8(&VAR2->VAR33);
    assert(VAR2->VAR34 && VAR2->VAR35);
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR2->VAR36[VAR5] = (4 * ((VAR37[VAR5] - VAR37[0]) & 7) << VAR7) + 4 * VAR2->VAR34 * ((VAR37[VAR5] - VAR37[0]) >> 3);
        VAR2->VAR36[48 + VAR5] = (4 * ((VAR37[VAR5] - VAR37[0]) & 7) << VAR7) + 8 * VAR2->VAR34 * ((VAR37[VAR5] - VAR37[0]) >> 3);
    }
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR2->VAR36[16 + VAR5] = VAR2->VAR36[32 + VAR5] = (4 * ((VAR37[VAR5] - VAR37[0]) & 7) << VAR7) + 4 * VAR2->VAR35 * ((VAR37[VAR5] - VAR37[0]) >> 3);
        VAR2->VAR36[48 + 16 + VAR5] = VAR2->VAR36[48 + 32 + VAR5] = (4 * ((VAR37[VAR5] - VAR37[0]) & 7) << VAR7) + 8 * VAR2->VAR35 * ((VAR37[VAR5] - VAR37[0]) >> 3);
    }
    memset(VAR2->VAR38, -1, (VAR2->VAR39 * VAR2->VAR40 - 1) * sizeof(*VAR2->VAR38));
    if (VAR2->VAR12->VAR41 != VAR42)
        VAR2->VAR14->VAR16.VAR17 = 0;
    VAR2->VAR14->VAR43[0] = VAR2->VAR14->VAR43[1] = VAR44;
    VAR2->VAR45 = NULL;
    assert(VAR2->VAR14->VAR46 == 0);
    return 0;
}