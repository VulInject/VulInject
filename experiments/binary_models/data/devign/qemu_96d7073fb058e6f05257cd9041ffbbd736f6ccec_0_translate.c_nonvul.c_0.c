static inline void FUN1(int VAR1, TCGv VAR2, int VAR3)
{
    if (VAR1 == VAR4 && FUN2(VAR3))
    {
        FUN3(VAR2, VAR5[VAR3 - 4], 8);
        FUN4(VAR2, VAR2);
    }
    else
    {
        FUN5(VAR2, VAR5[VAR3]);
    }
}