static inline int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = FUN2(&VAR2->VAR5);
    if (VAR4 > 63 || VAR4 < 0)
    {
        FUN3(VAR2->VAR6, VAR7, "", VAR4);
        return VAR8;
    }
    VAR2->VAR4 = VAR9[VAR4][1];
    if (VAR2->VAR4 && !VAR2->VAR10)
        VAR2->VAR11 = (VAR2->VAR11 + FUN4(&VAR2->VAR5)) & 63;
    for (VAR3 = 0; VAR3 < 4; VAR3++)
        if (VAR2->VAR4 & (1 << VAR3))
            FUN5(VAR2, &VAR2->VAR5, VAR12, 0, VAR2->VAR11, VAR2->VAR13 + VAR2->VAR14[VAR3], VAR2->VAR15);
    FUN6(VAR2);
    return 0;
}