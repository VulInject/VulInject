static inline void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    TCGv VAR4;
    VAR2->VAR5 = VAR6;
    if (VAR2->VAR7 != (VAR3 & 1))
    {
        VAR4 = FUN2();
        FUN3(VAR4, VAR3 & 1);
        FUN4(VAR4, VAR8, FUN5(VAR9, VAR7));
        FUN6(VAR4);
    }
    FUN3(VAR10[15], VAR3 & ~1);
}