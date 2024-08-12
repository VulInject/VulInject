static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6 = 0;
    int VAR7 = 0;
    uint32_t VAR8 = VAR5 & VAR9;
    uint32_t VAR10 = VAR4->VAR11 & VAR9;
    uint32_t VAR12[] = {VAR13, VAR14, VAR15};
    if (VAR8 ^ VAR10)
    {
        if (!VAR8)
        {
            VAR6 = 1;
            VAR7 = 0;
        }
        else
        {
            if ((VAR8 & VAR16) && (VAR4->VAR17 & VAR18))
            {
                VAR6 = 1;
                VAR7 = 1;
            }
            if ((VAR8 & VAR19) && (VAR4->VAR17 & VAR20))
            {
                VAR6 = 1;
                VAR7 = 1;
            }
        }
    }
    VAR4->VAR11 = VAR5;
    FUN2("", VAR4->VAR11 & VAR19, VAR4->VAR11 & VAR16, VAR4->VAR11, VAR6, VAR7);
    if (!VAR6)
        return;
    if (VAR7)
    {
        VAR2->VAR21 |= VAR12[VAR4 - VAR2->VAR22];
        FUN2("");
        FUN3(VAR2->VAR23.VAR24[0], 1);
    }
    else
    {
        VAR2->VAR21 &= ~VAR12[VAR4 - VAR2->VAR22];
        FUN2("");
        FUN3(VAR2->VAR23.VAR24[0], 0);
    }
}