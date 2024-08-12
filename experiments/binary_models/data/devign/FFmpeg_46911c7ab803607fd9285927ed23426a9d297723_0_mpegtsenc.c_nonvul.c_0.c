static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR4->VAR8];
    int VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR4->VAR12;
    VAR13 *VAR14 = VAR6->VAR15;
    int VAR16, VAR17;
    const VAR10 *VAR18 = NULL;
    const uint64_t VAR19 = FUN2(VAR2->VAR20, 90000, VAR21);
    if (VAR6->VAR22->VAR23 == VAR24)
    {
        FUN3(VAR2, VAR6, VAR11, VAR9, VAR4->VAR25, VAR26);
        return 0;
    }
    if (VAR6->VAR22->VAR27 == VAR28)
    {
        FUN3(VAR2, VAR6, VAR11, VAR9, VAR4->VAR25, VAR4->VAR29);
        return 0;
    }
    VAR17 = VAR30;
    if (VAR6->VAR22->VAR27 == VAR31 || VAR6->VAR22->VAR27 == VAR32)
    {
        const VAR10 *VAR33 = VAR4->VAR12;
        const VAR10 *VAR34 = VAR4->VAR12 + VAR4->VAR9;
        uint32_t VAR35 = -1;
        while (VAR33 < VAR34)
        {
            VAR33 = FUN4(VAR33, VAR34, &VAR35);
            if (VAR35 == VAR36)
            {
                VAR18 = VAR33 - 4;
                break;
            }
        }
    }
    else if (VAR6->VAR22->VAR23 == VAR37)
    {
        VAR18 = VAR4->VAR12;
    }
    if (!VAR18)
    {
        FUN5(VAR2, VAR38, "");
        return -1;
    }
    while (VAR9 > 0)
    {
        VAR16 = VAR17 - VAR14->VAR39;
        if (VAR16 > VAR9)
            VAR16 = VAR9;
        memcpy(VAR14->VAR40 + VAR14->VAR39, VAR11, VAR16);
        VAR11 += VAR16;
        VAR9 -= VAR16;
        VAR14->VAR39 += VAR16;
        if (VAR18 && VAR18 < VAR11 && VAR14->VAR41 == VAR26 && VAR14->VAR42 == VAR26)
        {
            VAR14->VAR42 = VAR4->VAR29 + VAR19;
            VAR14->VAR41 = VAR4->VAR25 + VAR19;
        }
        if (VAR14->VAR39 >= VAR17)
        {
            FUN3(VAR2, VAR6, VAR14->VAR40, VAR14->VAR39, VAR14->VAR41, VAR14->VAR42);
            VAR14->VAR41 = VAR26;
            VAR14->VAR42 = VAR26;
            VAR14->VAR39 = 0;
            VAR18 = NULL;
        }
    }
    return 0;
}