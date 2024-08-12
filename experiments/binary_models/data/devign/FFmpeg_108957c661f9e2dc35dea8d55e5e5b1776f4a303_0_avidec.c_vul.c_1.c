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
    VAR9 = FUN5(sizeof(*VAR9) * VAR2->VAR12);
    for (VAR10 = VAR11 = 0; VAR10 != VAR6; VAR11 = VAR10 + 1)
    {
        int64_t VAR21 = VAR22 / 2, VAR23 = VAR6 / 2;
        VAR10 = VAR6;
        for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++)
        {
            VAR13 *VAR14 = VAR2->VAR15[VAR3];
            int VAR16 = VAR14->VAR17;
            while (VAR9[VAR3] < VAR16 && VAR14->VAR19[VAR9[VAR3]].VAR11 < VAR11)
                VAR9[VAR3]++;
            if (VAR9[VAR3] < VAR16)
            {
                VAR23 = FUN6(VAR23, FUN7(VAR14->VAR19[VAR9[VAR3]].VAR24, VAR14->VAR25, VAR26));
                VAR10 = FUN6(VAR10, VAR14->VAR19[VAR9[VAR3]].VAR11);
            }
            if (VAR9[VAR3])
                VAR21 = FUN8(VAR21, FUN7(VAR14->VAR19[VAR9[VAR3] - 1].VAR24, VAR14->VAR25, VAR26));
        }
        if (VAR21 - VAR23 > 2 * VAR27)
        {
            FUN9(VAR9);
            return 1;
        }
    }
    FUN9(VAR9);
    return 0;
}