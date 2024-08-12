void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6)
{
    int VAR7 = (VAR3->VAR8[VAR9] & VAR10) >> VAR11;
    if (VAR5 > 3 || ((VAR3->VAR8[VAR9] & (VAR12 | VAR13)) ^ VAR12) != 0)
    {
        FUN2("", VAR4, VAR3->VAR8[VAR9]);
        FUN1(VAR14)
        (VAR3, VAR4, VAR15);
    }
    else
    {
        VAR3->VAR16[(VAR7 << 2) | (VAR5 & 3)] = VAR3->VAR16[VAR5] - (VAR6 << 3);
        FUN3(VAR3, VAR7);
        VAR3->VAR8[VAR17] |= FUN4(VAR3->VAR8[VAR18], VAR3)