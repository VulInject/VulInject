static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11)
{
    const int VAR12 = VAR6->VAR13;
    const int VAR14 = FUN2(VAR2->VAR14 + VAR6->VAR14, 0, VAR15 * 16);
    const int VAR16 = VAR17[VAR14 & (VAR15 - 1)] << (VAR14 >> VAR18);
    const int VAR19 = (VAR2->VAR20 * VAR16) >> VAR21;
    int VAR22, VAR23;
    if (VAR2->VAR14 == VAR24)
        return;
    for (VAR23 = VAR10; VAR23 < VAR11; VAR23++)
    {
        VAR7 *VAR25 = FUN3(VAR4, (VAR23 * VAR6->VAR26) + VAR6->VAR27) + VAR6->VAR28;
        for (VAR22 = 0; VAR22 < VAR12; VAR22++)
        {
            int VAR29 = VAR25[VAR22];
            if (VAR29 < 0)
            {
                VAR25[VAR22] = -((-VAR29 * VAR16 + VAR19) >> (VAR30));
            }
            else if (VAR29 > 0)
            {
                VAR25[VAR22] = ((VAR29 * VAR16 + VAR19) >> (VAR30));
            }
        }
    }
}