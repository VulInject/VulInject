VAR1 FUN1(VAR2 *VAR3, ram_addr_t VAR4)
{
    unsigned long VAR5 = VAR3->VAR6 >> VAR7;
    unsigned long VAR8 = VAR5 + (VAR4 >> VAR7);
    uint64_t VAR9 = FUN2(FUN3(VAR3));
    unsigned long VAR10 = VAR5 + (VAR9 >> VAR7);
    unsigned long *VAR11;
    unsigned long VAR12;
    VAR11 = FUN4(&VAR13);
    if (VAR14 && VAR8 > VAR5)
    {
        VAR12 = VAR8 + 1;
    }
    else
    {
        VAR12 = FUN5(VAR11, VAR10, VAR8);
    }
    if (VAR12 < VAR10)
    {
        FUN6(VAR12, VAR11);
        VAR15--;
    }
    return (VAR12 - VAR5) << VAR7;
}