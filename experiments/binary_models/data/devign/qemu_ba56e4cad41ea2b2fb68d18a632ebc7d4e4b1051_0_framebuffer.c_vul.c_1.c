void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, drawfn VAR11, void *VAR12, int *VAR13, int *VAR14)
{
    hwaddr VAR15;
    VAR16 *VAR17;
    VAR16 *VAR18;
    int VAR19, VAR20 = 0;
    int VAR21;
    int VAR22;
    ram_addr_t VAR23;
    VAR24 *VAR25;
    VAR22 = *VAR13;
    *VAR13 = -1;
    VAR15 = VAR7 * VAR6;
    VAR25 = VAR4->VAR26;
    if (!VAR25)
    {
        return;
    }
    FUN2(VAR25);
    VAR23 = VAR4->VAR27;
    VAR18 = FUN3(VAR25) + VAR23;
    VAR17 = FUN4(VAR2);
    if (VAR9 < 0)
    {
        VAR17 -= VAR9 * (VAR5 - 1);
    }
    if (VAR8 < 0)
    {
        VAR17 -= VAR8 * (VAR6 - 1);
    }
    VAR19 = -1;
    VAR23 += VAR22 * VAR7;
    VAR18 += VAR22 * VAR7;
    VAR17 += VAR22 * VAR8;
    for (; VAR22 < VAR6; VAR22++)
    {
        VAR21 = FUN5(VAR25, VAR23, VAR7, VAR28);
        if (VAR21 || VAR10)
        {
            FUN6(VAR12, VAR17, VAR18, VAR5, VAR9);
            if (VAR19 == -1)
                VAR19 = VAR22;
            VAR20 = VAR22;
        }
        VAR23 += VAR7;
        VAR18 += VAR7;
        VAR17 += VAR8;
    }
    if (VAR19 < 0)
    {
        return;
    }
    FUN7(VAR25, VAR4->VAR27, VAR15, VAR28);
    *VAR13 = VAR19;
    *VAR14 = VAR20;
}