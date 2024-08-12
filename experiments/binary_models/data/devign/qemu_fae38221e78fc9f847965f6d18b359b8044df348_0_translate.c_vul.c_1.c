static inline void FUN1(TCGv VAR1, int VAR2)
{
    if (VAR2 < 0 || VAR2 > 15)
    {
        fprintf(VAR3, "", VAR2);
    }
    if (VAR2 == VAR4 || VAR2 == VAR5 || VAR2 == VAR6)
    {
        FUN2(VAR1, FUN3(0));
    }
    else if (VAR2 == VAR7)
    {
        FUN2(VAR1, FUN3(32));
    }
    else
    {
        FUN2(VAR1, VAR8[VAR2]);
    }
}