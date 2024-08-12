static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = 1 << VAR2->VAR6.VAR7;
    int VAR8[2];
    VAR2->VAR9 = VAR2->VAR10;
    if (VAR2->VAR11 < VAR2->VAR12)
        VAR2->VAR9 += VAR5;
    if (VAR2->VAR6.VAR13 == 0)
    {
        const int VAR14 = 1 << VAR2->VAR6.VAR15;
        if (VAR2->VAR16 < VAR2->VAR17 && VAR2->VAR17 - VAR2->VAR16 >= VAR14 / 2)
            VAR2->VAR18 = VAR2->VAR19 + VAR14;
        else if (VAR2->VAR16 > VAR2->VAR17 && VAR2->VAR17 - VAR2->VAR16 < -VAR14 / 2)
            VAR2->VAR18 = VAR2->VAR19 - VAR14;
        else
            VAR2->VAR18 = VAR2->VAR19;
        VAR8[0] = VAR8[1] = VAR2->VAR18 + VAR2->VAR16;
        if (VAR4->VAR20 == VAR21)
            VAR8[1] += VAR2->VAR22;
    }
    else if (VAR2->VAR6.VAR13 == 1)
    {
        int VAR23, VAR24, VAR25;
        int VAR26;
        if (VAR2->VAR6.VAR27 != 0)
            VAR23 = VAR2->VAR9 + VAR2->VAR11;
        else
            VAR23 = 0;
        if (VAR2->VAR28 == 0 && VAR23 > 0)
            VAR23--;
        VAR24 = 0;
        for (VAR26 = 0; VAR26 < VAR2->VAR6.VAR27; VAR26++)
            VAR24 += VAR2->VAR6.VAR29[VAR26];
        if (VAR23 > 0)
        {
            int VAR30 = (VAR23 - 1) / VAR2->VAR6.VAR27;
            int VAR31 = (VAR23 - 1) % VAR2->VAR6.VAR27;
            VAR25 = VAR30 * VAR24;
            for (VAR26 = 0; VAR26 <= VAR31; VAR26++)
                VAR25 = VAR25 + VAR2->VAR6.VAR29[VAR26];
        }
        else
            VAR25 = 0;
        if (VAR2->VAR28 == 0)
            VAR25 = VAR25 + VAR2->VAR6.VAR32;
        VAR8[0] = VAR25 + VAR2->VAR33[0];
        VAR8[1] = VAR8[0] + VAR2->VAR6.VAR34;
        if (VAR4->VAR20 == VAR21)
            VAR8[1] += VAR2->VAR33[1];
    }
    else
    {
        int VAR35 = 2 * (VAR2->VAR9 + VAR2->VAR11);
        if (!VAR2->VAR28)
            VAR35--;
        VAR8[0] = VAR35;
        VAR8[1] = VAR35;
    }
    if (VAR4->VAR20 != VAR36)
    {
        VAR4->VAR37->VAR8[0] = VAR8[0];
        VAR4->VAR37->VAR35 = VAR8[0];
    }
    if (VAR4->VAR20 != VAR38)
    {
        VAR4->VAR37->VAR8[1] = VAR8[1];
        VAR4->VAR37->VAR35 = VAR8[1];
    }
    if (!VAR39 || !VAR4->VAR40)
    {
        VAR41 *VAR42 = VAR4->VAR37;
        VAR42->VAR35 = FUN2(VAR42->VAR8[0], VAR42->VAR8[1]);
    }
    return 0;
}