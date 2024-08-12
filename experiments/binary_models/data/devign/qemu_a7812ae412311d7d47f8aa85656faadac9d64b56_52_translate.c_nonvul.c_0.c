static inline void FUN1(TCGv VAR1, TCGv VAR2, int VAR3)
{
    if (VAR3 == 1)
        FUN2(VAR1, VAR2);
    else if (VAR3 == 2)
        FUN3(VAR1, VAR2);
    else if (!FUN4(VAR1, VAR2))
        FUN5(VAR1, VAR2);
}