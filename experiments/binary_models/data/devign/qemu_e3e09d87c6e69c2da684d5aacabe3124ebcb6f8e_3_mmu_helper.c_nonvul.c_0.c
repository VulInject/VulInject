static int FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, uint64_t VAR5, VAR6 *VAR7, int *VAR8, int VAR9, bool VAR10)
{
    VAR11 *VAR12 = FUN2(FUN3(VAR2));
    uint64_t VAR13, VAR14, VAR15;
    if (VAR5 & VAR16)
    {
        *VAR8 &= ~VAR17;
    }
    if ((VAR5 & VAR18) && (VAR2->VAR19[0] & VAR20))
    {
        *VAR7 = (VAR5 & 0xfffffffffff00000ULL) | (VAR3 & 0xfffff);
        FUN4("" VAR21 "", VAR22, VAR5);
        return 0;
    }
    VAR13 = VAR5 & VAR23;
    VAR14 = (VAR3 & VAR24) >> 9;
    VAR15 = FUN5(VAR12->VAR25, VAR13 + VAR14);
    FUN4("" VAR21 "" VAR21 "" VAR21 "", VAR22, VAR13, VAR14, VAR15);
    return FUN6(VAR2, VAR3, VAR4, VAR15, VAR7, VAR8, VAR9, VAR10);
}