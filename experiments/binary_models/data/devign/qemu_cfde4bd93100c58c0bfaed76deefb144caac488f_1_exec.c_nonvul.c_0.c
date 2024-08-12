static inline void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    int VAR4;
    int VAR5;
    VAR3 &= VAR6;
    VAR4 = (VAR3 >> VAR7) & (VAR8 - 1);
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
        FUN2(&VAR2->VAR10[VAR5][VAR4], VAR3);
}