static void FUN1(fprintf_function VAR1, void *VAR2, const VAR3 *VAR4, unsigned int VAR5, hwaddr VAR6, VAR7 *VAR8)
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
        FUN2(VAR2, VAR16);
    }
    if (VAR4->VAR17)
    {
        VAR9 *VAR11;
        bool VAR18 = false;
        FUN3(VAR11, VAR8, VAR19)
        {
            if (VAR11->VAR4 == VAR4->VAR17)
            {
                VAR18 = true;
            }
        }
        if (!VAR18)
        {
            VAR11 = FUN4(VAR9, 1);
            VAR11->VAR4 = VAR4->VAR17;
            FUN5(VAR8, VAR11, VAR19);
        }
        FUN2(VAR2, VAR20 "" VAR20 "" VAR20 "" VAR20 "", VAR6 + VAR4->VAR21, VAR6 + VAR4->VAR21 + FUN6(VAR4->VAR22), VAR4->VAR23, FUN7((VAR3 *)VAR4), FUN8(VAR4), FUN8(VAR4->VAR17), VAR4->VAR24, VAR4->VAR24 + FUN6(VAR4->VAR22), VAR4->VAR25 ? "" : "");
    }
    else
    {
        FUN2(VAR2, VAR20 "" VAR20 "", VAR6 + VAR4->VAR21, VAR6 + VAR4->VAR21 + FUN6(VAR4->VAR22), VAR4->VAR23, FUN7((VAR3 *)VAR4), FUN8(VAR4), VAR4->VAR25 ? "" : "");
    }
    FUN9(&VAR13);
    FUN3(VAR14, &VAR4->VAR26, VAR27)
    {
        VAR10 = FUN4(VAR9, 1);
        VAR10->VAR4 = VAR14;
        FUN3(VAR11, &VAR13, VAR19)
        {
            if (VAR10->VAR4->VAR21 < VAR11->VAR4->VAR21 || (VAR10->VAR4->VAR21 == VAR11->VAR4->VAR21 && VAR10->VAR4->VAR23 > VAR11->VAR4->VAR23))
            {
                FUN10(VAR11, VAR10, VAR19);
                VAR10 = NULL;
                break;
            }
        }
        if (VAR10)
        {
            FUN5(&VAR13, VAR10, VAR19);
        }
    }
    FUN3(VAR11, &VAR13, VAR19) { FUN1(VAR1, VAR2, VAR11->VAR4, VAR5 + 1, VAR6 + VAR4->VAR21, VAR8); }
    FUN11(VAR11, &VAR13, VAR19, VAR12) { FUN12(VAR11); }
}