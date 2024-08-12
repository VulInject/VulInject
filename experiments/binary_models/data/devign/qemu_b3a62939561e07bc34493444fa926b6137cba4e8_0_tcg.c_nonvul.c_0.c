static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    VAR6 = VAR2->VAR7[VAR3];
    VAR5 = &VAR2->VAR8[VAR6];
    assert(VAR5->VAR9 == VAR10);
    if (!VAR5->VAR11 && !VAR5->VAR12)
    {
        if (!VAR5->VAR13)
        {
            FUN2(VAR2, VAR6);
        }
        FUN3(VAR2, VAR5->VAR14, VAR3, VAR5->VAR15->VAR3, VAR5->VAR16);
    }
    VAR5->VAR11 = 1;
}