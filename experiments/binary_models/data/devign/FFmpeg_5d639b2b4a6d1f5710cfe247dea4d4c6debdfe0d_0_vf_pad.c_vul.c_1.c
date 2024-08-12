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
        int VAR12 = (VAR7[VAR9] == 1 || VAR7[VAR9] == 2) ? VAR2->VAR12 : 0;
        int VAR13 = (VAR7[VAR9] == 1 || VAR7[VAR9] == 2) ? VAR2->VAR13 : 0;
        VAR14 *VAR15 = VAR4->VAR11[VAR7[VAR9]];
        VAR14 *VAR16 = VAR15 + (VAR4->VAR17 >> VAR12) * VAR4->VAR18[VAR7[VAR9]];
        ptrdiff_t VAR19 = (VAR2->VAR20 >> VAR12) * VAR2->VAR21[VAR7[VAR9]] + (VAR2->VAR22 >> VAR13) * VAR4->VAR18[VAR7[VAR9]];
        ptrdiff_t VAR23 = ((VAR2->VAR24 - VAR2->VAR20 - VAR4->VAR25) >> VAR12) * VAR2->VAR21[VAR7[VAR9]] + (VAR2->VAR22 >> VAR13) * VAR4->VAR18[VAR7[VAR9]];
        if (VAR4->VAR18[VAR7[VAR9]] < (VAR2->VAR24 >> VAR12) * VAR2->VAR21[VAR7[VAR9]])
            return 1;
        if (VAR15 - VAR6->VAR11 < VAR19 || (VAR6->VAR11 + VAR6->VAR26) - VAR16 < VAR23)
            return 1;
        for (VAR10 = 0; VAR10 < FUN2(VAR7) & VAR7[VAR10] >= 0; VAR10++)
        {
            int VAR27 = (VAR7[VAR10] == 1 || VAR7[VAR10] == 2) ? VAR2->VAR12 : 0;
            VAR14 *VAR28 = VAR4->VAR11[VAR7[VAR10]];
            VAR14 *VAR29 = VAR28 + (VAR4->VAR17 >> VAR27) * VAR4->VAR18[VAR7[VAR10]];
            if (VAR9 == VAR10)
                continue;
            if (FUN4(VAR15 - VAR29) != FUN4(VAR15 - VAR29 - VAR19) || FUN4(VAR16 - VAR28) != FUN4(VAR16 - VAR28 + VAR23))
                return 1;
        }
    }
    return 0;
}