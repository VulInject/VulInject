static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, VAR6 *VAR7)
{
    hwaddr VAR8, VAR9;
    hwaddr VAR10;
    uint32_t VAR11, VAR12, VAR13;
    VAR11 = VAR4 & VAR14;
    VAR12 = (VAR5 & ~VAR15) >> VAR16;
    VAR10 = VAR11 ^ VAR12;
    VAR13 = (VAR11 << 7) | (VAR12 >> 10);
    FUN2(VAR17, "" VAR18 "" VAR18 "" VAR18 "", FUN3(VAR3), FUN4(VAR3), VAR10);
    FUN2(VAR17, "" VAR18 "" VAR18 "" VAR19 "" VAR19 "" VAR18 "", FUN3(VAR3), FUN4(VAR3), VAR11, VAR13, VAR10);
    VAR8 = FUN5(VAR3, VAR10);
    VAR9 = FUN6(VAR3, VAR8, 0, VAR13, VAR7);
    if (VAR9 == -1)
    {
        FUN2(VAR17, "" VAR18 "" VAR18 "" VAR19 "" VAR19 "" VAR18 "", FUN3(VAR3), FUN4(VAR3), VAR11, VAR13, ~VAR10);
        VAR8 = FUN5(VAR3, ~VAR10);
        VAR9 = FUN6(VAR3, VAR8, 1, VAR13, VAR7);
    }
    return VAR9;
}