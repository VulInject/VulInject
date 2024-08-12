static void FUN1(fprintf_function VAR1, void *VAR2, const VAR3 *VAR4, unsigned int VAR5, target_phys_addr_t VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10, *VAR11, *VAR12;
    MemoryRegionListHead VAR13;
    const VAR3 *VAR14;
    unsigned int VAR15;
    if (!VAR4)
    {
        return;
    }
    for (VAR15 = 0; VAR15 < VAR5; VAR15++)
    {
        FUN2(VAR2, "");
    }
    if (VAR4->VAR16)
    {
        VAR9 *VAR11;
        bool VAR17 = false;
        FUN3(VAR11, VAR8, VAR18)
        {
            if (VAR11->VAR4 == VAR4->VAR16 && !VAR11->VAR19)
            {
                VAR17 = true;
            }
        }
        if (!VAR17)
        {
            VAR11 = FUN4(VAR9, 1);
            VAR11->VAR4 = VAR4->VAR16;
            VAR11->VAR19 = false;
            FUN5(VAR8, VAR11, VAR18);
        }
        FUN2(VAR2, VAR20 "" VAR20 "" VAR20 "" VAR20 "", VAR6 + VAR4->VAR21, VAR6 + VAR4->VAR21 + (VAR22)FUN6(VAR4->VAR23) - 1, VAR4->VAR24, VAR4->VAR25, VAR4->VAR16->VAR25, VAR4->VAR26, VAR4->VAR26 + (VAR22)FUN6(VAR4->VAR23) - 1);
    }
    else
    {
        FUN2(VAR2, VAR20 "" VAR20 "", VAR6 + VAR4->VAR21, VAR6 + VAR4->VAR21 + (VAR22)FUN6(VAR4->VAR23) - 1, VAR4->VAR24, VAR4->VAR25);
    }
    FUN7(&VAR13);
    FUN3(VAR14, &VAR4->VAR27, VAR28)
    {
        VAR10 = FUN4(VAR9, 1);
        VAR10->VAR4 = VAR14;
        FUN3(VAR11, &VAR13, VAR18)
        {
            if (VAR10->VAR4->VAR21 < VAR11->VAR4->VAR21 || (VAR10->VAR4->VAR21 == VAR11->VAR4->VAR21 && VAR10->VAR4->VAR24 > VAR11->VAR4->VAR24))
            {
                FUN8(VAR11, VAR10, VAR18);
                VAR10 = NULL;
                break;
            }
        }
        if (VAR10)
        {
            FUN5(&VAR13, VAR10, VAR18);
        }
    }
    FUN3(VAR11, &VAR13, VAR18) { FUN1(VAR1, VAR2, VAR11->VAR4, VAR5 + 1, VAR6 + VAR4->VAR21, VAR8); }
    FUN9(VAR12, &VAR13, VAR18, VAR11) { FUN10(VAR11); }
}