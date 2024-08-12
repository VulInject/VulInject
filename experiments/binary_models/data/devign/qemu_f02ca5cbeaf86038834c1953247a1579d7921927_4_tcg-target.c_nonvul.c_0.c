static inline int FUN1(tcg_target_long VAR1, const VAR2 *VAR3)
{
    int VAR4;
    VAR4 = VAR3->VAR4;
    if (VAR4 & VAR5)
        return 1;
    else if ((VAR4 & VAR6) && FUN2(VAR1, 11))
        return 1;
    else if ((VAR4 & VAR7) && FUN2(VAR1, 13))
        return 1;
    else
        return 0;
}