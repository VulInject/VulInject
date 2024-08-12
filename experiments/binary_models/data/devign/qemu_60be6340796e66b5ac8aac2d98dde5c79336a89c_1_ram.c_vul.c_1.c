VAR1 FUN1(VAR2 *VAR3, ram_addr_t VAR4)
{
    unsigned long VAR5 = VAR3->VAR6 >> VAR7;
    unsigned long VAR8 = VAR5 + (VAR4 >> VAR7);
    uint64_t VAR9 = VAR3->VAR10;
    unsigned long VAR11 = VAR5 + (VAR9 >> VAR7);
    unsigned long *VAR12;
    unsigned long VAR13;
    VAR12 = FUN2(&VAR14);
    if (VAR15 && VAR8 > VAR5)
    {
        VAR13 = VAR8 + 1;
    }
    else
    {
        VAR13 = FUN3(VAR12, VAR11, VAR8);
    }
    if (VAR13 < VAR11)
    {
        FUN4(VAR13, VAR12);
        VAR16--;
    }
    return (VAR13 - VAR5) << VAR7;
}