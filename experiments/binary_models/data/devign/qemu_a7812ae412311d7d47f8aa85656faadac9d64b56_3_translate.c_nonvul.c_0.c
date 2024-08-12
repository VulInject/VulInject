static inline void FUN1(VAR1 *VAR2, int VAR3, TCGv VAR4)
{
    if (VAR3 < 0 || VAR3 > 15)
        fprintf(VAR5, "", VAR3);
    if (VAR3 == VAR6 || VAR3 == VAR7 || VAR3 == VAR8)
        return;
    else if (VAR3 == VAR9)
        FUN2(VAR10[VAR3], VAR4, 3);
    else
    {
        if (VAR3 == VAR11)
            FUN3(VAR4);
        if (VAR2->VAR12 & VAR13 && VAR3 == VAR14)
            FUN4(VAR4);
        else if (VAR3 == VAR15)
            VAR2->VAR16 = 1;
        FUN5(VAR10[VAR3], VAR4);
    }
}