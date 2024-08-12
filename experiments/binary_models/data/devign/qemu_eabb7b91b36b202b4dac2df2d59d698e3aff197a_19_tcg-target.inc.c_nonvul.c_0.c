static inline void FUN1(VAR1 *VAR2, int VAR3, TCGReg VAR4, TCGReg VAR5, int VAR6, int VAR7)
{
    FUN2(VAR8 == 64);
    VAR6 = FUN3(VAR6 & 0x1f) | (((VAR6 >> 5) & 1) << 1);
    VAR7 = FUN4((VAR7 >> 5) | ((VAR7 << 1) & 0x3f));
    FUN5(VAR2, VAR3 | FUN6(VAR4) | FUN7(VAR5) | VAR6 | VAR7);
}