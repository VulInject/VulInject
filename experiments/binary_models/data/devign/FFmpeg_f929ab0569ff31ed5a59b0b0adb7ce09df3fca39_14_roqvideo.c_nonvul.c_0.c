static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR8 = VAR3 + VAR5;
    VAR9 = VAR4 + VAR6;
    if ((VAR8 < 0) || (VAR8 > VAR2->VAR11 - VAR7) || (VAR9 < 0) || (VAR9 > VAR2->VAR12 - VAR7))
    {
        FUN2(VAR2->VAR13, VAR14, "", VAR8, VAR9, VAR2->VAR11, VAR2->VAR12);
        return;
    }
    if (!VAR2->VAR15->VAR16[0])
    {
        FUN2(VAR2->VAR13, VAR14, "");
        return;
    }
    for (VAR10 = 0; VAR10 < 3; VAR10++)
    {
        int VAR17 = VAR2->VAR18->VAR19[VAR10];
        int VAR20 = VAR2->VAR15->VAR19[VAR10];
        FUN3(VAR2->VAR18->VAR16[VAR10] + VAR4 * VAR17 + VAR3, VAR2->VAR15->VAR16[VAR10] + VAR9 * VAR20 + VAR8, VAR17, VAR20, VAR7);
    }
}