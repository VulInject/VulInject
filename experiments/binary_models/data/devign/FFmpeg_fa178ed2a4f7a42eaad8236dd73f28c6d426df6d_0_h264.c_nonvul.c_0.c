static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = 1 << VAR2->VAR6.VAR7;
    int VAR8[2];
    if (VAR2->VAR9 == VAR10)
    {
        VAR2->VAR11 = 0;
    }
    else
    {
        if (VAR2->VAR12 < VAR2->VAR13)
            VAR2->VAR11 = VAR2->VAR14 + VAR5;
        else
            VAR2->VAR11 = VAR2->VAR14;
    }
    if (VAR2->VAR6.VAR15 == 0)
    {
        const int VAR16 = 1 << VAR2->VAR6.VAR17;
        if (VAR2->VAR9 == VAR10)
        {
            VAR2->VAR18 = VAR2->VAR19 = 0;
        }
        if (VAR2->VAR20 < VAR2->VAR19 && VAR2->VAR19 - VAR2->VAR20 >= VAR16 / 2)
            VAR2->VAR21 = VAR2->VAR18 + VAR16;
        else if (VAR2->VAR20 > VAR2->VAR19 && VAR2->VAR19 - VAR2->VAR20 < -VAR16 / 2)
            VAR2->VAR21 = VAR2->VAR18 - VAR16;
        else
            VAR2->VAR21 = VAR2->VAR18;
        VAR8[0] = VAR8[1] = VAR2->VAR21 + VAR2->VAR20;
        if (VAR4->VAR22 == VAR23)
            VAR8[1] += VAR2->VAR24;
    }
    else if (VAR2->VAR6.VAR15 == 1)
    {
        int VAR25, VAR26, VAR27;
        int VAR28;
        if (VAR2->VAR6.VAR29 != 0)
            VAR25 = VAR2->VAR11 + VAR2->VAR12;
        else
            VAR25 = 0;
        if (VAR2->VAR30 == 0 && VAR25 > 0)
            VAR25--;
        VAR26 = 0;
        for (VAR28 = 0; VAR28 < VAR2->VAR6.VAR29; VAR28++)
            VAR26 += VAR2->VAR6.VAR31[VAR28];
        if (VAR25 > 0)
        {
            int VAR32 = (VAR25 - 1) / VAR2->VAR6.VAR29;
            int VAR33 = (VAR25 - 1) % VAR2->VAR6.VAR29;
            VAR27 = VAR32 * VAR26;
            for (VAR28 = 0; VAR28 <= VAR33; VAR28++)
                VAR27 = VAR27 + VAR2->VAR6.VAR31[VAR28];
        }
        else
            VAR27 = 0;
        if (VAR2->VAR30 == 0)
            VAR27 = VAR27 + VAR2->VAR6.VAR34;
        VAR8[0] = VAR27 + VAR2->VAR35[0];
        VAR8[1] = VAR8[0] + VAR2->VAR6.VAR36;
        if (VAR4->VAR22 == VAR23)
            VAR8[1] += VAR2->VAR35[1];
    }
    else
    {
        int VAR37;
        if (VAR2->VAR9 == VAR10)
        {
            VAR37 = 0;
        }
        else
        {
            if (VAR2->VAR30)
                VAR37 = 2 * (VAR2->VAR11 + VAR2->VAR12);
            else
                VAR37 = 2 * (VAR2->VAR11 + VAR2->VAR12) - 1;
        }
        VAR8[0] = VAR37;
        VAR8[1] = VAR37;
    }
    if (VAR4->VAR22 != VAR38)
    {
        VAR4->VAR39->VAR8[0] = VAR8[0];
        VAR4->VAR39->VAR37 = VAR8[0];
    }
    if (VAR4->VAR22 != VAR40)
    {
        VAR4->VAR39->VAR8[1] = VAR8[1];
        VAR4->VAR39->VAR37 = VAR8[1];
    }
    if (!VAR41 || !VAR4->VAR42)
        VAR4->VAR39->VAR37 = FUN2(VAR8[0], VAR8[1]);
    return 0;
}