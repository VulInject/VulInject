static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    if (VAR2->VAR14 == VAR15)
    {
        VAR2->VAR16[1] = 1;
    }
    else
    {
        for (VAR13 = 1; VAR13 <= VAR7; VAR13++)
            VAR2->VAR16[VAR13] = FUN2(VAR5);
    }
    VAR8 = FUN3(VAR5, 2);
    VAR11 = FUN3(VAR5, 3) + 2;
    if (VAR11 > 7)
        VAR11 += VAR11 - 7;
    VAR12 = FUN3(VAR5, 3) + 5;
    VAR2->VAR17 = VAR18[VAR12 - 5];
    if (VAR12 > 7)
        VAR12 += VAR12 - 7;
    VAR8 = VAR8 * 12 + 25;
    VAR10 = VAR11 * 12 + 25;
    VAR9 = VAR12 * 12 + 25;
    if (VAR11 >= VAR12)
    {
        FUN4(VAR2->VAR19, VAR20, ""
                                       "",
               VAR11, VAR12);
        return VAR21;
    }
    if (VAR8 >= VAR10)
    {
        FUN4(VAR2->VAR19, VAR20, ""
                                       "",
               VAR8, VAR10);
        return VAR21;
    }
    VAR2->VAR22 = VAR8;
    VAR2->VAR23 = VAR10;
    if (!VAR24)
        VAR2->VAR17 = VAR9;
    FUN5(VAR5, VAR3, VAR2->VAR25, 0, VAR11, VAR12, VAR26, &VAR2->VAR27, VAR2->VAR28);
    return 0;
}