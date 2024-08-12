void FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, drawfn VAR12, void *VAR13, int *VAR14, int *VAR15)
{
    hwaddr VAR16;
    VAR17 *VAR18;
    VAR17 *VAR19;
    VAR17 *VAR20;
    int VAR21, VAR22 = 0;
    int VAR23;
    int VAR24;
    ram_addr_t VAR25;
    MemoryRegionSection VAR26;
    VAR3 *VAR27;
    VAR24 = *VAR14;
    *VAR14 = -1;
    VAR16 = VAR8 * VAR7;
    VAR26 = FUN2(VAR4, VAR5, VAR16);
    VAR27 = VAR26.VAR28;
    if (FUN3(VAR26.VAR29) != VAR16 || !FUN4(VAR26.VAR28))
    {
        goto VAR30;
    }
    assert(VAR27);
    assert(VAR26.VAR31 == VAR5);
    FUN5(VAR27);
    VAR20 = FUN6(VAR5, &VAR16, 0);
    if (!VAR20)
        goto VAR30;
    if (VAR16 != VAR8 * VAR7)
    {
        FUN7(VAR20, VAR16, 0, 0);
        goto VAR30;
    }
    VAR19 = VAR20;
    VAR18 = FUN8(VAR2);
    if (VAR10 < 0)
        VAR18 -= VAR10 * (VAR6 - 1);
    if (VAR9 < 0)
    {
        VAR18 -= VAR9 * (VAR7 - 1);
    }
    VAR21 = -1;
    VAR25 = VAR26.VAR32;
    VAR25 += VAR24 * VAR8;
    VAR19 += VAR24 * VAR8;
    VAR18 += VAR24 * VAR9;
    for (; VAR24 < VAR7; VAR24++)
    {
        VAR23 = FUN9(VAR27, VAR25, VAR8, VAR33);
        if (VAR23 || VAR11)
        {
            FUN10(VAR13, VAR18, VAR19, VAR6, VAR10);
            if (VAR21 == -1)
                VAR21 = VAR24;
            VAR22 = VAR24;
        }
        VAR25 += VAR8;
        VAR19 += VAR8;
        VAR18 += VAR9;
    }
    FUN7(VAR20, VAR16, 0, 0);
    if (VAR21 < 0)
    {
        goto VAR30;
    }
    FUN11(VAR27, VAR26.VAR32, VAR16, VAR33);
    *VAR14 = VAR21;
    *VAR15 = VAR22;
VAR30:
    FUN12(VAR27);
}