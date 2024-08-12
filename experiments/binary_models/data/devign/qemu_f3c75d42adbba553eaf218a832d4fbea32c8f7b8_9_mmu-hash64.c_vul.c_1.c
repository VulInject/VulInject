static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR7 *VAR8)
{
    hwaddr VAR9, VAR10;
    hwaddr VAR11;
    uint64_t VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR13 = (VAR5->VAR12 & VAR17) ? VAR18 : VAR19;
    VAR14 = ~((1ULL << VAR13) - 1);
    if (VAR5->VAR12 & VAR20)
    {
        VAR12 = (VAR5->VAR12 & VAR21) >> VAR22;
        VAR15 = (VAR6 & ~VAR23) & VAR14;
        VAR11 = VAR12 ^ (VAR12 << 25) ^ (VAR15 >> VAR13);
    }
    else
    {
        VAR12 = (VAR5->VAR12 & VAR21) >> VAR24;
        VAR15 = (VAR6 & ~VAR25) & VAR14;
        VAR11 = VAR12 ^ (VAR15 >> VAR13);
    }
    VAR16 = (VAR5->VAR12 & VAR26) | ((VAR15 >> 16) & VAR27);
    FUN2("" VAR28 "" VAR28 "" VAR28 "", VAR3->VAR29, VAR3->VAR30, VAR11);
    FUN2("" VAR28 "" VAR28 "" VAR31 "" VAR31 "" VAR28 "", VAR3->VAR29, VAR3->VAR30, VAR12, VAR16, VAR11);
    VAR9 = (VAR11 * VAR32) & VAR3->VAR30;
    VAR10 = FUN3(VAR3, VAR9, 0, VAR16, VAR8);
    if (VAR10 == -1)
    {
        FUN2("" VAR28 "" VAR28 "" VAR31 "" VAR31 "" VAR28 "", VAR3->VAR29, VAR3->VAR30, VAR12, VAR16, ~VAR11);
        VAR9 = (~VAR11 * VAR32) & VAR3->VAR30;
        VAR10 = FUN3(VAR3, VAR9, 1, VAR16, VAR8);
    }
    return VAR10;
}