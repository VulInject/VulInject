static inline void FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    int64_t VAR5, VAR6, VAR7;
    QEMUIOVector VAR8;
    if (!VAR2->VAR9 || FUN2(VAR2->VAR9))
    {
        return;
    }
    assert(!(VAR4 % VAR10));
    VAR5 = VAR3 / VAR10;
    VAR6 = (VAR3 + VAR4) / VAR10;
    VAR7 = VAR6 - VAR5;
    FUN3(&VAR8, 1);
    FUN4(&VAR8, VAR2->VAR11 + (VAR5 * VAR10), VAR7 * VAR10);
    FUN5(VAR2->VAR9, VAR5, &VAR8, VAR7, VAR12, NULL);
}