static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    target_phys_addr_t VAR5 = VAR2->VAR6 & VAR7;
    VAR1 *VAR8 = FUN2(VAR5 >> VAR9);
    MemoryRegionSection VAR10 = {
        .VAR6 = VAR5,
        .VAR11 = VAR12,
    };
    target_phys_addr_t VAR13, VAR14;
    assert(VAR8->VAR15->VAR4 || VAR8->VAR15 == &VAR16);
    if (!(VAR8->VAR15->VAR4))
    {
        VAR4 = FUN3(VAR5);
        VAR10.VAR15 = &VAR4->VAR17;
        FUN4(VAR5 >> VAR9, 1, FUN5(&VAR10));
    }
    else
    {
        VAR4 = FUN6(VAR8->VAR15, VAR3, VAR17);
    }
    VAR13 = VAR2->VAR6 & ~VAR7;
    VAR14 = VAR13 + VAR2->VAR11;
    FUN7(VAR4, VAR13, VAR14, FUN5(VAR2));
}