static void FUN1(VAR1 *VAR2, VAR3 *VAR4, target_phys_addr_t VAR5, AddrRange VAR6)
{
    VAR3 *VAR7;
    unsigned VAR8;
    target_phys_addr_t VAR9;
    uint64_t VAR10;
    uint64_t VAR11;
    FlatRange VAR12;
    AddrRange VAR13;
    VAR5 += VAR4->VAR14;
    VAR13 = FUN2(VAR5, VAR4->VAR15);
    if (!FUN3(VAR13, VAR6))
    {
        return;
    }
    VAR6 = FUN4(VAR13, VAR6);
    if (VAR4->VAR16)
    {
        VAR5 -= VAR4->VAR16->VAR14;
        VAR5 -= VAR4->VAR17;
        FUN1(VAR2, VAR4->VAR16, VAR5, VAR6);
        return;
    }
    FUN5(VAR7, &VAR4->VAR18, VAR19) { FUN1(VAR2, VAR7, VAR5, VAR6); }
    if (!VAR4->VAR20)
    {
        return;
    }
    VAR9 = VAR6.VAR21 - VAR5;
    VAR5 = VAR6.VAR21;
    VAR10 = VAR6.VAR15;
    for (VAR8 = 0; VAR8 < VAR2->VAR22 && VAR10; ++VAR8)
    {
        if (VAR5 >= FUN6(VAR2->VAR23[VAR8].VAR14))
        {
            continue;
        }
        if (VAR5 < VAR2->VAR23[VAR8].VAR14.VAR21)
        {
            VAR11 = FUN7(VAR10, VAR2->VAR23[VAR8].VAR14.VAR21 - VAR5);
            VAR12.VAR4 = VAR4;
            VAR12.VAR9 = VAR9;
            VAR12.VAR14 = FUN2(VAR5, VAR11);
            VAR12.VAR24 = VAR4->VAR24;
            FUN8(VAR2, VAR8, &VAR12);
            ++VAR8;
            VAR5 += VAR11;
            VAR9 += VAR11;
            VAR10 -= VAR11;
        }
        if (VAR5 == VAR2->VAR23[VAR8].VAR14.VAR21)
        {
            VAR11 = FUN7(VAR10, VAR2->VAR23[VAR8].VAR14.VAR15);
            VAR5 += VAR11;
            VAR9 += VAR11;
            VAR10 -= VAR11;
        }
    }
    if (VAR10)
    {
        VAR12.VAR4 = VAR4;
        VAR12.VAR9 = VAR9;
        VAR12.VAR14 = FUN2(VAR5, VAR10);
        VAR12.VAR24 = VAR4->VAR24;
        FUN8(VAR2, VAR8, &VAR12);
    }
}