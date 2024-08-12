void *FUN1(VAR1 *VAR2, hwaddr VAR3, VAR4 *VAR5, bool VAR6)
{
    hwaddr VAR7 = *VAR5;
    hwaddr VAR8 = 0;
    hwaddr VAR9, VAR10;
    VAR11 *VAR12;
    ram_addr_t VAR13 = VAR14;
    ram_addr_t VAR15;
    void *VAR16;
    while (VAR7 > 0)
    {
        VAR9 = VAR7;
        VAR12 = FUN2(VAR2, VAR3, &VAR10, &VAR9, VAR6);
        if (!(FUN3(VAR12->VAR17) && !VAR12->VAR18))
        {
            if (VAR8 || VAR19.VAR20)
            {
                break;
            }
            VAR19.VAR20 = FUN4(VAR21, VAR21);
            VAR19.VAR3 = VAR3;
            VAR19.VAR7 = VAR9;
            if (!VAR6)
            {
                FUN5(VAR2, VAR3, VAR19.VAR20, VAR9);
            }
            *VAR5 = VAR9;
            return VAR19.VAR20;
        }
        if (!VAR8)
        {
            VAR13 = FUN6(VAR12->VAR17) + VAR10;
        }
        else
        {
            if (FUN6(VAR12->VAR17) + VAR10 != VAR13 + VAR8)
            {
                break;
            }
        }
        VAR7 -= VAR9;
        VAR3 += VAR9;
        VAR8 += VAR9;
    }
    VAR15 = VAR8;
    VAR16 = FUN7(VAR13, &VAR15);
    *VAR5 = VAR15;
    return VAR16;
}