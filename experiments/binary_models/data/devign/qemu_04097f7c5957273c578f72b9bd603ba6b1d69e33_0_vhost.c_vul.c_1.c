static inline void FUN1(struct VAR1 *VAR2, uint64_t VAR3)
{
    VAR4 *VAR5;
    uint64_t VAR6;
    int VAR7;
    if (VAR3)
    {
        VAR5 = FUN2(VAR3 * sizeof *VAR5);
    }
    else
    {
        VAR5 = NULL;
    }
    VAR6 = (VAR8)(unsigned long)VAR5;
    VAR7 = FUN3(VAR2->VAR9, VAR10, &VAR6);
    assert(VAR7 >= 0);
    FUN4(&VAR2->VAR11, 0, (VAR12)~0x0ull);
    if (VAR2->VAR5)
    {
        FUN5(VAR2->VAR5);
    }
    VAR2->VAR5 = VAR5;
    VAR2->VAR13 = VAR3;
}