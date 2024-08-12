static int FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, uint64_t VAR5, VAR6 *VAR7, int *VAR8, int VAR9, bool VAR10)
{
    if (VAR5 & VAR11)
    {
        FUN2("" VAR12 "", VAR13, VAR5);
        FUN3(VAR2, VAR3, VAR14, VAR4, VAR9, VAR10);
        return -1;
    }
    if (VAR5 & VAR15)
    {
        FUN3(VAR2, VAR3, VAR16, VAR4, VAR9, VAR10);
        return -1;
    }
    if (VAR5 & VAR17)
    {
        *VAR8 &= ~VAR18;
    }
    *VAR7 = VAR5 & VAR19;
    FUN4("" VAR12 "", VAR13, VAR5);
    return 0;
}