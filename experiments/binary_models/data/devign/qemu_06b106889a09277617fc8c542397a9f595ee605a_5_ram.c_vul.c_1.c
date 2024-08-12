VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, ram_addr_t VAR6, VAR1 *VAR7)
{
    unsigned long VAR8 = VAR5->VAR9 >> VAR10;
    unsigned long VAR11 = VAR8 + (VAR6 >> VAR10);
    uint64_t VAR12 = VAR5->VAR13;
    unsigned long VAR14 = VAR8 + (VAR12 >> VAR10);
    unsigned long *VAR15;
    unsigned long VAR16;
    VAR15 = FUN2(&VAR3->VAR17)->VAR18;
    if (VAR3->VAR19 && VAR11 > VAR8)
    {
        VAR16 = VAR11 + 1;
    }
    else
    {
        VAR16 = FUN3(VAR15, VAR14, VAR11);
    }
    *VAR7 = VAR16 << VAR10;
    return (VAR16 - VAR8) << VAR10;
}