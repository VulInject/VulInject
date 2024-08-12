static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = &VAR3->VAR10;
    hwaddr VAR11;
    hwaddr VAR12;
    uint64_t VAR13, VAR14, VAR15, VAR16;
    assert(VAR5->VAR17);
    VAR14 = ~((1ULL << VAR5->VAR17->VAR18) - 1);
    if (VAR5->VAR13 & VAR19)
    {
        VAR13 = (VAR5->VAR13 & VAR20) >> VAR21;
        VAR15 = (VAR6 & ~VAR22) & VAR14;
        VAR12 = VAR13 ^ (VAR13 << 25) ^ (VAR15 >> VAR5->VAR17->VAR18);
    }
    else
    {
        VAR13 = (VAR5->VAR13 & VAR20) >> VAR23;
        VAR15 = (VAR6 & ~VAR24) & VAR14;
        VAR12 = VAR13 ^ (VAR15 >> VAR5->VAR17->VAR18);
    }
    VAR16 = (VAR5->VAR13 & VAR25) | ((VAR15 >> 16) & VAR26);
    FUN2(VAR27, "" VAR28 "" VAR28 "" VAR28 "", VAR10->VAR29, VAR10->VAR30, VAR12);
    FUN2(VAR27, "" VAR28 "" VAR28 "" VAR31 "" VAR31 "" VAR28 "", VAR10->VAR29, VAR10->VAR30, VAR13, VAR16, VAR12);
    VAR11 = FUN3(VAR3, VAR12, VAR5, 0, VAR16, VAR8);
    if (VAR11 == -1)
    {
        FUN2(VAR27, "" VAR28 "" VAR28 "" VAR31 "" VAR31 "" VAR28 "", VAR10->VAR29, VAR10->VAR30, VAR13, VAR16, ~VAR12);
        VAR11 = FUN3(VAR3, ~VAR12, VAR5, 1, VAR16, VAR8);
    }
    return VAR11;
}