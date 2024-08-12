FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    uint32_t VAR5 = VAR4 & VAR6;
    uint32_t VAR7 = ((VAR4 & VAR8) >> VAR9);
    if ((VAR4 & VAR10) >> VAR11 != 1)
        VAR4 = VAR2->VAR12[VAR13] | VAR14;
    else if (VAR4 & VAR15)
    {
        FUN2(VAR13, "", VAR7);
        if (!(VAR16[VAR7] & VAR17))
        {
            FUN2(VAR13, "", VAR7);
            VAR4 |= VAR14;
        }
        else
            VAR4 = (VAR4 ^ VAR5) | VAR2->VAR18[VAR7];
    }
    else if (VAR4 & VAR19)
    {
        FUN2(VAR13, "", VAR7, VAR5);
        if (!(VAR16[VAR7] & VAR20))
        {
            FUN2(VAR13, "", VAR7);
            VAR4 |= VAR14;
        }
        else
        {
            if (VAR7 < VAR21 && VAR22[VAR7])
            {
                VAR22[VAR7](VAR2, VAR3, VAR5);
            }
            else
            {
                VAR2->VAR18[VAR7] = VAR5;
            }
        }
    }
    VAR2->VAR12[VAR13] = VAR4 | VAR23;
    if (VAR4 & VAR24)
    {
        FUN3(VAR2, 0, VAR25);
    }
}