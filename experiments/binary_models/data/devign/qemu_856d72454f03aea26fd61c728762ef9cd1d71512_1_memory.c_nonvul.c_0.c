VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, uint64_t VAR5)
{
    MemoryRegionSection VAR6 = {.VAR3 = NULL};
    VAR2 *VAR7;
    VAR8 *VAR9;
    AddrRange VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR4 += VAR3->VAR4;
    for (VAR7 = VAR3; VAR7->VAR15;)
    {
        VAR7 = VAR7->VAR15;
        VAR4 += VAR7->VAR4;
    }
    VAR9 = FUN2(VAR7);
    VAR10 = FUN3(FUN4(VAR4), FUN4(VAR5));
    VAR12 = FUN5(VAR9);
    VAR14 = FUN6(VAR12, VAR10);
    if (!VAR14)
    {
        return VAR6;
    }
    while (VAR14 > VAR12->VAR16 && FUN7(VAR14[-1].VAR4, VAR10))
    {
        --VAR14;
    }
    VAR6.VAR3 = VAR14->VAR3;
    VAR6.VAR17 = VAR9;
    VAR10 = FUN8(VAR10, VAR14->VAR4);
    VAR6.VAR18 = VAR14->VAR19;
    VAR6.VAR18 += FUN9(FUN10(VAR10.VAR20, VAR14->VAR4.VAR20));
    VAR6.VAR5 = VAR10.VAR5;
    VAR6.VAR21 = FUN9(VAR10.VAR20);
    VAR6.VAR22 = VAR14->VAR22;
    FUN11(VAR6.VAR3);
    FUN12(VAR12);
    return VAR6;
}