static VAR1 FUN1(uint32_t VAR2, VAR3 *VAR4)
{
    mode_t VAR5;
    VAR5 = VAR2 & 0777;
    if (VAR2 & VAR6)
    {
        VAR5 |= VAR7;
    }
    if (VAR2 & VAR8)
    {
        VAR5 |= VAR9;
    }
    if (VAR2 & VAR10)
    {
        VAR5 |= VAR11;
    }
    if (VAR2 & VAR12)
    {
        VAR5 |= VAR13;
    }
    if (VAR2 & VAR14)
    {
        if (VAR4->VAR15 && VAR4->VAR16[0] == '')
        {
            VAR5 |= VAR17;
        }
        else
        {
            VAR5 |= VAR18;
        }
    }
    if (!(VAR5 & ~0777))
    {
        VAR5 |= VAR19;
    }
    if (VAR2 & VAR20)
    {
        VAR5 |= VAR21;
    }
    if (VAR2 & VAR22)
    {
        VAR5 |= VAR23;
    }
    if (VAR2 & VAR24)
    {
        VAR5 |= VAR25;
    }
    return VAR5;
}