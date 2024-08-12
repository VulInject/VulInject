static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR7 *VAR8, unsigned *VAR9)
{
    VAR10 *VAR11 = &VAR3->VAR11;
    hwaddr VAR12, VAR13;
    uint64_t VAR14, VAR15, VAR16, VAR17;
    const struct VAR18 *VAR19 = VAR5->VAR19;
    assert(VAR19);
    if (VAR11->VAR20[VAR21] & VAR22)
    {
        VAR19 = &VAR11->VAR19.VAR19[0];
        assert(VAR19->VAR23 == 12);
    }
    VAR15 = ~((1ULL << VAR19->VAR23) - 1);
    if (VAR5->VAR14 & VAR24)
    {
        VAR14 = (VAR5->VAR14 & VAR25) >> VAR26;
        VAR16 = (VAR6 & ~VAR27) & VAR15;
        VAR12 = VAR14 ^ (VAR14 << 25) ^ (VAR16 >> VAR19->VAR23);
    }
    else
    {
        VAR14 = (VAR5->VAR14 & VAR25) >> VAR28;
        VAR16 = (VAR6 & ~VAR29) & VAR15;
        VAR12 = VAR14 ^ (VAR16 >> VAR19->VAR23);
    }
    VAR17 = (VAR5->VAR14 & VAR30) | ((VAR16 >> 16) & VAR31);
    VAR17 |= VAR32;
    FUN2(VAR33, "" VAR34 "" VAR34 "" VAR34 "", FUN3(VAR3), FUN4(VAR3), VAR12);
    FUN2(VAR33, "" VAR34 "" VAR34 "" VAR35 "" VAR35 "" VAR34 "", FUN3(VAR3), FUN4(VAR3), VAR14, VAR17, VAR12);
    VAR13 = FUN5(VAR3, VAR12, VAR19, VAR17, VAR8, VAR9);
    if (VAR13 == -1)
    {
        VAR17 |= VAR36;
        FUN2(VAR33, "" VAR34 "" VAR34 "" VAR35 "" VAR35 "" VAR34 "", FUN3(VAR3), FUN4(VAR3), VAR14, VAR17, ~VAR12);
        VAR13 = FUN5(VAR3, ~VAR12, VAR19, VAR17, VAR8, VAR9);
    }
    return VAR13;
}