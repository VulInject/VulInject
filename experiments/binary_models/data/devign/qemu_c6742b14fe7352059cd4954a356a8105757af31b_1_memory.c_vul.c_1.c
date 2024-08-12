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
    if (!VAR9)
    {
        return VAR6;
    }
    VAR10 = FUN3(FUN4(VAR4), FUN4(VAR5));
    FUN5();
    VAR12 = FUN6(&VAR9->VAR16);
    VAR14 = FUN7(VAR12, VAR10);
    if (!VAR14)
    {
        goto VAR17;
    }
    while (VAR14 > VAR12->VAR18 && FUN8(VAR14[-1].VAR4, VAR10))
    {
        --VAR14;
    }
    VAR6.VAR3 = VAR14->VAR3;
    VAR6.VAR19 = VAR9;
    VAR10 = FUN9(VAR10, VAR14->VAR4);
    VAR6.VAR20 = VAR14->VAR21;
    VAR6.VAR20 += FUN10(FUN11(VAR10.VAR22, VAR14->VAR4.VAR22));
    VAR6.VAR5 = VAR10.VAR5;
    VAR6.VAR23 = FUN10(VAR10.VAR22);
    VAR6.VAR24 = VAR14->VAR24;
    FUN12(VAR6.VAR3);
VAR17:
    FUN13();
    return VAR6;
}