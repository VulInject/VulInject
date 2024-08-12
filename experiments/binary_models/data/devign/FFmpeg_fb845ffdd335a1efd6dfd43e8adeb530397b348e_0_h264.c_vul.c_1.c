static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9 = VAR2->VAR10[VAR8][VAR11[VAR5]][1];
    int VAR12 = (VAR9 & 3) ? 2 : 0;
    int VAR13 = (VAR9 >> 2) + VAR7;
    int VAR14 = VAR13 - VAR12;
    int VAR15 = VAR13 + VAR12 + VAR6;
    return FUN2(FUN3(VAR14), VAR15);
}