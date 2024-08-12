static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7[4] = {-1, -1, -1, -1}, *VAR8 = VAR7;
    int VAR9, VAR10;
    for (VAR9 = 0; VAR9 < FUN2(VAR7) && VAR4->VAR11[VAR9]; VAR9++)
    {
        if (FUN3(VAR4, VAR9) == VAR6)
            *VAR8++ = VAR9;
    }
    for (VAR9 = 0; VAR9 < FUN2(VAR7) && VAR7[VAR9] >= 0; VAR9++)
    {
        int VAR12 = VAR2->VAR13.VAR12[VAR7[VAR9]];
        int VAR14 = VAR2->VAR13.VAR14[VAR7[VAR9]];
        VAR15 *VAR16 = VAR4->VAR11[VAR7[VAR9]];
        VAR15 *VAR17 = VAR16 + (VAR4->VAR18 >> VAR14) * VAR4->VAR19[VAR7[VAR9]];
        ptrdiff_t VAR20 = (VAR2->VAR21 >> VAR12) * VAR2->VAR13.VAR22[VAR7[VAR9]] + (VAR2->VAR23 >> VAR14) * VAR4->VAR19[VAR7[VAR9]];
        ptrdiff_t VAR24 = ((VAR2->VAR25 - VAR2->VAR21 - VAR4->VAR26) >> VAR12) * VAR2->VAR13.VAR22[VAR7[VAR9]] + ((VAR2->VAR27 - VAR2->VAR23 - VAR4->VAR18) >> VAR14) * VAR4->VAR19[VAR7[VAR9]];
        if (VAR4->VAR19[VAR7[VAR9]] < (VAR2->VAR25 >> VAR12) * VAR2->VAR13.VAR22[VAR7[VAR9]])
            return 1;
        if (VAR16 - VAR6->VAR11 < VAR20 || (VAR6->VAR11 + VAR6->VAR28) - VAR17 < VAR24)
            return 1;
        for (VAR10 = 0; VAR10 < FUN2(VAR7) && VAR7[VAR10] >= 0; VAR10++)
        {
            int VAR29 = VAR2->VAR13.VAR14[VAR7[VAR10]];
            VAR15 *VAR30 = VAR4->VAR11[VAR7[VAR10]];
            VAR15 *VAR31 = VAR30 + (VAR4->VAR18 >> VAR29) * VAR4->VAR19[VAR7[VAR10]];
            if (VAR9 == VAR10)
                continue;
            if (FUN4(VAR16 - VAR31) != FUN4(VAR16 - VAR31 - VAR20) || FUN4(VAR17 - VAR30) != FUN4(VAR17 - VAR30 + VAR24))
                return 1;
        }
    }
    return 0;
}