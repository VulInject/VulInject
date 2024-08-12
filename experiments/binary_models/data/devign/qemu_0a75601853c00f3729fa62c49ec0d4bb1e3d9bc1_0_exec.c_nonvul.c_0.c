VAR1 *FUN1(ram_addr_t VAR2, ram_addr_t VAR3, void (*VAR4)(const char *, uint64_t VAR5, void *VAR6), void *VAR6, bool VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    VAR1 *VAR12;
    VAR10 *VAR13 = NULL;
    VAR2 = FUN2(VAR2);
    VAR3 = FUN2(VAR3);
    VAR12 = FUN3(sizeof(*VAR12));
    VAR12->VAR9 = VAR9;
    VAR12->VAR4 = VAR4;
    VAR12->VAR14 = VAR2;
    VAR12->VAR15 = VAR3;
    assert(VAR3 >= VAR2);
    VAR12->VAR16 = -1;
    VAR12->VAR6 = VAR6;
    if (VAR6)
    {
        VAR12->VAR17 |= VAR18;
    }
    if (VAR7)
    {
        VAR12->VAR17 |= VAR19;
    }
    FUN4(VAR12, &VAR13);
    if (VAR13)
    {
        FUN5(VAR12);
        FUN6(VAR11, VAR13);
        return NULL;
    }
    return VAR12;
}