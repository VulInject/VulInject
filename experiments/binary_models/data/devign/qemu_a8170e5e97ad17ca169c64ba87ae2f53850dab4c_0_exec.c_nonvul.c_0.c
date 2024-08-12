void *FUN1(VAR1 *VAR2, hwaddr VAR3, VAR4 *VAR5, bool VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    hwaddr VAR10 = *VAR5;
    hwaddr VAR11 = 0;
    int VAR12;
    hwaddr VAR13;
    VAR14 *VAR15;
    ram_addr_t VAR16 = VAR17;
    ram_addr_t VAR18;
    void *VAR19;
    while (VAR10 > 0)
    {
        VAR13 = VAR3 & VAR20;
        VAR12 = (VAR13 + VAR21) - VAR3;
        if (VAR12 > VAR10)
            VAR12 = VAR10;
        VAR15 = FUN2(VAR8, VAR13 >> VAR22);
        if (!(FUN3(VAR15->VAR23) && !VAR15->VAR24))
        {
            if (VAR11 || VAR25.VAR26)
            {
                break;
            }
            VAR25.VAR26 = FUN4(VAR21, VAR21);
            VAR25.VAR3 = VAR3;
            VAR25.VAR10 = VAR12;
            if (!VAR6)
            {
                FUN5(VAR2, VAR3, VAR25.VAR26, VAR12);
            }
            *VAR5 = VAR12;
            return VAR25.VAR26;
        }
        if (!VAR11)
        {
            VAR16 = FUN6(VAR15->VAR23) + FUN7(VAR15, VAR3);
        }
        VAR10 -= VAR12;
        VAR3 += VAR12;
        VAR11 += VAR12;
    }
    VAR18 = VAR11;
    VAR19 = FUN8(VAR16, &VAR18);
    *VAR5 = VAR18;
    return VAR19;
}