static int FUN1(VAR1 *VAR2, hwaddr VAR3, ram_addr_t VAR4, VAR5 *VAR6, hwaddr VAR7)
{
    unsigned long VAR8 = 0;
    int VAR9 = 0;
    VAR10 *VAR11 = NULL;
    hwaddr VAR12, VAR13;
    hwaddr VAR14 = FUN2(VAR6);
    char VAR15[80], VAR16[17];
    const char *VAR17;
    if (FUN3(VAR2, VAR3, VAR4))
    {
        return 0;
    }
    if (VAR4 <= 0)
    {
        return -1;
    }
    if (VAR6 == VAR18 && VAR3 > 0xbffff)
    {
        goto VAR19;
    }
    return -1;
VAR19:
    FUN4("" VAR20 "" VAR20 "", VAR3, VAR3 + VAR4);
    VAR12 = VAR14 >> VAR21;
    VAR13 = VAR3 >> VAR21;
    for (VAR8 = 0; VAR8 < VAR4 >> VAR21; VAR8++)
    {
        unsigned long VAR22 = VAR12 + VAR8;
        xen_pfn_t VAR23 = VAR13 + VAR8;
        VAR9 = FUN5(VAR24, VAR25, VAR26, VAR22, VAR23);
        if (VAR9)
        {
            FUN4("" VAR27 "" VAR27 "", VAR22, VAR23, VAR9, VAR28);
            return -VAR9;
        }
    }
    VAR17 = FUN6(VAR6);
    VAR11 = FUN7(sizeof(VAR10));
    VAR11->VAR3 = VAR3;
    VAR11->VAR4 = VAR4;
    VAR11->VAR29 = VAR17;
    VAR11->VAR14 = VAR14;
    FUN8(&VAR2->VAR11, VAR11, VAR30);
    FUN9(VAR24, VAR25, VAR3 >> VAR21, (VAR3 + VAR4 - 1) >> VAR21, VAR31);
    snprintf(VAR15, sizeof(VAR15), "" VAR32 "", VAR25, (VAR33)VAR14);
    snprintf(VAR16, sizeof(VAR16), "" VAR32, (VAR33)VAR3);
    if (!FUN10(VAR2->VAR34, 0, VAR15, VAR16, strlen(VAR16)))
    {
        return -1;
    }
    snprintf(VAR15, sizeof(VAR15), "" VAR32 "", VAR25, (VAR33)VAR14);
    snprintf(VAR16, sizeof(VAR16), "" VAR32, (VAR33)VAR4);
    if (!FUN10(VAR2->VAR34, 0, VAR15, VAR16, strlen(VAR16)))
    {
        return -1;
    }
    if (VAR17)
    {
        snprintf(VAR15, sizeof(VAR15), "" VAR32 "", VAR25, (VAR33)VAR14);
        if (!FUN10(VAR2->VAR34, 0, VAR15, VAR17, strlen(VAR17)))
        {
            return -1;
        }
    }
    return 0;
}