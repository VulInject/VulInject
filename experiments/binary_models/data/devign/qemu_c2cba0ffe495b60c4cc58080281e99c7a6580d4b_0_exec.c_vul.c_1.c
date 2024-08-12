void *FUN1(VAR1 *VAR2, hwaddr VAR3, VAR4 *VAR5, bool VAR6)
{
    hwaddr VAR7 = *VAR5;
    hwaddr VAR8 = 0;
    hwaddr VAR9, VAR10, VAR11;
    VAR12 *VAR13, *VAR14;
    ram_addr_t VAR15;
    if (VAR7 == 0)
    {
        return NULL;
    }
    VAR9 = VAR7;
    VAR13 = FUN2(VAR2, VAR3, &VAR10, &VAR9, VAR6);
    if (!FUN3(VAR13, VAR6))
    {
        if (VAR16.VAR17)
        {
            return NULL;
        }
        VAR9 = FUN4(VAR9, VAR18);
        VAR16.VAR17 = FUN5(VAR18, VAR9);
        VAR16.VAR3 = VAR3;
        VAR16.VAR7 = VAR9;
        FUN6(VAR13);
        VAR16.VAR13 = VAR13;
        if (!VAR6)
        {
            FUN7(VAR2, VAR3, VAR16.VAR17, VAR9);
        }
        *VAR5 = VAR9;
        return VAR16.VAR17;
    }
    VAR11 = VAR10;
    VAR15 = FUN8(VAR13);
    for (;;)
    {
        VAR7 -= VAR9;
        VAR3 += VAR9;
        VAR8 += VAR9;
        if (VAR7 == 0)
        {
            break;
        }
        VAR9 = VAR7;
        VAR14 = FUN2(VAR2, VAR3, &VAR10, &VAR9, VAR6);
        if (VAR14 != VAR13 || VAR10 != VAR11 + VAR8)
        {
            break;
        }
    }
    FUN6(VAR13);
    *VAR5 = VAR8;
    return FUN9(VAR15 + VAR11, VAR5);
}