static inline void FUN1(int VAR1)
{
    VAR2 *VAR3 = &VAR4;
    VAR5 *VAR6;
    int VAR7;
    assert(VAR1 >= VAR3->VAR8 && VAR1 < VAR3->VAR9);
    VAR6 = &VAR3->VAR10[VAR1];
    assert(VAR6->VAR11 != 0);
    VAR6->VAR11 = 0;
    VAR7 = VAR6->VAR12;
    if (VAR6->VAR13)
        VAR7 += VAR14;
    VAR6->VAR15 = VAR3->VAR16[VAR7];
    VAR3->VAR16[VAR7] = VAR1