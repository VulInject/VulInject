int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, target_ulong VAR7, uint32_t VAR8)
{
    target_ulong VAR9;
    uint32_t VAR10;
    if (!(VAR4->VAR11 & VAR12))
    {
        return -1;
    }
    VAR9 = ~(FUN2(VAR2, VAR4) - 1);
    FUN3("" VAR13 "" VAR14 "" VAR13 "" VAR14 "", VAR15, VAR7, VAR8, VAR4->VAR11, VAR4->VAR16, VAR9, VAR4->VAR17, VAR4->VAR18);
    VAR10 = (VAR4->VAR11 & VAR19) >> VAR20;
    if (VAR10 != 0 && VAR10 != VAR8)
    {
        return -1;
    }
    if ((VAR7 & VAR9) != (VAR4->VAR16 & VAR21))
    {
        return -1;
    }
    if (VAR6)
    {
        *VAR6 = (VAR4->VAR17 & VAR9) | (VAR7 & ~VAR9);
    }
    return 0;
}