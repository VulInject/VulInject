static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, target_ulong VAR7, uint32_t VAR8, int VAR9, int VAR10)
{
    target_ulong VAR11;
    if (!(VAR4->VAR12 & VAR13))
    {
        return -1;
    }
    VAR11 = ~(VAR4->VAR14 - 1);
    FUN2("" VAR15 "" VAR15 "" VAR15 "", VAR16, VAR10, VAR7, VAR8, VAR4->VAR17, VAR11, (VAR18)VAR4->VAR19);
    if (VAR4->VAR19 != 0 && VAR4->VAR19 != VAR8)
        return -1;
    if ((VAR7 & VAR11) != VAR4->VAR17)
        return -1;
    *VAR6 = (VAR4->VAR20 & VAR11) | (VAR7 & ~VAR11);
    if (VAR9)
    {
        *VAR6 |= (VAR5)(VAR4->VAR20 & 0xF) << 32;
    }
    return 0;
}