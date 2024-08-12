static inline void FUN1(VAR1 *VAR2, TCGType VAR3, int VAR4, tcg_target_long VAR5)
{
    if (!FUN2(VAR5, 32))
        fprintf(VAR6, "", VAR7, VAR5);
    if (FUN2(VAR5, 13))
        FUN3(VAR2, VAR8 | FUN4(VAR4) | FUN5(VAR9) | FUN6(VAR5));
    else
    {
        FUN3(VAR2, VAR10 | FUN4(VAR4) | ((VAR5 & 0xfffffc00) >> 10));
        if (VAR5 & 0x3ff)
            FUN3(VAR2, VAR8 | FUN4(VAR4) | FUN5(VAR4) | FUN6(VAR5 & 0x3ff));
    }
}