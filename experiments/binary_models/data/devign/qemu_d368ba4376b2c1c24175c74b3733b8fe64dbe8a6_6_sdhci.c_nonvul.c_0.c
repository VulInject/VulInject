static inline void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    if ((VAR3 & VAR4) && (VAR2->VAR5 & VAR4))
    {
        return;
    }
    VAR2->VAR5 = VAR3 & VAR4;
    if ((VAR3 & VAR6) && VAR2->VAR7 && (VAR2->VAR5 & VAR4) == 0)
    {
        if (VAR2->VAR7 == VAR8)
        {
            VAR2->VAR9 |= VAR10 | VAR11;
            FUN2(VAR2);
        }
        else
        {
            VAR2->VAR9 |= VAR10 | VAR12;
            FUN3(VAR2);
        }
        VAR2->VAR7 = VAR13;
    }
    else if (!VAR2->VAR7 && (VAR3 & VAR4))
    {
        if (VAR2->VAR9 & VAR11)
        {
            VAR2->VAR7 = VAR8;
        }
        else if (VAR2->VAR9 & VAR12)
        {
            VAR2->VAR7 = VAR14;
        }
    }
}