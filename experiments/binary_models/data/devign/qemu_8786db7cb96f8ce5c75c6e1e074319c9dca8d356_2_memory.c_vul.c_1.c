VAR1 FUN1(VAR2 *VAR3, target_phys_addr_t VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    AddrRange VAR8 = FUN3(FUN4(VAR4), FUN4(VAR5));
    VAR9 *VAR10 = FUN5(VAR7, VAR8);
    MemoryRegionSection VAR11 = {.VAR12 = NULL, .VAR5 = 0};
    if (!VAR10)
    {
        return VAR11;
    }
    while (VAR10 > VAR7->VAR13.VAR14 && FUN6(VAR10[-1].VAR4, VAR8))
    {
        --VAR10;
    }
    VAR11.VAR12 = VAR10->VAR12;
    VAR8 = FUN7(VAR8, VAR10->VAR4);
    VAR11.VAR15 = VAR10->VAR16;
    VAR11.VAR15 += FUN8(FUN9(VAR8.VAR17, VAR10->VAR4.VAR17));
    VAR11.VAR5 = FUN8(VAR8.VAR5);
    VAR11.VAR18 = FUN8(VAR8.VAR17);
    VAR11.VAR19 = VAR10->VAR19;
    return VAR11;
}