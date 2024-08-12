static inline void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGReg VAR4, TCGReg VAR5, VAR6 *VAR7, int VAR8)
{
    uint64_t VAR9;
    if (VAR7->VAR10)
    {
        VAR9 = VAR7->VAR11.VAR12 - VAR2->VAR13;
    }
    else
    {
        VAR9 = FUN2(VAR2->VAR13);
        FUN3(VAR2, VAR2->VAR13, VAR14, VAR7, 0);
    }
    FUN4(VAR2, VAR15, VAR16, FUN5(VAR17, VAR3, VAR4, VAR5, VAR8), FUN6(VAR18, VAR19, VAR9));
}