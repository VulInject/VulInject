static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int64_t VAR4 = 0;
    int64_t VAR5 = VAR6;
    int64_t VAR7 = FUN2(VAR2->VAR8);
    int *VAR9;
    int64_t VAR10, VAR11;
    for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++)
    {
        VAR13 *VAR14 = VAR2->VAR15[VAR3];
        int VAR16 = VAR14->VAR17;
        unsigned int VAR18;
        if (VAR16 <= 0)
            continue;
        if (VAR16 >= 2)
        {
            int64_t VAR11 = VAR14->VAR19[0].VAR11;
            FUN3(VAR2->VAR8, VAR11 + 4, VAR20);
            VAR18 = FUN4(VAR2->VAR8);
            if (VAR11 + VAR18 > VAR14->VAR19[1].VAR11)
                VAR4 = VAR6;
        }
        if (VAR14->VAR19[0].VAR11 > VAR4)
            VAR4 = VAR14->VAR19[0].VAR11;
        if (VAR14->VAR19[VAR16 - 1].VAR11 < VAR5)
            VAR5 = VAR14->VAR19[VAR16 - 1].VAR11;
    }
    FUN3(VAR2->VAR8, VAR7, VAR20);
    if (VAR4 > VAR5)
        return 1;
    VAR9 = FUN5(VAR2->VAR12, sizeof(*VAR9));
    if (!VAR9)
        return 0;
    for (VAR10 = VAR11 = 0; VAR10 != VAR6; VAR11 = VAR10 + 1LU)
    {
        int64_t VAR21 = VAR22 / 2, VAR23 = VAR6 / 2;
        int64_t VAR24 = 0;
        VAR10 = VAR6;
        for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++)
        {
            VAR13 *VAR14 = VAR2->VAR15[VAR3];
            VAR25 *VAR26 = VAR14->VAR27;
            int VAR16 = VAR14->VAR17;
            while (VAR9[VAR3] < VAR16 && VAR14->VAR19[VAR9[VAR3]].VAR11 < VAR11)
                VAR9[VAR3]++;
            if (VAR9[VAR3] < VAR16)
            {
                VAR23 = FUN6(VAR23, FUN7(VAR14->VAR19[VAR9[VAR3]].VAR28 / FUN8(VAR26->VAR29, 1), VAR14->VAR30, VAR31));
                VAR10 = FUN6(VAR10, VAR14->VAR19[VAR9[VAR3]].VAR11);
            }
        }
        for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++)
        {
            VAR13 *VAR14 = VAR2->VAR15[VAR3];
            VAR25 *VAR26 = VAR14->VAR27;
            if (VAR9[VAR3] && VAR23 != VAR6 / 2)
            {
                int64_t VAR32 = FUN7(VAR14->VAR19[VAR9[VAR3] - 1].VAR28 / FUN8(VAR26->VAR29, 1), VAR14->VAR30, VAR31);
                VAR21 = FUN8(VAR21, VAR32);
                VAR24 = FUN8(VAR24, FUN9(VAR32 - VAR23, VAR14->VAR33->VAR34, VAR35));
            }
        }
        if (VAR21 - VAR23 > 2 * VAR35 || VAR24 > 1024 * 1024 * 8 * 8)
        {
            FUN10(VAR9);
            return 1;
        }
    }
    FUN10(VAR9);
    return 0;
}