static inline void FUN1(VAR1 *VAR2, TCGReg VAR3, uintptr_t VAR4)
{
    TCGReg VAR5 = VAR6;
    if (!FUN2(VAR4, 10))
    {
        FUN3(VAR2, VAR7, VAR3, VAR4 & ~0x3ff);
        VAR5 = VAR3;
    }
    FUN4(VAR2, VAR7, VAR3, VAR5, VAR4 & 0x3ff);
}