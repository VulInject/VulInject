static inline void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = 1;
    if (!VAR2->VAR4)
    {
        VAR2->VAR5 = 1;
        if (VAR2->VAR6 == VAR7)
        {
            VAR2->VAR8[VAR9] |= VAR10;
            if (VAR2->VAR11[VAR12] & VAR13)
                VAR2->VAR14->VAR8[VAR15] = VAR16;
            else
                VAR2->VAR14->VAR8[VAR15] = VAR17;
        }
        else
        {
            VAR2->VAR8[VAR15] = VAR18;
            VAR2->VAR14->VAR8[VAR9] |= VAR19;
        }
        FUN2(VAR2);
    }
}