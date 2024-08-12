static inline void FUN1(VAR1 *VAR2, int VAR3, tcg_target_long VAR4)
{
    if (!FUN2(VAR4, 32))
        fprintf(VAR5, "", VAR6, VAR4);
    if (!FUN2(VAR4, 13))
        FUN3(VAR2, VAR7 | FUN4(VAR3) | (((VAR8)VAR4 & 0xfffffc00) >> 10));
    FUN3(VAR2, VAR9 | FUN4(VAR3) | FUN5(VAR3) | FUN6(VAR4 & 0x3ff));
    FUN7(VAR2, VAR3, VAR4);
}