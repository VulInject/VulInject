static int FUN1(VAR1 *VAR2, hwaddr VAR3, ram_addr_t VAR4)
{
    unsigned long VAR5 = 0;
    int VAR6 = 0;
    VAR7 *VAR8 = NULL;
    hwaddr VAR9 = 0;
    VAR8 = FUN2(VAR2, VAR3, VAR4);
    if (VAR8 == NULL)
    {
        return -1;
    }
    VAR9 = VAR8->VAR9;
    VAR4 = VAR8->VAR4;
    FUN3("" VAR10 "" VAR10 ""
            "" VAR10 "",
            VAR3, VAR3 + VAR4, VAR9);
    VAR4 >>= VAR11;
    VAR3 >>= VAR11;
    VAR9 >>= VAR11;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        xen_pfn_t VAR12 = VAR3 + VAR5;
        xen_pfn_t VAR13 = VAR9 + VAR5;
        VAR6 = FUN4(VAR14, VAR15, VAR16, VAR12, VAR13);
        if (VAR6)
        {
            fprintf(VAR17, "" VAR18 "" VAR18 "", VAR12, VAR13, VAR6);
            return -VAR6;
        }
    }
    FUN5(VAR8, VAR19);
    if (VAR2->VAR20 == VAR8)
    {
        VAR2->VAR20 = NULL;
    }
    FUN6(VAR8);
    return 0;
}